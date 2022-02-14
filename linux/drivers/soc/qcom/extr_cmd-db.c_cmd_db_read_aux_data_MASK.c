
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc_hdr {int dummy; } ;
struct entry_header {int len; } ;


 void const* FUNC_0 (int) ;
 int FUNC_1 (char const*,struct entry_header const**,struct rsc_hdr const**) ;
 size_t FUNC_2 (int ) ;
 void const* FUNC_3 (struct rsc_hdr const*,struct entry_header const*) ;

const void *FUNC_4(const char *VAR_0, size_t *VAR_1)
{
 int VAR_2;
 const struct entry_header *VAR_3;
 const struct rsc_hdr *VAR_4;

 VAR_2 = FUNC_1(VAR_0, &VAR_3, &VAR_4);
 if (VAR_2)
  return FUNC_0(VAR_2);

 if (VAR_1)
  *VAR_1 = FUNC_2(VAR_3->len);

 return FUNC_3(VAR_4, VAR_3);
}

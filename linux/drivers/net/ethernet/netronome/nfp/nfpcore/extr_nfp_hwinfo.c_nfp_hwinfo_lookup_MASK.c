
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_hwinfo {char* data; int size; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*) ;

const char *FUNC_3(struct nfp_hwinfo *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4;

 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 VAR_4 = VAR_0->data + FUNC_0(VAR_0->size) - sizeof(u32);

 for (VAR_2 = VAR_0->data; *VAR_2 && VAR_2 < VAR_4;
      VAR_2 = VAR_3 + FUNC_2(VAR_3) + 1) {

  VAR_3 = VAR_2 + FUNC_2(VAR_2) + 1;

  if (FUNC_1(VAR_2, VAR_1) == 0)
   return VAR_3;
 }

 return ((void*)0);
}

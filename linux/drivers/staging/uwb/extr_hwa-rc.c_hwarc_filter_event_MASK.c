
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rceb {int dummy; } ;
struct uwb_rc {int version; } ;


 int VAR_0 ;
 int FUNC_0 (struct uwb_rc*,struct uwb_rceb**,size_t const,size_t*,size_t*) ;

__attribute__((used)) static
int FUNC_1(struct uwb_rc *VAR_1, struct uwb_rceb **VAR_2,
         const size_t VAR_3, size_t *VAR_4,
         size_t *VAR_5)
{
 int VAR_6 = -VAR_0;
 if (VAR_1->version == 0x0100)
  VAR_6 = FUNC_0(
   VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 return VAR_6;
}

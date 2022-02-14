
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgx_link_user_info {int dummy; } ;
struct lmac {struct cgx_link_user_info link_info; } ;


 int VAR_0 ;
 struct lmac* FUNC_0 (int,void*) ;

int FUNC_1(void *VAR_1, int VAR_2,
        struct cgx_link_user_info *VAR_3)
{
 struct lmac *VAR_4 = FUNC_0(VAR_2, VAR_1);

 if (!VAR_4)
  return -VAR_0;

 *VAR_3 = VAR_4->link_info;
 return 0;
}

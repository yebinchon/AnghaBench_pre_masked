
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int dummy; } ;
struct eeepc_cpufv {int cur; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eeepc_laptop*,int ) ;

__attribute__((used)) static int FUNC_1(struct eeepc_laptop *VAR_2, struct eeepc_cpufv *VAR_3)
{
 VAR_3->cur = FUNC_0(VAR_2, VAR_0);
 if (VAR_3->cur < 0)
  return -VAR_1;

 VAR_3->num = (VAR_3->cur >> 8) & 0xff;
 VAR_3->cur &= 0xff;
 if (VAR_3->num == 0 || VAR_3->num > 12)
  return -VAR_1;
 return 0;
}

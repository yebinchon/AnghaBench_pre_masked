
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct stk_camera*,int ,int ) ;

int FUNC_3(struct stk_camera *VAR_3, int VAR_4)
{
 if (VAR_4 < 0 || VAR_4 > 0xff)
  return -VAR_0;
 FUNC_2(VAR_3, VAR_1, FUNC_0(0x00, VAR_4 - 6));
 FUNC_2(VAR_3, VAR_2, FUNC_1(0xff, VAR_4 + 6));
 return 0;
}

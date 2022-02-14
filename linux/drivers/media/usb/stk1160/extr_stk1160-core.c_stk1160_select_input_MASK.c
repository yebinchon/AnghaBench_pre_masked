
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk1160 {size_t ctl_input; int v4l2_dev; } ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct stk1160*,int ,int const) ;
 int FUNC_2 (int *,int ,int ,int ,int,int ,int ) ;
 int VAR_5 ;

void FUNC_3(struct stk1160 *VAR_6)
{
 int VAR_7;
 static const u8 VAR_8[] = {
  0x98, 0x90, 0x88, 0x80, 0x98
 };

 if (VAR_6->ctl_input == VAR_3)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;

 if (VAR_6->ctl_input < FUNC_0(VAR_8)) {
  FUNC_2(&VAR_6->v4l2_dev, 0, VAR_5, VAR_4,
    VAR_7, 0, 0);
  FUNC_1(VAR_6, VAR_2, VAR_8[VAR_6->ctl_input]);
 }
}

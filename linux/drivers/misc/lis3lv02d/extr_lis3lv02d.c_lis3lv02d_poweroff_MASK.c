
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int (* reg_ctrl ) (struct lis3lv02d*,int ) ;int (* write ) (struct lis3lv02d*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lis3lv02d*) ;
 int FUNC_1 (struct lis3lv02d*,int ,int) ;
 int FUNC_2 (struct lis3lv02d*,int ) ;

void FUNC_3(struct lis3lv02d *VAR_2)
{
 if (VAR_2->reg_ctrl)
  FUNC_0(VAR_2);

 VAR_2->write(VAR_2, VAR_0, 0x00);
 if (VAR_2->reg_ctrl)
  VAR_2->reg_ctrl(VAR_2, VAR_1);
}

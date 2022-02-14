
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lis3lv02d {scalar_t__ whoami; scalar_t__ reg_ctrl; int (* write ) (struct lis3lv02d*,int ,int) ;int (* read ) (struct lis3lv02d*,int ,int*) ;scalar_t__ pdata; int (* init ) (struct lis3lv02d*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct lis3lv02d*) ;
 int FUNC_1 (struct lis3lv02d*) ;
 int FUNC_2 (struct lis3lv02d*) ;
 int FUNC_3 (struct lis3lv02d*,int ,int*) ;
 int FUNC_4 (struct lis3lv02d*,int ,int) ;
 int FUNC_5 (struct lis3lv02d*,int ,int*) ;
 int FUNC_6 (struct lis3lv02d*,int ,int) ;

int FUNC_7(struct lis3lv02d *VAR_9)
{
 int VAR_10;
 u8 VAR_11;

 VAR_9->init(VAR_9);







 if (VAR_9->pdata) {
  VAR_9->read(VAR_9, VAR_5, &VAR_11);
  if (VAR_9->whoami == VAR_7)
   VAR_11 |= VAR_0 | VAR_1;
  else if (VAR_9->whoami == VAR_8)
   VAR_11 |= VAR_2;
  else
   VAR_11 |= VAR_3;
  VAR_9->write(VAR_9, VAR_5, VAR_11);

  if (VAR_9->whoami == VAR_8) {
   VAR_9->read(VAR_9, VAR_6, &VAR_11);
   VAR_11 |= VAR_4;
   VAR_9->write(VAR_9, VAR_6, VAR_11);
  }
 }

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->reg_ctrl)
  FUNC_0(VAR_9);

 return 0;
}

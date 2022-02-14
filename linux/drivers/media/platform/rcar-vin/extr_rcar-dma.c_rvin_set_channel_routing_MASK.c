
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rvin_dev {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rvin_dev*,int ) ;
 int FUNC_4 (struct rvin_dev*,int,int ) ;
 int FUNC_5 (struct rvin_dev*,char*,int) ;

int FUNC_6(struct rvin_dev *VAR_5, u8 VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5->dev);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_8 = FUNC_3(VAR_5, VAR_3);
 FUNC_4(VAR_5, VAR_8 & ~VAR_4, VAR_3);

 VAR_7 = VAR_1 | VAR_0 | FUNC_0(VAR_6);

 FUNC_4(VAR_5, VAR_7, VAR_2);

 FUNC_5(VAR_5, "Set IFMD 0x%x\n", VAR_7);


 FUNC_4(VAR_5, VAR_8, VAR_3);

 FUNC_2(VAR_5->dev);

 return 0;
}

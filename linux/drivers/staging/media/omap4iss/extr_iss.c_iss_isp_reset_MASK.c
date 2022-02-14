
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (struct iss_device*,int ,int ) ;
 int FUNC_3 (struct iss_device*,int ,int ,int) ;
 int FUNC_4 (struct iss_device*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct iss_device *VAR_9)
{
 unsigned int VAR_10;


 FUNC_4(VAR_9, VAR_8, VAR_4,
         VAR_6,
         VAR_7);

 FUNC_3(VAR_9, VAR_8, VAR_1, VAR_2);

 VAR_10 = FUNC_1(
  FUNC_2(VAR_9, VAR_8, VAR_1) &
  VAR_3, 1000000, 1000, 1500);
 if (VAR_10) {
  FUNC_0(VAR_9->dev, "ISP5 standby timeout\n");
  return -VAR_0;
 }


 FUNC_3(VAR_9, VAR_8, VAR_4,
      VAR_5);

 VAR_10 = FUNC_1(
  !(FUNC_2(VAR_9, VAR_8, VAR_4) &
  VAR_5), 1000000, 1000, 1500);
 if (VAR_10) {
  FUNC_0(VAR_9->dev, "ISP5 reset timeout\n");
  return -VAR_0;
 }

 return 0;
}

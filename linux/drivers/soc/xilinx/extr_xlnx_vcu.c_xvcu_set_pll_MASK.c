
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xvcu_device {int dev; int vcu_slcr_ba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct xvcu_device*) ;
 int FUNC_5 (int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct xvcu_device *VAR_9)
{
 u32 VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12) {
  FUNC_0(VAR_9->dev, "failed to set pll info\n");
  return VAR_12;
 }

 FUNC_5(VAR_9->vcu_slcr_ba, VAR_1,
        1, VAR_2,
        VAR_3);
 FUNC_5(VAR_9->vcu_slcr_ba, VAR_1,
        1, VAR_4,
        VAR_5);
 FUNC_5(VAR_9->vcu_slcr_ba, VAR_1,
        0, VAR_4,
        VAR_5);




 VAR_11 = VAR_8 + FUNC_1(2000);
 do {
  VAR_10 = FUNC_3(VAR_9->vcu_slcr_ba, VAR_6);
  if (VAR_10 & VAR_7) {
   FUNC_5(VAR_9->vcu_slcr_ba, VAR_1,
          0, VAR_2,
          VAR_3);
   return 0;
  }
 } while (!FUNC_2(VAR_8, VAR_11));


 FUNC_0(VAR_9->dev, "PLL is not locked\n");
 return -VAR_0;
}

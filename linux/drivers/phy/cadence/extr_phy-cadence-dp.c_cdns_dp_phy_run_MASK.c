
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct cdns_dp_phy {int num_lanes; scalar_t__ base; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,unsigned int,int,int ,int ) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cdns_dp_phy *VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10;





 VAR_10 = FUNC_2(VAR_5->base + VAR_1,
     VAR_6, VAR_6 & 1, 0, VAR_4);
 if (VAR_10 == -VAR_0)
  FUNC_0(VAR_5->dev,
   "timeout waiting for link PLL clock enable ack\n");

 FUNC_1(100);

 switch (VAR_5->num_lanes) {

 case 1:
  VAR_7 = 0x00000004;
  VAR_8 = 0x00000001;
  VAR_9 = 0x0000003f;
  break;
 case 2:
  VAR_7 = 0x00000404;
  VAR_8 = 0x00000101;
  VAR_9 = 0x00003f3f;
  break;
 case 4:
  VAR_7 = 0x04040404;
  VAR_8 = 0x01010101;
  VAR_9 = 0x3f3f3f3f;
  break;
 }

 FUNC_3(VAR_7, VAR_5->base + VAR_3);

 VAR_10 = FUNC_2(VAR_5->base + VAR_2,
     VAR_6, (VAR_6 & VAR_9) == VAR_7, 0,
     VAR_4);
 if (VAR_10 == -VAR_0)
  FUNC_0(VAR_5->dev,
   "timeout waiting for link power state ack\n");

 FUNC_3(0, VAR_5->base + VAR_3);
 FUNC_1(100);

 FUNC_3(VAR_8, VAR_5->base + VAR_3);

 VAR_10 = FUNC_2(VAR_5->base + VAR_2,
     VAR_6, (VAR_6 & VAR_9) == VAR_8, 0,
     VAR_4);
 if (VAR_10 == -VAR_0)
  FUNC_0(VAR_5->dev,
   "timeout waiting for link power state ack\n");

 FUNC_3(0, VAR_5->base + VAR_3);
 FUNC_1(100);
}

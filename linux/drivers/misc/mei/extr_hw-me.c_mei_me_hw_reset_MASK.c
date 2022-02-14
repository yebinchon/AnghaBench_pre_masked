
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_me_hw {scalar_t__ d0i3_supported; } ;
struct mei_device {int recvd_hw_ready; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mei_device*) ;
 int FUNC_2 (struct mei_device*,int) ;
 int FUNC_3 (struct mei_device*,int) ;
 int FUNC_4 (struct mei_device*) ;
 int FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_device*) ;
 int FUNC_8 (int ) ;
 struct mei_me_hw* FUNC_9 (struct mei_device*) ;

__attribute__((used)) static int FUNC_10(struct mei_device *VAR_5, bool VAR_6)
{
 struct mei_me_hw *VAR_7 = FUNC_9(VAR_5);
 int VAR_8;
 u32 VAR_9;

 if (VAR_6) {
  FUNC_7(VAR_5);
  if (VAR_7->d0i3_supported) {
   VAR_8 = FUNC_5(VAR_5);
   if (VAR_8)
    return VAR_8;
  }
 }

 FUNC_8(VAR_5->dev);

 VAR_9 = FUNC_1(VAR_5);





 if ((VAR_9 & VAR_4) == VAR_4) {
  FUNC_0(VAR_5->dev, "H_RST is set = 0x%08X", VAR_9);
  VAR_9 &= ~VAR_4;
  FUNC_2(VAR_5, VAR_9);
  VAR_9 = FUNC_1(VAR_5);
 }

 VAR_9 |= VAR_4 | VAR_2 | VAR_1;

 if (!VAR_6)
  VAR_9 &= ~VAR_0;

 VAR_5->recvd_hw_ready = 0;
 FUNC_3(VAR_5, VAR_9);





 VAR_9 = FUNC_1(VAR_5);

 if ((VAR_9 & VAR_4) == 0)
  FUNC_0(VAR_5->dev, "H_RST is not set = 0x%08X", VAR_9);

 if ((VAR_9 & VAR_3) == VAR_3)
  FUNC_0(VAR_5->dev, "H_RDY is not cleared 0x%08X", VAR_9);

 if (!VAR_6) {
  FUNC_6(VAR_5);
  if (VAR_7->d0i3_supported) {
   VAR_8 = FUNC_4(VAR_5);
   if (VAR_8)
    return VAR_8;
  }
 }
 return 0;
}

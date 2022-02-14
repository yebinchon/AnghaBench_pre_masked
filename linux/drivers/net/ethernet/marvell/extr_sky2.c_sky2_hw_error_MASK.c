
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_hw {struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 int * VAR_13 ;
 int FUNC_6 (struct sky2_hw*,int ,int ) ;
 int FUNC_7 (struct sky2_hw*,int ,int ) ;
 int FUNC_8 (struct sky2_hw*,int ,int ) ;
 int * VAR_14 ;

__attribute__((used)) static void FUNC_9(struct sky2_hw *VAR_15, unsigned VAR_16, u32 VAR_17)
{
 struct net_device *VAR_18 = VAR_15->dev[VAR_16];

 if (FUNC_3())
  FUNC_5(VAR_18, "hw error interrupt status 0x%x\n", VAR_17);

 if (VAR_17 & VAR_9) {
  if (FUNC_3())
   FUNC_4(VAR_18, "ram data read parity error\n");

  FUNC_6(VAR_15, FUNC_1(VAR_16, VAR_0), VAR_5);
 }

 if (VAR_17 & VAR_11) {
  if (FUNC_3())
   FUNC_4(VAR_18, "ram data write parity error\n");

  FUNC_6(VAR_15, FUNC_1(VAR_16, VAR_0), VAR_6);
 }

 if (VAR_17 & VAR_8) {
  if (FUNC_3())
   FUNC_4(VAR_18, "MAC parity error\n");
  FUNC_8(VAR_15, FUNC_2(VAR_16, VAR_7), VAR_3);
 }

 if (VAR_17 & VAR_10) {
  if (FUNC_3())
   FUNC_4(VAR_18, "RX parity error\n");
  FUNC_7(VAR_15, FUNC_0(VAR_13[VAR_16], VAR_4), VAR_1);
 }

 if (VAR_17 & VAR_12) {
  if (FUNC_3())
   FUNC_4(VAR_18, "TCP segmentation error\n");
  FUNC_7(VAR_15, FUNC_0(VAR_14[VAR_16], VAR_4), VAR_2);
 }
}

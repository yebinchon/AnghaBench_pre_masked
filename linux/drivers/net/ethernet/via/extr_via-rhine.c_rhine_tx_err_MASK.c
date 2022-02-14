
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rhine_private {int tx_thresh; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rhine_private*,int ,struct net_device*,char*,...) ;
 int FUNC_1 (struct rhine_private*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct rhine_private *VAR_5, u32 VAR_6)
{
 struct net_device *VAR_7 = VAR_5->dev;

 if (VAR_6 & VAR_0) {
  FUNC_0(VAR_5, VAR_4, VAR_7,
      "Abort %08x, frame dropped\n", VAR_6);
 }

 if (VAR_6 & VAR_3) {
  FUNC_1(VAR_5);
  FUNC_0(VAR_5, VAR_4 ,VAR_7, "Transmitter underrun, "
      "Tx threshold now %02x\n", VAR_5->tx_thresh);
 }

 if (VAR_6 & VAR_1)
  FUNC_0(VAR_5, VAR_4, VAR_7, "Tx descriptor write-back race\n");

 if ((VAR_6 & VAR_2) &&
     (VAR_6 & (VAR_0 | VAR_3 | VAR_1)) == 0) {
  FUNC_1(VAR_5);
  FUNC_0(VAR_5, VAR_4, VAR_7, "Unspecified error. "
      "Tx threshold now %02x\n", VAR_5->tx_thresh);
 }

 FUNC_2(VAR_7);
}

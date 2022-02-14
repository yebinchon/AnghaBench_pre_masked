
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_ring_info {int rx_channel; } ;
struct niu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_14, struct rx_ring_info *VAR_15,
      u64 VAR_16)
{
 FUNC_0(VAR_14->dev, "RX channel %u errors ( ", VAR_15->rx_channel);

 if (VAR_16 & VAR_7)
  FUNC_1("RBR_TMOUT ");
 if (VAR_16 & VAR_12)
  FUNC_1("RSP_CNT ");
 if (VAR_16 & VAR_0)
  FUNC_1("BYTE_EN_BUS ");
 if (VAR_16 & VAR_13)
  FUNC_1("RSP_DAT ");
 if (VAR_16 & VAR_10)
  FUNC_1("RCR_ACK ");
 if (VAR_16 & VAR_11)
  FUNC_1("RCR_SHA_PAR ");
 if (VAR_16 & VAR_6)
  FUNC_1("RBR_PRE_PAR ");
 if (VAR_16 & VAR_2)
  FUNC_1("CONFIG ");
 if (VAR_16 & VAR_9)
  FUNC_1("RCRINCON ");
 if (VAR_16 & VAR_8)
  FUNC_1("RCRFULL ");
 if (VAR_16 & VAR_4)
  FUNC_1("RBRFULL ");
 if (VAR_16 & VAR_5)
  FUNC_1("RBRLOGPAGE ");
 if (VAR_16 & VAR_1)
  FUNC_1("CFIGLOGPAGE ");
 if (VAR_16 & VAR_3)
  FUNC_1("DC_FIDO ");

 FUNC_1(")\n");
}

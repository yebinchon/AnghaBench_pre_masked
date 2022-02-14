
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int private; } ;
struct adf7242_local {int rssi; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct adf7242_local*,int ,int*) ;
 int FUNC_1 (struct adf7242_local*,int*) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;
 struct adf7242_local* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_18, void *VAR_19)
{
 struct adf7242_local *VAR_20 = FUNC_3(VAR_18->private);
 u8 VAR_21, VAR_22;

 FUNC_1(VAR_20, &VAR_21);
 FUNC_0(VAR_20, VAR_13, &VAR_22);

 FUNC_2(VAR_18, "IRQ1 = %X:\n%s%s%s%s%s%s%s%s\n", VAR_22,
     VAR_22 & VAR_1 ? "IRQ_CCA_COMPLETE\n" : "",
     VAR_22 & VAR_5 ? "IRQ_SFD_RX\n" : "",
     VAR_22 & VAR_6 ? "IRQ_SFD_TX\n" : "",
     VAR_22 & VAR_4 ? "IRQ_RX_PKT_RCVD\n" : "",
     VAR_22 & VAR_7 ? "IRQ_TX_PKT_SENT\n" : "",
     VAR_22 & VAR_2 ? "IRQ_CSMA_CA\n" : "",
     VAR_22 & VAR_3 ? "IRQ_FRAME_VALID\n" : "",
     VAR_22 & VAR_0 ? "IRQ_ADDRESS_VALID\n" : "");

 FUNC_2(VAR_18, "STATUS = %X:\n%s\n%s\n%s\n%s\n%s%s%s%s%s\n", VAR_21,
     VAR_21 & VAR_17 ? "SPI_READY" : "SPI_BUSY",
     VAR_21 & VAR_15 ? "IRQ_PENDING" : "IRQ_CLEAR",
     VAR_21 & VAR_16 ? "RC_READY" : "RC_BUSY",
     VAR_21 & VAR_14 ? "CHAN_IDLE" : "CHAN_BUSY",
     (VAR_21 & 0xf) == VAR_8 ? "RC_STATUS_IDLE" : "",
     (VAR_21 & 0xf) == VAR_9 ? "RC_STATUS_MEAS" : "",
     (VAR_21 & 0xf) == VAR_10 ? "RC_STATUS_PHY_RDY" : "",
     (VAR_21 & 0xf) == VAR_11 ? "RC_STATUS_RX" : "",
     (VAR_21 & 0xf) == VAR_12 ? "RC_STATUS_TX" : "");

 FUNC_2(VAR_18, "RSSI = %d\n", VAR_20->rssi);

 return 0;
}

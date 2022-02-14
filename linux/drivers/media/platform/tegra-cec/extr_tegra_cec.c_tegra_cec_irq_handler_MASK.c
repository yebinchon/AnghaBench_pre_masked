
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_cec {int tx_done; scalar_t__ tx_buf_cur; scalar_t__ tx_buf_cnt; int* tx_buf; int rx_done; scalar_t__ rx_buf_cnt; int* rx_buf; int tx_status; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct tegra_cec*,int ) ;
 int FUNC_1 (struct tegra_cec*,int ,int) ;
 int FUNC_2 (struct device*,char*) ;
 struct tegra_cec* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct tegra_cec*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_22, void *VAR_23)
{
 struct device *VAR_24 = VAR_23;
 struct tegra_cec *VAR_25 = FUNC_3(VAR_24);
 u32 VAR_26, VAR_27;

 VAR_26 = FUNC_0(VAR_25, VAR_10);
 VAR_27 = FUNC_0(VAR_25, VAR_8);

 VAR_26 &= VAR_27;

 if (!VAR_26)
  return VAR_6;

 if (VAR_26 & VAR_18) {
  FUNC_2(VAR_24, "TX underrun, interrupt timing issue!\n");

  FUNC_5(VAR_25);
  FUNC_1(VAR_25, VAR_8,
     VAR_27 & ~VAR_9);

  VAR_25->tx_done = 1;
  VAR_25->tx_status = VAR_2;
  return VAR_7;
 }

 if ((VAR_26 & VAR_13) ||
     (VAR_26 & VAR_14)) {
  FUNC_5(VAR_25);
  FUNC_1(VAR_25, VAR_8,
     VAR_27 & ~VAR_9);

  VAR_25->tx_done = 1;
  if (VAR_26 & VAR_14)
   VAR_25->tx_status = VAR_3;
  else
   VAR_25->tx_status = VAR_1;
  return VAR_7;
 }

 if (VAR_26 & VAR_16) {
  FUNC_1(VAR_25, VAR_10,
     VAR_16);

  if (VAR_26 & VAR_15) {
   FUNC_5(VAR_25);

   VAR_25->tx_done = 1;
   VAR_25->tx_status = VAR_4;
  } else {
   VAR_25->tx_done = 1;
   VAR_25->tx_status = VAR_5;
  }
  return VAR_7;
 }

 if (VAR_26 & VAR_15)
  FUNC_4(VAR_24, "TX NAKed on the fly!\n");

 if (VAR_26 & VAR_17) {
  if (VAR_25->tx_buf_cur == VAR_25->tx_buf_cnt) {
   FUNC_1(VAR_25, VAR_8,
      VAR_27 & ~VAR_9);
  } else {
   FUNC_1(VAR_25, VAR_21,
      VAR_25->tx_buf[VAR_25->tx_buf_cur++]);
   FUNC_1(VAR_25, VAR_10,
      VAR_17);
  }
 }

 if (VAR_26 & VAR_12) {
  FUNC_1(VAR_25, VAR_10,
     VAR_12);
  VAR_25->rx_done = 0;
  VAR_25->rx_buf_cnt = 0;
 }
 if (VAR_26 & VAR_11) {
  u32 VAR_28;

  FUNC_1(VAR_25, VAR_10,
     VAR_11);
  VAR_28 = FUNC_0(VAR_25, VAR_19);
  if (VAR_25->rx_buf_cnt < VAR_0)
   VAR_25->rx_buf[VAR_25->rx_buf_cnt++] = VAR_28 & 0xff;
  if (VAR_28 & VAR_20) {
   VAR_25->rx_done = 1;
   return VAR_7;
  }
 }

 return VAR_6;
}

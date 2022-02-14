
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tegra_cec {unsigned int tx_buf_cnt; scalar_t__* tx_buf; scalar_t__ tx_buf_cur; } ;
struct cec_msg {unsigned int len; scalar_t__* msg; } ;
struct cec_adapter {struct tegra_cec* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct cec_msg*) ;
 scalar_t__ FUNC_1 (struct tegra_cec*,int ) ;
 int FUNC_2 (struct tegra_cec*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_7, u8 VAR_8,
       u32 VAR_9, struct cec_msg *VAR_10)
{
 bool VAR_11 = VAR_9 == VAR_0;
 struct tegra_cec *VAR_12 = VAR_7->priv;
 unsigned int VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15;

 if (FUNC_0(VAR_10))
  VAR_14 = VAR_3;

 VAR_12->tx_buf_cur = 0;
 VAR_12->tx_buf_cnt = VAR_10->len;

 for (VAR_13 = 0; VAR_13 < VAR_10->len; VAR_13++) {
  VAR_12->tx_buf[VAR_13] = VAR_14 | VAR_10->msg[VAR_13];
  if (VAR_13 == 0)
   VAR_12->tx_buf[VAR_13] |= VAR_6;
  if (VAR_13 == VAR_10->len - 1)
   VAR_12->tx_buf[VAR_13] |= VAR_4;
  if (VAR_13 == 0 && VAR_11)
   VAR_12->tx_buf[VAR_13] |= VAR_5;
 }

 VAR_15 = FUNC_1(VAR_12, VAR_1);
 FUNC_2(VAR_12, VAR_1,
    VAR_15 | VAR_2);

 return 0;
}

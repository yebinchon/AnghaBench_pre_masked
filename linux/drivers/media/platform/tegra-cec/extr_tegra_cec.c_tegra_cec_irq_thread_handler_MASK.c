
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_cec {int tx_done; int rx_done; scalar_t__ rx_buf_cnt; int adap; int rx_buf; int tx_status; } ;
struct device {int dummy; } ;
struct cec_msg {scalar_t__ len; int msg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cec_msg*) ;
 int FUNC_1 (int ,int ) ;
 struct tegra_cec* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct device *VAR_3 = VAR_2;
 struct tegra_cec *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4->tx_done) {
  FUNC_1(VAR_4->adap, VAR_4->tx_status);
  VAR_4->tx_done = 0;
 }
 if (VAR_4->rx_done) {
  struct cec_msg VAR_5 = {};

  VAR_5.len = VAR_4->rx_buf_cnt;
  FUNC_3(VAR_5.msg, VAR_4->rx_buf, VAR_5.len);
  FUNC_0(VAR_4->adap, &VAR_5);
  VAR_4->rx_done = 0;
  VAR_4->rx_buf_cnt = 0;
 }
 return VAR_0;
}

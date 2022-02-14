
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmi_xfer {scalar_t__ rx_done; scalar_t__ wait_for_resp; scalar_t__ tx_done; } ;
struct ath10k_ce_pipe {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct ath10k*,int ,char*,unsigned long,unsigned long,int) ;
 int FUNC_1 (struct ath10k_ce_pipe*) ;
 int FUNC_2 (struct ath10k_ce_pipe*) ;
 unsigned long VAR_4 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_5,
          struct ath10k_ce_pipe *VAR_6,
          struct ath10k_ce_pipe *VAR_7,
          struct bmi_xfer *VAR_8)
{
 unsigned long VAR_9 = VAR_4 + VAR_1;
 unsigned long VAR_10 = VAR_4;
 unsigned long VAR_11;
 int VAR_12;

 while (FUNC_4(VAR_4, VAR_9)) {
  FUNC_2(VAR_6);
  FUNC_1(VAR_7);

  if (VAR_8->tx_done && (VAR_8->rx_done == VAR_8->wait_for_resp)) {
   VAR_12 = 0;
   goto out;
  }

  FUNC_3();
 }

 VAR_12 = -VAR_2;

out:
 VAR_11 = VAR_4 - VAR_10;
 if (VAR_11 > VAR_3)
  FUNC_0(VAR_5, VAR_0,
      "bmi cmd took %lu jiffies hz %d ret %d\n",
      VAR_11, VAR_3, VAR_12);
 return VAR_12;
}

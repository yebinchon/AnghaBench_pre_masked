
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_caps; } ;
struct ath_hw {TYPE_1__ caps; } ;
struct ath9k_tx_queue_info {int tqi_aifs; int tqi_qflags; scalar_t__ tqi_cwmax; scalar_t__ tqi_cwmin; } ;
typedef int qi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int ,struct ath9k_tx_queue_info*) ;
 int FUNC_1 (struct ath9k_tx_queue_info*,int ,int) ;

int FUNC_2(struct ath_hw *VAR_3)
{
 struct ath9k_tx_queue_info VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.tqi_aifs = 1;
 VAR_4.tqi_cwmin = 0;
 VAR_4.tqi_cwmax = 0;

 if (VAR_3->caps.hw_caps & VAR_0)
  VAR_4.tqi_qflags = VAR_2;

 return FUNC_0(VAR_3, VAR_1, &VAR_4);
}

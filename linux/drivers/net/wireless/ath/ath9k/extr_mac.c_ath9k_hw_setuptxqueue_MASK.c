
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {struct ath9k_tx_queue_info* txq; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {int tqi_subtype; int tqi_type; int tqi_physCompBuf; } ;
typedef enum ath9k_tx_queue { ____Placeholder_ath9k_tx_queue } ath9k_tx_queue ;


 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int,struct ath9k_tx_queue_info const*) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 int FUNC_3 (struct ath_common*,char*,int) ;
 int FUNC_4 (struct ath9k_tx_queue_info*,int ,int) ;

int FUNC_5(struct ath_hw *VAR_3, enum ath9k_tx_queue VAR_4,
     const struct ath9k_tx_queue_info *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_0(VAR_3);
 struct ath9k_tx_queue_info *VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 132:
  VAR_8 = VAR_0 - 1;
  break;
 case 131:
  VAR_8 = VAR_0 - 2;
  break;
 case 129:
  VAR_8 = 1;
  break;
 case 128:
  VAR_8 = VAR_0 - 3;
  break;
 case 130:
  VAR_8 = VAR_5->tqi_subtype;
  break;
 default:
  FUNC_3(VAR_6, "Invalid TX queue type: %u\n", VAR_4);
  return -1;
 }

 FUNC_2(VAR_6, VAR_2, "Setup TX queue: %u\n", VAR_8);

 VAR_7 = &VAR_3->txq[VAR_8];
 if (VAR_7->tqi_type != VAR_1) {
  FUNC_3(VAR_6, "TX queue: %u already active\n", VAR_8);
  return -1;
 }
 FUNC_4(VAR_7, 0, sizeof(struct ath9k_tx_queue_info));
 VAR_7->tqi_type = VAR_4;
 VAR_7->tqi_physCompBuf = VAR_5->tqi_physCompBuf;
 (void) FUNC_1(VAR_3, VAR_8, VAR_5);

 return VAR_8;
}

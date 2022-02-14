
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_tx {int dummy; } ;
struct bna_rx {int rxf; } ;
struct bna {int tx_mod; int ethport; int ioceth; int enet; } ;
struct bfi_msgq_mhdr {int msg_id; int enet_id; } ;
 int FUNC_0 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_3 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_4 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_5 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_6 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_7 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_8 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_9 (struct bna_rx*,struct bfi_msgq_mhdr*) ;
 int FUNC_10 (struct bna_rx*,struct bfi_msgq_mhdr*) ;
 int FUNC_11 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_12 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_13 (int *,struct bfi_msgq_mhdr*) ;
 int FUNC_14 (struct bna*,struct bfi_msgq_mhdr*) ;
 int FUNC_15 (struct bna_tx*,struct bfi_msgq_mhdr*) ;
 int FUNC_16 (struct bna_tx*,struct bfi_msgq_mhdr*) ;
 int FUNC_17 (struct bna*,int ,struct bna_rx*) ;
 int FUNC_18 (struct bna*,int ,struct bna_tx*) ;

__attribute__((used)) static void
FUNC_19(void *VAR_0, struct bfi_msgq_mhdr *VAR_1)
{
 struct bna *VAR_2 = (struct bna *)VAR_0;
 struct bna_tx *VAR_3;
 struct bna_rx *VAR_4;

 switch (VAR_1->msg_id) {
 case 137:
  FUNC_17(VAR_2, VAR_1->enet_id, VAR_4);
  if (VAR_4)
   FUNC_9(VAR_4, VAR_1);
  break;

 case 138:
  FUNC_17(VAR_2, VAR_1->enet_id, VAR_4);
  if (VAR_4)
   FUNC_10(VAR_4, VAR_1);
  break;

 case 141:
 case 140:
 case 139:
 case 135:
 case 136:
 case 147:
 case 148:
 case 146:
 case 150:
 case 149:
 case 134:
 case 133:
  FUNC_17(VAR_2, VAR_1->enet_id, VAR_4);
  if (VAR_4)
   FUNC_11(&VAR_4->rxf, VAR_1);
  break;

 case 145:
  FUNC_17(VAR_2, VAR_1->enet_id, VAR_4);
  if (VAR_4)
   FUNC_13(&VAR_4->rxf, VAR_1);
  break;

 case 151:
  FUNC_17(VAR_2, VAR_1->enet_id, VAR_4);
  if (VAR_4)
   FUNC_12(&VAR_4->rxf, VAR_1);
  break;

 case 128:
  FUNC_18(VAR_2, VAR_1->enet_id, VAR_3);
  if (VAR_3)
   FUNC_15(VAR_3, VAR_1);
  break;

 case 129:
  FUNC_18(VAR_2, VAR_1->enet_id, VAR_3);
  if (VAR_3)
   FUNC_16(VAR_3, VAR_1);
  break;

 case 144:
  FUNC_2(&VAR_2->ethport, VAR_1);
  break;

 case 155:
  FUNC_7(&VAR_2->ethport, VAR_1);
  break;

 case 132:
  FUNC_8(&VAR_2->enet, VAR_1);
  break;

 case 154:
  FUNC_0(&VAR_2->ioceth, VAR_1);
  break;

 case 130:
  FUNC_14(VAR_2, VAR_1);
  break;

 case 131:

  break;

 case 152:
  FUNC_6(&VAR_2->ethport, VAR_1);
  break;

 case 153:
  FUNC_5(&VAR_2->ethport, VAR_1);
  break;

 case 142:
  FUNC_4(&VAR_2->ethport, VAR_1);
  break;

 case 143:
  FUNC_3(&VAR_2->ethport, VAR_1);
  break;

 case 156:
  FUNC_1(&VAR_2->tx_mod);
  break;

 default:
  break;
 }
}

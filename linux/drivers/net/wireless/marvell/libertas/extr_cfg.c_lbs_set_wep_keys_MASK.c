
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int* wep_key_len; int wep_tx_key; int * wep_key; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_set_wep {int * keymaterial; int * keytype; void* action; void* keyindex; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_set_wep*) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct cmd_ds_802_11_set_wep*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_4)
{
 struct cmd_ds_802_11_set_wep VAR_5;
 int VAR_6;
 int VAR_7;
 if (VAR_4->wep_key_len[0] || VAR_4->wep_key_len[1] ||
     VAR_4->wep_key_len[2] || VAR_4->wep_key_len[3]) {

  FUNC_4(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.hdr.size = FUNC_0(sizeof(VAR_5));
  VAR_5.keyindex = FUNC_0(VAR_4->wep_tx_key);
  VAR_5.action = FUNC_0(VAR_1);

  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   switch (VAR_4->wep_key_len[VAR_6]) {
   case 128:
    VAR_5.keytype[VAR_6] = VAR_3;
    break;
   case 129:
    VAR_5.keytype[VAR_6] = VAR_2;
    break;
   default:
    VAR_5.keytype[VAR_6] = 0;
    break;
   }
   FUNC_3(VAR_5.keymaterial[VAR_6], VAR_4->wep_key[VAR_6],
          VAR_4->wep_key_len[VAR_6]);
  }

  VAR_7 = FUNC_1(VAR_4, VAR_0, &VAR_5);
 } else {

  VAR_7 = FUNC_2(VAR_4);
 }

 return VAR_7;
}

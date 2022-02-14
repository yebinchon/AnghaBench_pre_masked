
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esp_cmd_priv {int cur_residue; int tot_residue; int prv_sg; int cur_sg; } ;
struct esp_cmd_entry {int message; int cmd; } ;
struct esp {int* msg_in; int msg_in_len; int* msg_out; int msg_out_len; int flags; struct esp_cmd_entry* active_cmd; int host; } ;




 struct esp_cmd_priv* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;




 int FUNC_1 (struct esp*,int ) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp*) ;
 int FUNC_4 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_5 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_6 (struct esp*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_9(struct esp *VAR_4)
{
 u8 VAR_5 = VAR_4->msg_in[0];
 int VAR_6 = VAR_4->msg_in_len;

 if (VAR_5 & 0x80) {

  FUNC_8(VAR_3, VAR_4->host,
        "Unexpected msgin identify\n");
  return 0;
 }

 switch (VAR_5) {
 case 133:
  if (VAR_6 == 1)
   return 1;
  if (VAR_6 < VAR_4->msg_in[1] + 2)
   return 1;
  FUNC_2(VAR_4);
  return 0;

 case 132: {
  struct esp_cmd_entry *VAR_7;
  struct esp_cmd_priv *VAR_8;
  if (VAR_6 == 1)
   return 1;

  if (VAR_4->msg_in[1] != 1)
   goto do_reject;

  VAR_7 = VAR_4->active_cmd;
  VAR_8 = FUNC_0(VAR_7->cmd);

  if (VAR_8->cur_residue == FUNC_7(VAR_8->cur_sg)) {
   VAR_8->cur_sg = VAR_8->prv_sg;
   VAR_8->cur_residue = 1;
  } else
   VAR_8->cur_residue++;
  VAR_8->tot_residue++;
  return 0;
 }
 case 130:
  return 0;
 case 129:
  FUNC_4(VAR_4, VAR_4->active_cmd);
  return 0;
 case 128:
  FUNC_5(VAR_4, VAR_4->active_cmd);
  return 0;

 case 135:
 case 134: {
  struct esp_cmd_entry *VAR_9 = VAR_4->active_cmd;

  VAR_9->message = VAR_5;
  FUNC_1(VAR_4, VAR_1);
  VAR_4->flags |= VAR_2;
  return 0;
 }
 case 131:
  FUNC_3(VAR_4);
  return 0;

 default:
 do_reject:
  VAR_4->msg_out[0] = 131;
  VAR_4->msg_out_len = 1;
  FUNC_6(VAR_4, VAR_0);
  return 0;
 }
}

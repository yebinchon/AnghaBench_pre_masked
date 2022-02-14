
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; int len; } ;
struct qtnf_bus {int fw_state; } ;
struct TYPE_4__ {int len; } ;
struct qlink_resp {int result; TYPE_2__ mhdr; } ;
struct TYPE_3__ {int len; } ;
struct qlink_cmd {TYPE_1__ mhdr; int vifid; int macid; int cmd_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ,scalar_t__) ;
 int FUNC_6 (char*,int ,int ,scalar_t__,int) ;
 int FUNC_7 (struct qlink_resp*,scalar_t__,int ,int ,size_t) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (struct qtnf_bus*) ;
 int FUNC_10 (struct qtnf_bus*,struct sk_buff*,struct sk_buff**) ;

__attribute__((used)) static int FUNC_11(struct qtnf_bus *VAR_3,
        struct sk_buff *VAR_4,
        struct sk_buff **VAR_5,
        size_t VAR_6,
        size_t *VAR_7)
{
 struct qlink_cmd *VAR_8;
 struct qlink_resp *VAR_9 = ((void*)0);
 struct sk_buff *VAR_10 = ((void*)0);
 u16 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_8 = (struct qlink_cmd *)VAR_4->data;
 VAR_11 = FUNC_4(VAR_8->cmd_id);
 VAR_12 = VAR_8->macid;
 VAR_13 = VAR_8->vifid;
 VAR_8->mhdr.len = FUNC_2(VAR_4->len);

 FUNC_5("VIF%u.%u cmd=0x%.4X\n", VAR_12, VAR_13, VAR_11);

 if (!FUNC_9(VAR_3) && VAR_11 != VAR_2) {
  FUNC_6("VIF%u.%u: drop cmd 0x%.4X in fw state %d\n",
   VAR_12, VAR_13, VAR_11, VAR_3->fw_state);
  FUNC_3(VAR_4);
  return -VAR_1;
 }

 VAR_14 = FUNC_10(VAR_3, VAR_4, &VAR_10);
 if (VAR_14)
  goto out;

 if (FUNC_0(!VAR_10 || !VAR_10->data)) {
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_9 = (struct qlink_resp *)VAR_10->data;
 VAR_14 = FUNC_7(VAR_9, VAR_11, VAR_12, VAR_13,
       VAR_6);
 if (VAR_14)
  goto out;


 if (VAR_5 && VAR_7)
  *VAR_7 = FUNC_4(VAR_9->mhdr.len) - VAR_6;

out:
 if (VAR_5)
  *VAR_5 = VAR_10;
 else
  FUNC_1(VAR_10);

 if (!VAR_14 && VAR_9)
  return FUNC_8(FUNC_4(VAR_9->result));

 FUNC_6("VIF%u.%u: cmd 0x%.4X failed: %d\n",
  VAR_12, VAR_13, VAR_11, VAR_14);

 return VAR_14;
}

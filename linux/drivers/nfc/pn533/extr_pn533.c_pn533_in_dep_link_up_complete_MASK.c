
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct pn533_cmd_jump_dep_response {int status; int gt; int nfcid3t; } ;
struct pn533 {int tgt_available_prots; int tgt_active_prot; TYPE_2__* nfc_dev; int dev; } ;
struct nfc_target {int nfcid1_len; int nfcid1; int supported_protocols; } ;
struct TYPE_6__ {TYPE_1__* targets; } ;
struct TYPE_5__ {int idx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_2__*,int ,int,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,struct nfc_target*,int) ;

__attribute__((used)) static int FUNC_10(struct pn533 *VAR_6, void *VAR_7,
      struct sk_buff *VAR_8)
{
 struct pn533_cmd_jump_dep_response *VAR_9;
 u8 VAR_10;
 int VAR_11;
 u8 VAR_12 = *(u8 *)VAR_7;

 FUNC_4(VAR_7);

 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (VAR_6->tgt_available_prots &&
     !(VAR_6->tgt_available_prots & (1 << VAR_1))) {
  FUNC_7(VAR_6->dev,
   "The target does not support DEP\n");
  VAR_11 = -VAR_0;
  goto error;
 }

 VAR_9 = (struct pn533_cmd_jump_dep_response *)VAR_8->data;

 VAR_11 = VAR_9->status & VAR_4;
 if (VAR_11 != VAR_5) {
  FUNC_7(VAR_6->dev,
   "Bringing DEP link up failed (error 0x%x)\n", VAR_11);
  goto error;
 }

 if (!VAR_6->tgt_available_prots) {
  struct nfc_target VAR_13;

  FUNC_2(VAR_6->dev, "Creating new target\n");

  VAR_13.supported_protocols = VAR_2;
  VAR_13.nfcid1_len = 10;
  FUNC_5(VAR_13.nfcid1, VAR_9->nfcid3t, VAR_13.nfcid1_len);
  VAR_11 = FUNC_9(VAR_6->nfc_dev, &VAR_13, 1);
  if (VAR_11)
   goto error;

  VAR_6->tgt_available_prots = 0;
 }

 VAR_6->tgt_active_prot = VAR_1;


 VAR_10 = VAR_8->len - 17;
 VAR_11 = FUNC_8(VAR_6->nfc_dev,
       VAR_9->gt, VAR_10);
 if (VAR_11 == 0)
  VAR_11 = FUNC_6(VAR_6->nfc_dev,
     VAR_6->nfc_dev->targets[0].idx,
     !VAR_12, VAR_3);

error:
 FUNC_3(VAR_8);
 return VAR_11;
}

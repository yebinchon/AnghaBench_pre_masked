
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct pn533_cmd_jump_dep_response {int status; int gt; int nfcid3t; } ;
struct pn533 {TYPE_2__* nfc_dev; int tgt_active_prot; scalar_t__ tgt_available_prots; int dev; int rf_work; int wq; } ;
struct nfc_target {int nfcid1_len; int nfcid1; int supported_protocols; } ;
struct TYPE_6__ {TYPE_1__* targets; } ;
struct TYPE_5__ {int idx; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,struct nfc_target*,int) ;
 int FUNC_8 (struct pn533*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct pn533 *VAR_5, void *VAR_6,
       struct sk_buff *VAR_7)
{
 struct pn533_cmd_jump_dep_response *VAR_8;
 struct nfc_target VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = (struct pn533_cmd_jump_dep_response *)VAR_7->data;

 VAR_11 = VAR_8->status & VAR_3;
 if (VAR_11 != VAR_4) {

  FUNC_9(VAR_5->wq, &VAR_5->rf_work);

  FUNC_3(VAR_7);
  return 0;
 }

 FUNC_2(VAR_5->dev, "Creating new target");

 VAR_9.supported_protocols = VAR_1;
 VAR_9.nfcid1_len = 10;
 FUNC_4(VAR_9.nfcid1, VAR_8->nfcid3t, VAR_9.nfcid1_len);
 VAR_11 = FUNC_7(VAR_5->nfc_dev, &VAR_9, 1);
 if (VAR_11)
  goto error;

 VAR_5->tgt_available_prots = 0;
 VAR_5->tgt_active_prot = VAR_0;


 VAR_10 = VAR_7->len - 17;
 VAR_11 = FUNC_6(VAR_5->nfc_dev,
       VAR_8->gt, VAR_10);
 if (!VAR_11) {
  VAR_11 = FUNC_5(VAR_5->nfc_dev,
     VAR_5->nfc_dev->targets[0].idx,
     0, VAR_2);

  if (!VAR_11)
   FUNC_8(VAR_5);
 }
error:
 FUNC_3(VAR_7);
 return VAR_11;
}

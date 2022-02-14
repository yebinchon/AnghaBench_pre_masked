
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipuv3_channel {int dummy; } ;
typedef struct ipuv3_channel ipu_smfc ;
struct csi_priv {int smfc_id; struct ipuv3_channel* idmac_ch; int sd; int ipu; struct ipuv3_channel* smfc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipuv3_channel*) ;
 int FUNC_1 (struct ipuv3_channel*) ;
 int FUNC_2 (struct csi_priv*) ;
 struct ipuv3_channel* FUNC_3 (int ,int) ;
 struct ipuv3_channel* FUNC_4 (int ,int) ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static int FUNC_6(struct csi_priv *VAR_1)
{
 int VAR_2, VAR_3;
 struct ipu_smfc *VAR_4;
 struct ipuv3_channel *VAR_5;

 VAR_2 = VAR_0 + VAR_1->smfc_id;

 VAR_4 = FUNC_4(VAR_1->ipu, VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_5(&VAR_1->sd, "failed to get SMFC\n");
  VAR_3 = FUNC_1(VAR_4);
  goto out;
 }
 VAR_1->smfc = VAR_4;

 VAR_5 = FUNC_3(VAR_1->ipu, VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_5(&VAR_1->sd, "could not get IDMAC channel %u\n",
    VAR_2);
  VAR_3 = FUNC_1(VAR_5);
  goto out;
 }
 VAR_1->idmac_ch = VAR_5;

 return 0;
out:
 FUNC_2(VAR_1);
 return VAR_3;
}

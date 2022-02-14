
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {int sd; struct ipuv3_channel* vdi_in_ch_n; int ipu; struct ipuv3_channel* vdi_in_ch; struct ipuv3_channel* vdi_in_ch_p; int csi_direct; struct ipuv3_channel* vdi; } ;
struct ipuv3_channel {int dummy; } ;
typedef struct ipuv3_channel ipu_vdi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ipuv3_channel*) ;
 int FUNC_1 (struct ipuv3_channel*) ;
 struct ipuv3_channel* FUNC_2 (int ,int) ;
 struct ipuv3_channel* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct vdic_priv*) ;

__attribute__((used)) static int FUNC_6(struct vdic_priv *VAR_3)
{
 int VAR_4, VAR_5;
 struct ipuv3_channel *VAR_6;
 struct ipu_vdi *VAR_7;

 VAR_7 = FUNC_3(VAR_3->ipu);
 if (FUNC_0(VAR_7)) {
  FUNC_4(&VAR_3->sd, "failed to get VDIC\n");
  VAR_4 = FUNC_1(VAR_7);
  goto out;
 }
 VAR_3->vdi = VAR_7;

 if (!VAR_3->csi_direct) {
  VAR_6 = FUNC_2(VAR_3->ipu, VAR_2);
  if (FUNC_0(VAR_6)) {
   VAR_5 = VAR_2;
   VAR_4 = FUNC_1(VAR_6);
   goto out_err_chan;
  }
  VAR_3->vdi_in_ch_p = VAR_6;

  VAR_6 = FUNC_2(VAR_3->ipu, VAR_0);
  if (FUNC_0(VAR_6)) {
   VAR_5 = VAR_0;
   VAR_4 = FUNC_1(VAR_6);
   goto out_err_chan;
  }
  VAR_3->vdi_in_ch = VAR_6;

  VAR_6 = FUNC_2(VAR_3->ipu, VAR_1);
  if (FUNC_0(VAR_6)) {
   VAR_5 = VAR_1;
   VAR_4 = FUNC_1(VAR_6);
   goto out_err_chan;
  }
  VAR_3->vdi_in_ch_n = VAR_6;
 }

 return 0;

out_err_chan:
 FUNC_4(&VAR_3->sd, "could not get IDMAC channel %u\n", VAR_5);
out:
 FUNC_5(VAR_3);
 return VAR_4;
}

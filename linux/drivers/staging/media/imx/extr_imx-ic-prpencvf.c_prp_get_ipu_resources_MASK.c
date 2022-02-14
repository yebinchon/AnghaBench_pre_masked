
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prp_priv {struct ipuv3_channel* rot_out_ch; struct ipuv3_channel* rot_in_ch; struct ipuv3_channel* out_ch; struct ipuv3_channel* ic; struct imx_ic_priv* ic_priv; } ;
struct ipuv3_channel {int dummy; } ;
typedef struct ipuv3_channel ipu_ic ;
struct imx_ic_priv {int task_id; int sd; int ipu; } ;
struct TYPE_2__ {int rot_out_ch; int rot_in_ch; int out_ch; } ;


 scalar_t__ FUNC_0 (struct ipuv3_channel*) ;
 int FUNC_1 (struct ipuv3_channel*) ;
 struct ipuv3_channel* FUNC_2 (int ,int) ;
 struct ipuv3_channel* FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (struct prp_priv*) ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static int FUNC_6(struct prp_priv *VAR_1)
{
 struct imx_ic_priv *VAR_2 = VAR_1->ic_priv;
 struct ipu_ic *VAR_3;
 struct ipuv3_channel *VAR_4, *VAR_5, *VAR_6;
 int VAR_7, VAR_8 = VAR_2->task_id;

 VAR_3 = FUNC_2(VAR_2->ipu, VAR_8);
 if (FUNC_0(VAR_3)) {
  FUNC_5(&VAR_2->sd, "failed to get IC\n");
  VAR_7 = FUNC_1(VAR_3);
  goto out;
 }
 VAR_1->ic = VAR_3;

 VAR_4 = FUNC_3(VAR_2->ipu, VAR_0[VAR_8].out_ch);
 if (FUNC_0(VAR_4)) {
  FUNC_5(&VAR_2->sd, "could not get IDMAC channel %u\n",
    VAR_0[VAR_8].out_ch);
  VAR_7 = FUNC_1(VAR_4);
  goto out;
 }
 VAR_1->out_ch = VAR_4;

 VAR_5 = FUNC_3(VAR_2->ipu, VAR_0[VAR_8].rot_in_ch);
 if (FUNC_0(VAR_5)) {
  FUNC_5(&VAR_2->sd, "could not get IDMAC channel %u\n",
    VAR_0[VAR_8].rot_in_ch);
  VAR_7 = FUNC_1(VAR_5);
  goto out;
 }
 VAR_1->rot_in_ch = VAR_5;

 VAR_6 = FUNC_3(VAR_2->ipu, VAR_0[VAR_8].rot_out_ch);
 if (FUNC_0(VAR_6)) {
  FUNC_5(&VAR_2->sd, "could not get IDMAC channel %u\n",
    VAR_0[VAR_8].rot_out_ch);
  VAR_7 = FUNC_1(VAR_6);
  goto out;
 }
 VAR_1->rot_out_ch = VAR_6;

 return 0;
out:
 FUNC_4(VAR_1);
 return VAR_7;
}

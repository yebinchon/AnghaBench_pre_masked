
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int dummy; } ;
struct csi_priv {size_t active_output_pad; scalar_t__ dest; int src_sd; scalar_t__ fim; int sd; int csi; struct v4l2_fract* frame_interval; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct csi_priv*) ;
 int FUNC_1 (struct csi_priv*) ;
 int FUNC_2 (struct csi_priv*) ;
 int FUNC_3 (scalar_t__,struct v4l2_fract*,int) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct csi_priv *VAR_4)
{
 struct v4l2_fract *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_4->frame_interval[VAR_4->active_output_pad];


 VAR_6 = FUNC_6(VAR_4->src_sd, VAR_3, VAR_2, 1);
 VAR_6 = (VAR_6 && VAR_6 != -VAR_0) ? VAR_6 : 0;
 if (VAR_6)
  return VAR_6;

 if (VAR_4->dest == VAR_1) {
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6)
   goto stop_upstream;
 }

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  goto idmac_stop;


 if (VAR_4->fim && VAR_4->dest == VAR_1) {
  VAR_6 = FUNC_3(VAR_4->fim, VAR_5, 1);
  if (VAR_6)
   goto idmac_stop;
 }

 VAR_6 = FUNC_4(VAR_4->csi);
 if (VAR_6) {
  FUNC_5(&VAR_4->sd, "CSI enable error: %d\n", VAR_6);
  goto fim_off;
 }

 return 0;

fim_off:
 if (VAR_4->fim && VAR_4->dest == VAR_1)
  FUNC_3(VAR_4->fim, ((void*)0), 0);
idmac_stop:
 if (VAR_4->dest == VAR_1)
  FUNC_1(VAR_4);
stop_upstream:
 FUNC_6(VAR_4->src_sd, VAR_3, VAR_2, 0);
 return VAR_6;
}

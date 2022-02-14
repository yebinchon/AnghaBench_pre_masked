
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_device {int dummy; } ;
struct isp_csi2_device {scalar_t__ frame_skip; int output; int regs1; struct isp_device* isp; } ;
struct isp_csi2_ctx_cfg {unsigned int ctxnum; int format_id; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (struct isp_device*,struct isp_csi2_device*,struct isp_csi2_ctx_cfg*) ;
 int FUNC_2 (struct isp_device*,struct isp_csi2_device*,unsigned int,int) ;
 int FUNC_3 (struct isp_csi2_device*) ;
 int FUNC_4 (struct isp_csi2_device*) ;
 int FUNC_5 (struct isp_device*,int ,int ) ;
 int FUNC_6 (struct isp_device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct isp_csi2_device *VAR_2,
    struct isp_csi2_ctx_cfg *VAR_3)
{
 struct isp_device *VAR_4 = VAR_2->isp;
 unsigned int VAR_5 = VAR_3->ctxnum;
 u32 VAR_6;

 VAR_6 = FUNC_5(VAR_4, VAR_2->regs1, FUNC_0(VAR_5));
 FUNC_6(VAR_4, VAR_6, VAR_2->regs1, FUNC_0(VAR_5));

 if (!(VAR_6 & VAR_1))
  return;
 if (VAR_2->frame_skip) {
  VAR_2->frame_skip--;
  if (VAR_2->frame_skip == 0) {
   VAR_3->format_id = FUNC_3(VAR_2);
   FUNC_1(VAR_4, VAR_2, VAR_3);
   FUNC_2(VAR_4, VAR_2, VAR_5, 1);
  }
  return;
 }

 if (VAR_2->output & VAR_0)
  FUNC_4(VAR_2);
}

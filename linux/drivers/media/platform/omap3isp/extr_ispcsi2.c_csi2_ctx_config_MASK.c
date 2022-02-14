
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_device {int dummy; } ;
struct isp_csi2_device {int regs1; } ;
struct isp_csi2_ctx_cfg {int virtual_id; int format_id; int alpha; int data_offset; int ping_addr; int pong_addr; int ctxnum; scalar_t__ dpcm_predictor; scalar_t__ dpcm_decompress; scalar_t__ checksum_enabled; scalar_t__ eol_enabled; scalar_t__ eof_enabled; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct isp_device*,int ,int ) ;
 int FUNC_8 (struct isp_device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct isp_device *VAR_14,
       struct isp_csi2_device *VAR_15,
       struct isp_csi2_ctx_cfg *VAR_16)
{
 u32 VAR_17;


 VAR_17 = FUNC_7(VAR_14, VAR_15->regs1, FUNC_0(VAR_16->ctxnum));

 if (VAR_16->eof_enabled)
  VAR_17 |= VAR_1;
 else
  VAR_17 &= ~VAR_1;

 if (VAR_16->eol_enabled)
  VAR_17 |= VAR_2;
 else
  VAR_17 &= ~VAR_2;

 if (VAR_16->checksum_enabled)
  VAR_17 |= VAR_0;
 else
  VAR_17 &= ~VAR_0;

 FUNC_8(VAR_14, VAR_17, VAR_15->regs1, FUNC_0(VAR_16->ctxnum));


 VAR_17 = FUNC_7(VAR_14, VAR_15->regs1, FUNC_1(VAR_16->ctxnum));

 VAR_17 &= ~(VAR_8);
 VAR_17 |= VAR_16->virtual_id << VAR_9;

 VAR_17 &= ~(VAR_4);
 VAR_17 |= VAR_16->format_id << VAR_5;

 if (VAR_16->dpcm_decompress) {
  if (VAR_16->dpcm_predictor)
   VAR_17 |= VAR_3;
  else
   VAR_17 &= ~VAR_3;
 }

 if (FUNC_6(VAR_16->format_id)) {
  VAR_17 &= ~VAR_6;
  VAR_17 |= 2 << VAR_7;
 }

 FUNC_8(VAR_14, VAR_17, VAR_15->regs1, FUNC_1(VAR_16->ctxnum));


 VAR_17 = FUNC_7(VAR_14, VAR_15->regs1, FUNC_2(VAR_16->ctxnum));
 VAR_17 &= ~(VAR_10);
 VAR_17 |= (VAR_16->alpha << VAR_11);

 FUNC_8(VAR_14, VAR_17, VAR_15->regs1, FUNC_2(VAR_16->ctxnum));


 VAR_17 = FUNC_7(VAR_14, VAR_15->regs1,
       FUNC_3(VAR_16->ctxnum));
 VAR_17 &= ~VAR_12;
 VAR_17 |= VAR_16->data_offset << VAR_13;
 FUNC_8(VAR_14, VAR_17, VAR_15->regs1,
         FUNC_3(VAR_16->ctxnum));

 FUNC_8(VAR_14, VAR_16->ping_addr,
         VAR_15->regs1, FUNC_4(VAR_16->ctxnum));

 FUNC_8(VAR_14, VAR_16->pong_addr,
         VAR_15->regs1, FUNC_5(VAR_16->ctxnum));
}

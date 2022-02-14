
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vdoa_data {int dev; scalar_t__ regs; struct vdoa_ctx* curr_ctx; } ;
struct vdoa_ctx {int completion; int completed_job; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct vdoa_data *VAR_9 = VAR_8;
 struct vdoa_ctx *VAR_10;
 u32 VAR_11;


 FUNC_4(0, VAR_9->regs + VAR_1);

 VAR_10 = VAR_9->curr_ctx;
 if (!VAR_10) {
  FUNC_2(VAR_9->dev,
   "Instance released before the end of transaction\n");
  return VAR_0;
 }

 VAR_11 = FUNC_3(VAR_9->regs + VAR_2);
 FUNC_4(VAR_11, VAR_9->regs + VAR_2);
 if (VAR_11 & VAR_4) {
  VAR_11 = FUNC_3(VAR_9->regs + VAR_5) & VAR_6;
  FUNC_1(VAR_9->dev, "AXI %s error\n", VAR_11 ? "write" : "read");
 } else if (!(VAR_11 & VAR_3)) {
  FUNC_2(VAR_9->dev, "Spurious interrupt\n");
 }
 VAR_10->completed_job++;
 FUNC_0(&VAR_10->completion);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vdoa_q_data {scalar_t__ pixelformat; int height; int width; int bytesperline; } ;
struct vdoa_data {scalar_t__ regs; struct vdoa_ctx* curr_ctx; } ;
struct vdoa_ctx {struct vdoa_q_data* q_data; int submitted_job; int completion; struct vdoa_data* vdoa; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct vdoa_ctx*) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct vdoa_ctx *VAR_18, dma_addr_t VAR_19, dma_addr_t VAR_20)
{
 struct vdoa_q_data *VAR_21, *VAR_22;
 struct vdoa_data *VAR_23 = VAR_18->vdoa;
 u32 VAR_24;

 if (VAR_23->curr_ctx)
  FUNC_2(VAR_23->curr_ctx);

 VAR_23->curr_ctx = VAR_18;

 FUNC_0(&VAR_18->completion);
 VAR_18->submitted_job++;

 VAR_21 = &VAR_18->q_data[VAR_1];
 VAR_22 = &VAR_18->q_data[VAR_0];


 if (VAR_22->pixelformat == VAR_4)
  VAR_24 = VAR_6;
 else
  VAR_24 = 0;
 FUNC_3(VAR_24, VAR_23->regs + VAR_5);

 FUNC_3(VAR_22->height << 16 | VAR_22->width,
        VAR_23->regs + VAR_7);

 VAR_24 = VAR_19;
 FUNC_3(VAR_24, VAR_23->regs + VAR_9);

 FUNC_3(VAR_21->bytesperline << 16 | VAR_22->bytesperline,
        VAR_23->regs + VAR_13);

 if (VAR_22->pixelformat == VAR_2 ||
     VAR_22->pixelformat == VAR_3)
  VAR_24 = VAR_22->bytesperline * VAR_22->height;
 else
  VAR_24 = 0;
 FUNC_3(VAR_24, VAR_23->regs + VAR_12);

 VAR_24 = VAR_20;
 FUNC_3(VAR_24, VAR_23->regs + VAR_16);
 VAR_24 = FUNC_1(VAR_21->bytesperline * VAR_21->height, 4096);
 FUNC_3(VAR_24, VAR_23->regs + VAR_17);


 FUNC_3(VAR_11 | VAR_10, VAR_23->regs + VAR_8);
 FUNC_3(VAR_15, VAR_23->regs + VAR_14);
}

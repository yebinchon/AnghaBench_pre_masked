
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct vb2_buffer {int dummy; } ;
struct dt3155_priv {int width; int config; int csr2; scalar_t__ regs; scalar_t__ sequence; TYPE_1__* curr_buf; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct vb2_buffer vb2_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct vb2_buffer*,int ) ;
 struct dt3155_priv* FUNC_2 (struct vb2_queue*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_5(struct vb2_queue *VAR_27, unsigned VAR_28)
{
 struct dt3155_priv *VAR_29 = FUNC_2(VAR_27);
 struct vb2_buffer *VAR_30 = &VAR_29->curr_buf->vb2_buf;
 dma_addr_t VAR_31;

 VAR_29->sequence = 0;
 VAR_31 = FUNC_1(VAR_30, 0);
 FUNC_0(VAR_31, VAR_29->regs + VAR_10);
 FUNC_0(VAR_31 + VAR_29->width, VAR_29->regs + VAR_24);
 FUNC_0(VAR_29->width, VAR_29->regs + VAR_11);
 FUNC_0(VAR_29->width, VAR_29->regs + VAR_25);

 FUNC_0(VAR_21 | VAR_19 | VAR_20 |
   VAR_17 | VAR_18, VAR_29->regs + VAR_22);
 FUNC_0(VAR_12 | VAR_26 | VAR_14 | VAR_13 |
    VAR_16 | VAR_15 | VAR_2 | VAR_3,
       VAR_29->regs + VAR_5);
 FUNC_3(VAR_29->regs);
 FUNC_4(VAR_29->regs, VAR_4, VAR_29->config);
 FUNC_4(VAR_29->regs, VAR_9, VAR_8 | VAR_7);
 FUNC_4(VAR_29->regs, VAR_23, VAR_8 | VAR_7);


 FUNC_4(VAR_29->regs, VAR_6, VAR_29->csr2 | VAR_0 | VAR_1);
 return 0;
}

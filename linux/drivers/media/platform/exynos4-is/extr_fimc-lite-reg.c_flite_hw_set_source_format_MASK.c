
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct flite_frame {int f_width; int f_height; TYPE_1__* fmt; } ;
struct TYPE_4__ {int vdev; } ;
struct fimc_lite {scalar_t__ regs; TYPE_2__ ve; } ;
struct TYPE_3__ {int mbus_code; } ;


 int FUNC_0 (int**) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int** VAR_5 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct fimc_lite *VAR_6, struct flite_frame *VAR_7)
{
 u32 VAR_8 = VAR_7->fmt->mbus_code;
 int VAR_9 = FUNC_0(VAR_5);
 u32 VAR_10;

 while (--VAR_9) {
  if (VAR_5[VAR_9][0] == VAR_8)
   break;
 }

 if (VAR_9 == 0 && VAR_5[VAR_9][0] != VAR_8) {
  FUNC_2(&VAR_6->ve.vdev,
    "Unsupported pixel code, falling back to %#08x\n",
    VAR_5[VAR_9][0]);
 }

 VAR_10 = FUNC_1(VAR_6->regs + VAR_0);
 VAR_10 &= ~VAR_1;
 VAR_10 |= VAR_5[VAR_9][2];
 FUNC_3(VAR_10, VAR_6->regs + VAR_0);

 VAR_10 = FUNC_1(VAR_6->regs + VAR_2);
 VAR_10 &= ~(VAR_3 |
   VAR_4);
 VAR_10 |= (VAR_7->f_width << 16) | VAR_7->f_height;
 VAR_10 |= VAR_5[VAR_9][1];
 FUNC_3(VAR_10, VAR_6->regs + VAR_2);
}

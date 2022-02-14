
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ af_mode; } ;
struct TYPE_4__ {int mask; } ;
struct fmdev {scalar_t__ curr_fmmode; TYPE_1__ rx; TYPE_2__ irq_info; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fmdev*,int ,int ,int *,int,int *,int *) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct fmdev *VAR_8, u8 VAR_9)
{
 u16 VAR_10;
 int VAR_11;

 if (VAR_8->curr_fmmode != VAR_3)
  return -VAR_1;

 if (VAR_9 != VAR_5 &&
     VAR_9 != VAR_4) {
  FUNC_1("Invalid af mode\n");
  return -VAR_0;
 }

 if (VAR_9 == VAR_5)
  VAR_8->irq_info.mask |= VAR_2;
 else
  VAR_8->irq_info.mask &= ~VAR_2;

 VAR_10 = VAR_8->irq_info.mask;
 VAR_11 = FUNC_0(VAR_8, VAR_6, VAR_7, &VAR_10,
   sizeof(VAR_10), ((void*)0), ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8->rx.af_mode = VAR_9;

 return 0;
}

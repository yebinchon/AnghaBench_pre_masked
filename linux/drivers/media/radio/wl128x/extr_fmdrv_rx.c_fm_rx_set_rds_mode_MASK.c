
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ flag; scalar_t__ rd_idx; scalar_t__ wr_idx; scalar_t__ last_blk_idx; } ;
struct TYPE_6__ {TYPE_2__ rds; } ;
struct TYPE_4__ {int mask; } ;
struct fmdev {TYPE_3__ rx; TYPE_1__ irq_info; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct fmdev*) ;
 int FUNC_1 (struct fmdev*,int ,int ,int *,int,int *,int *) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct fmdev *VAR_15, u8 VAR_16)
{
 u16 VAR_17;
 int VAR_18;

 if (VAR_16 != VAR_3 && VAR_16 != VAR_2) {
  FUNC_2("Invalid rds option\n");
  return -VAR_0;
 }

 if (VAR_16 == VAR_3
     && VAR_15->rx.rds.flag == VAR_2) {

  VAR_17 = VAR_5;
  VAR_18 = FUNC_1(VAR_15, VAR_10, VAR_14, &VAR_17,
    sizeof(VAR_17), ((void*)0), ((void*)0));
  if (VAR_18 < 0)
   return VAR_18;


  VAR_17 = VAR_8;
  VAR_18 = FUNC_1(VAR_15, VAR_11, VAR_14, &VAR_17,
  sizeof(VAR_17), ((void*)0), ((void*)0));
  if (VAR_18 < 0)
   return VAR_18;


  VAR_18 = FUNC_1(VAR_15, VAR_1, VAR_13, ((void*)0), 2,
    ((void*)0), ((void*)0));
  if (VAR_18 < 0)
   return VAR_18;


  VAR_17 = VAR_7;
  VAR_18 = FUNC_1(VAR_15, VAR_12, VAR_14, &VAR_17,
  sizeof(VAR_17), ((void*)0), ((void*)0));
  if (VAR_18 < 0)
   return VAR_18;


  VAR_15->irq_info.mask |= VAR_4;
  VAR_17 = VAR_15->irq_info.mask;
  VAR_18 = FUNC_1(VAR_15, VAR_9, VAR_14, &VAR_17,
    sizeof(VAR_17), ((void*)0), ((void*)0));
  if (VAR_18 < 0) {
   VAR_15->irq_info.mask &= ~VAR_4;
   return VAR_18;
  }


  VAR_15->rx.rds.flag = VAR_3;
 } else if (VAR_16 == VAR_2
     && VAR_15->rx.rds.flag == VAR_3) {

  VAR_17 = VAR_6;
  VAR_18 = FUNC_1(VAR_15, VAR_10, VAR_14, &VAR_17,
    sizeof(VAR_17), ((void*)0), ((void*)0));
  if (VAR_18 < 0)
   return VAR_18;


  VAR_15->rx.rds.last_blk_idx = 0;
  VAR_15->rx.rds.wr_idx = 0;
  VAR_15->rx.rds.rd_idx = 0;
  FUNC_0(VAR_15);


  VAR_15->irq_info.mask &= ~(VAR_4);
  VAR_15->rx.rds.flag = VAR_2;
 }

 return 0;
}

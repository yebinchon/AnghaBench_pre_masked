
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ rds_mode; } ;
struct fmdev {scalar_t__ curr_fmmode; TYPE_1__ rx; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fmdev*,int ,int ,scalar_t__*,int,int *,int *) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct fmdev *VAR_7, u8 VAR_8)
{
 u16 VAR_9;
 int VAR_10;

 if (VAR_7->curr_fmmode != VAR_2)
  return -VAR_1;

 if (VAR_8 != VAR_4 && VAR_8 != VAR_3) {
  FUNC_1("Invalid rds mode\n");
  return -VAR_0;
 }

 VAR_9 = (u16)VAR_8;
 VAR_10 = FUNC_0(VAR_7, VAR_5, VAR_6, &VAR_9,
   sizeof(VAR_9), ((void*)0), ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7->rx.rds_mode = VAR_8;

 return 0;
}

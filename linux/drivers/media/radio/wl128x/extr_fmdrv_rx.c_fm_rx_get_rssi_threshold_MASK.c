
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short rssi_threshold; } ;
struct fmdev {scalar_t__ curr_fmmode; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct fmdev *VAR_3, short *VAR_4)
{
 if (VAR_3->curr_fmmode != VAR_2)
  return -VAR_1;

 if (VAR_4 == ((void*)0)) {
  FUNC_0("Invalid memory\n");
  return -VAR_0;
 }

 *VAR_4 = VAR_3->rx.rssi_threshold;

 return 0;
}

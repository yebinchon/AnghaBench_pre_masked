
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ freq; } ;
struct fmdev {int curr_fmmode; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct fmdev *VAR_4, u32 *VAR_5)
{
 if (VAR_4->rx.freq == VAR_3) {
  FUNC_0("RX frequency is not set\n");
  return -VAR_2;
 }
 if (VAR_5 == ((void*)0)) {
  FUNC_0("Invalid memory\n");
  return -VAR_1;
 }

 switch (VAR_4->curr_fmmode) {
 case 129:
  *VAR_5 = VAR_4->rx.freq;
  return 0;

 case 128:
  *VAR_5 = 0;
  return 0;

 default:
  return -VAR_0;
 }

}

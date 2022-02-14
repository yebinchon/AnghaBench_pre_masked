
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_device {scalar_t__ tape_state; int cdev; TYPE_1__* discipline; } ;
struct TYPE_2__ {int owner; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tape_device*,scalar_t__) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct tape_device *VAR_5)
{
 int VAR_6;

 FUNC_2(FUNC_1(VAR_5->cdev));
 if (VAR_5->tape_state == VAR_4) {
  FUNC_0(6, "TAPE:nodev\n");
  VAR_6 = -VAR_1;
 } else if (VAR_5->tape_state == VAR_3) {
  FUNC_0(6, "TAPE:dbusy\n");
  VAR_6 = -VAR_0;
 } else if (VAR_5->tape_state == VAR_2) {
  FUNC_0(6, "TAPE:dbusy\n");
  VAR_6 = -VAR_0;
 } else if (VAR_5->discipline != ((void*)0) &&
     !FUNC_5(VAR_5->discipline->owner)) {
  FUNC_0(6, "TAPE:nodisc\n");
  VAR_6 = -VAR_1;
 } else {
  FUNC_4(VAR_5, VAR_3);
  VAR_6 = 0;
 }
 FUNC_3(FUNC_1(VAR_5->cdev));
 return VAR_6;
}

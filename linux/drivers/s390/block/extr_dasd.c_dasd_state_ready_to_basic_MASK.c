
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int state; struct dasd_block* block; } ;
struct dasd_block {scalar_t__ s2b_shift; scalar_t__ bp_block; scalar_t__ blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_block*) ;
 int FUNC_1 (struct dasd_block*) ;

__attribute__((used)) static int FUNC_2(struct dasd_device *VAR_2)
{
 int VAR_3;

 VAR_2->state = VAR_0;
 if (VAR_2->block) {
  struct dasd_block *VAR_4 = VAR_2->block;
  VAR_3 = FUNC_1(VAR_4);
  if (VAR_3) {
   VAR_2->state = VAR_1;
   return VAR_3;
  }
  FUNC_0(VAR_4);
  VAR_4->blocks = 0;
  VAR_4->bp_block = 0;
  VAR_4->s2b_shift = 0;
 }
 return 0;
}

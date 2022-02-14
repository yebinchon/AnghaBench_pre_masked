
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_dev_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
struct dasd_device {int features; } ;
struct dasd_block {unsigned int bp_block; int s2b_shift; struct dasd_device* base; struct request_queue* request_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (struct request_queue*,unsigned int) ;
 int FUNC_2 (struct request_queue*,int) ;
 int FUNC_3 (struct request_queue*,scalar_t__) ;
 int FUNC_4 (struct request_queue*,int ) ;
 int FUNC_5 (struct request_queue*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct dasd_block *VAR_6)
{
 unsigned int VAR_7 = VAR_6->bp_block;
 struct request_queue *VAR_8 = VAR_6->request_queue;
 struct dasd_device *VAR_9 = VAR_6->base;
 int VAR_10;

 if (VAR_9->features & VAR_2) {







  VAR_10 = VAR_1 << VAR_6->s2b_shift;
 } else {
  VAR_10 = VAR_0 << VAR_6->s2b_shift;
 }
 FUNC_0(VAR_4, VAR_8);
 VAR_8->limits.max_dev_sectors = VAR_10;
 FUNC_1(VAR_8, VAR_7);
 FUNC_2(VAR_8, VAR_10);
 FUNC_4(VAR_8, VAR_5);

 FUNC_3(VAR_8, VAR_3);
 FUNC_5(VAR_8, VAR_3 - 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_dev_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
struct dasd_block {unsigned int bp_block; int s2b_shift; struct request_queue* request_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (struct request_queue*,unsigned int) ;
 int FUNC_2 (struct request_queue*,int) ;
 int FUNC_3 (struct request_queue*,scalar_t__) ;
 int FUNC_4 (struct request_queue*,int ) ;
 int FUNC_5 (struct request_queue*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct dasd_block *VAR_4)
{
 unsigned int VAR_5 = VAR_4->bp_block;
 struct request_queue *VAR_6 = VAR_4->request_queue;
 int VAR_7;

 VAR_7 = VAR_0 << VAR_4->s2b_shift;
 FUNC_0(VAR_2, VAR_6);
 VAR_6->limits.max_dev_sectors = VAR_7;
 FUNC_1(VAR_6, VAR_5);
 FUNC_2(VAR_6, VAR_7);
 FUNC_4(VAR_6, VAR_3);

 FUNC_3(VAR_6, VAR_1);
 FUNC_5(VAR_6, VAR_1 - 1);
}

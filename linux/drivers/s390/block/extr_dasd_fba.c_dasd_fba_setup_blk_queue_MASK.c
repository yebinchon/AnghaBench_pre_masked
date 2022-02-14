
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_dev_sectors; unsigned int discard_granularity; scalar_t__ discard_alignment; } ;
struct request_queue {TYPE_1__ limits; } ;
struct dasd_block {unsigned int bp_block; int s2b_shift; struct request_queue* request_queue; } ;


 unsigned int FUNC_0 (unsigned int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,struct request_queue*) ;
 int FUNC_2 (struct request_queue*,unsigned int) ;
 int FUNC_3 (struct request_queue*,unsigned int) ;
 int FUNC_4 (struct request_queue*,int) ;
 int FUNC_5 (struct request_queue*,scalar_t__) ;
 int FUNC_6 (struct request_queue*,unsigned int) ;
 int FUNC_7 (struct request_queue*,unsigned int) ;
 int FUNC_8 (struct request_queue*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct dasd_block *VAR_5)
{
 unsigned int VAR_6 = VAR_5->bp_block;
 struct request_queue *VAR_7 = VAR_5->request_queue;
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = VAR_0 << VAR_5->s2b_shift;
 FUNC_1(VAR_3, VAR_7);
 VAR_7->limits.max_dev_sectors = VAR_10;
 FUNC_2(VAR_7, VAR_6);
 FUNC_4(VAR_7, VAR_10);
 FUNC_6(VAR_7, VAR_4);

 FUNC_5(VAR_7, VAR_1);
 FUNC_8(VAR_7, VAR_1 - 1);

 VAR_7->limits.discard_granularity = VAR_6;
 VAR_7->limits.discard_alignment = VAR_1;


 VAR_8 = VAR_4 * VAR_6;
 VAR_8 = FUNC_0(VAR_8, VAR_1);
 VAR_9 = VAR_8 / VAR_6;

 FUNC_3(VAR_7, VAR_9);
 FUNC_7(VAR_7, VAR_9);
 FUNC_1(VAR_2, VAR_7);
}

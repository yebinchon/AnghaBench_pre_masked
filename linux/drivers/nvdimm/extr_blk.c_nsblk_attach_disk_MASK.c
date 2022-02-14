
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct request_queue {int disk_name; int flags; struct request_queue* queue; int * fops; scalar_t__ first_minor; struct nd_namespace_blk* queuedata; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct nd_namespace_blk {TYPE_1__ common; int size; } ;
struct gendisk {int disk_name; int flags; struct gendisk* queue; int * fops; scalar_t__ first_minor; struct nd_namespace_blk* queuedata; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct request_queue* FUNC_0 (int ) ;
 struct request_queue* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct request_queue*) ;
 int FUNC_3 (struct request_queue*,int) ;
 int FUNC_4 (struct request_queue*,int ) ;
 int FUNC_5 (struct request_queue*,int ) ;
 int FUNC_6 (struct device*,struct request_queue*,int *) ;
 scalar_t__ FUNC_7 (struct device*,int ,struct request_queue*) ;
 int FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (struct request_queue*,scalar_t__) ;
 int FUNC_10 (struct nd_namespace_blk*) ;
 scalar_t__ FUNC_11 (struct nd_namespace_blk*) ;
 int FUNC_12 (struct nd_namespace_blk*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (struct request_queue*) ;
 int FUNC_15 (struct request_queue*,int) ;

__attribute__((used)) static int FUNC_16(struct nd_namespace_blk *VAR_10)
{
 struct device *VAR_11 = &VAR_10->common.dev;
 resource_size_t VAR_12;
 struct request_queue *VAR_13;
 struct gendisk *VAR_14;
 u64 VAR_15;

 VAR_15 = FUNC_8(VAR_10->size, FUNC_10(VAR_10));
 VAR_12 = VAR_15 * FUNC_12(VAR_10);

 VAR_13 = FUNC_1(VAR_2);
 if (!VAR_13)
  return -VAR_0;
 if (FUNC_7(VAR_11, VAR_9, VAR_13))
  return -VAR_0;

 FUNC_4(VAR_13, VAR_7);
 FUNC_5(VAR_13, VAR_5);
 FUNC_3(VAR_13, FUNC_12(VAR_10));
 FUNC_2(VAR_3, VAR_13);
 VAR_13->queuedata = VAR_10;

 VAR_14 = FUNC_0(0);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->first_minor = 0;
 VAR_14->fops = &VAR_6;
 VAR_14->queue = VAR_13;
 VAR_14->flags = VAR_1;
 FUNC_13(&VAR_10->common, VAR_14->disk_name);

 if (FUNC_7(VAR_11, VAR_8, VAR_14))
  return -VAR_0;

 if (FUNC_11(VAR_10)) {
  int VAR_16 = FUNC_9(VAR_14, FUNC_11(VAR_10));

  if (VAR_16)
   return VAR_16;
 }

 FUNC_15(VAR_14, VAR_12 >> VAR_4);
 FUNC_6(VAR_11, VAR_14, ((void*)0));
 FUNC_14(VAR_14);
 return 0;
}

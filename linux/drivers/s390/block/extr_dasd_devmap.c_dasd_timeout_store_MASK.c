
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {unsigned long blk_timeout; TYPE_1__* block; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {struct request_queue* request_queue; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct request_queue*,unsigned long) ;
 struct dasd_device* FUNC_2 (int ) ;
 int FUNC_3 (struct dasd_device*) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_4, struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct dasd_device *VAR_8;
 struct request_queue *VAR_9;
 unsigned long VAR_10;

 VAR_8 = FUNC_2(FUNC_5(VAR_4));
 if (FUNC_0(VAR_8) || !VAR_8->block)
  return -VAR_1;

 if ((FUNC_4(VAR_6, 10, &VAR_10) != 0) ||
     VAR_10 > VAR_3 / VAR_2) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }
 VAR_9 = VAR_8->block->request_queue;
 if (!VAR_9) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }

 VAR_8->blk_timeout = VAR_10;

 FUNC_1(VAR_9, VAR_8->blk_timeout * VAR_2);

 FUNC_3(VAR_8);
 return VAR_7;
}

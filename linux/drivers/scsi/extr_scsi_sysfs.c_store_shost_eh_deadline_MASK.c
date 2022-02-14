
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int eh_deadline; int host_lock; TYPE_2__* hostt; TYPE_1__* transportt; } ;
typedef int ssize_t ;
struct TYPE_4__ {int eh_host_reset_handler; } ;
struct TYPE_3__ {scalar_t__ eh_strategy_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_4, struct device_attribute *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = -VAR_1;
 unsigned long VAR_10, VAR_11;

 if (VAR_8->transportt &&
     (VAR_8->transportt->eh_strategy_handler ||
      !VAR_8->hostt->eh_host_reset_handler))
  return VAR_9;

 if (!FUNC_6(VAR_6, "off", FUNC_5("off")))
  VAR_10 = -1;
 else {
  VAR_9 = FUNC_1(VAR_6, 10, &VAR_10);
  if (VAR_9)
   return VAR_9;
  if (VAR_10 * VAR_2 > VAR_3)
   return -VAR_1;
 }

 FUNC_3(VAR_8->host_lock, VAR_11);
 if (FUNC_2(VAR_8))
  VAR_9 = -VAR_0;
 else {
  if (VAR_10 == -1)
   VAR_8->eh_deadline = -1;
  else
   VAR_8->eh_deadline = VAR_10 * VAR_2;

  VAR_9 = VAR_7;
 }
 FUNC_4(VAR_8->host_lock, VAR_11);

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {TYPE_1__* host; scalar_t__ errors_logged; scalar_t__ in_reset_reload; int reset_wait_q; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
         struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_1(VAR_4);
 struct ipr_ioa_cfg *VAR_9 = (struct ipr_ioa_cfg *)VAR_8->hostdata;
 unsigned long VAR_10 = 0;
 int VAR_11 = VAR_7;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 FUNC_4(VAR_9->host->host_lock, VAR_10);
 while (VAR_9->in_reset_reload) {
  FUNC_5(VAR_9->host->host_lock, VAR_10);
  FUNC_6(VAR_9->reset_wait_q, !VAR_9->in_reset_reload);
  FUNC_4(VAR_9->host->host_lock, VAR_10);
 }

 VAR_9->errors_logged = 0;
 FUNC_2(VAR_9, VAR_3);

 if (VAR_9->in_reset_reload) {
  FUNC_5(VAR_9->host->host_lock, VAR_10);
  FUNC_6(VAR_9->reset_wait_q, !VAR_9->in_reset_reload);


  FUNC_3(1000);
 } else {
  FUNC_5(VAR_9->host->host_lock, VAR_10);
  return -VAR_2;
 }

 FUNC_4(VAR_9->host->host_lock, VAR_10);
 if (VAR_9->in_reset_reload || VAR_9->errors_logged)
  VAR_11 = -VAR_2;
 FUNC_5(VAR_9->host->host_lock, VAR_10);

 return VAR_11;
}

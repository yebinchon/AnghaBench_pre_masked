
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rport {int reconnect_delay; scalar_t__ state; int reconnect_work; int dev_loss_tmo; int fast_io_fail_tmo; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int*,char const*) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_2 ;
 struct srp_rport* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, const size_t VAR_6)
{
 struct srp_rport *VAR_7 = FUNC_4(VAR_3);
 int VAR_8, VAR_9;

 VAR_8 = FUNC_2(&VAR_9, VAR_5);
 if (VAR_8)
  goto out;
 VAR_8 = FUNC_3(VAR_9, VAR_7->fast_io_fail_tmo,
       VAR_7->dev_loss_tmo);
 if (VAR_8)
  goto out;

 if (VAR_7->reconnect_delay <= 0 && VAR_9 > 0 &&
     VAR_7->state != VAR_1) {
  FUNC_1(VAR_2, &VAR_7->reconnect_work,
       VAR_9 * VAR_0);
 } else if (VAR_9 <= 0) {
  FUNC_0(&VAR_7->reconnect_work);
 }
 VAR_7->reconnect_delay = VAR_9;
 VAR_8 = VAR_6;

out:
 return VAR_8;
}

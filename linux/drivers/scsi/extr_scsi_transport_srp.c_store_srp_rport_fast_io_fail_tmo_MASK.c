
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rport {int fast_io_fail_tmo; int dev_loss_tmo; int reconnect_delay; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int*,char const*) ;
 int FUNC_1 (int ,int,int ) ;
 struct srp_rport* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct srp_rport *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(&VAR_6, VAR_2);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_1(VAR_4->reconnect_delay, VAR_6,
       VAR_4->dev_loss_tmo);
 if (VAR_5)
  goto out;
 VAR_4->fast_io_fail_tmo = VAR_6;
 VAR_5 = VAR_3;

out:
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct s3c_rtc {TYPE_1__* data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* enable_tick ) (struct s3c_rtc*,struct seq_file*) ;} ;


 struct s3c_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct s3c_rtc*) ;
 int FUNC_2 (struct s3c_rtc*) ;
 int FUNC_3 (struct s3c_rtc*,struct seq_file*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct seq_file *VAR_1)
{
 struct s3c_rtc *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->data->enable_tick)
  VAR_2->data->enable_tick(VAR_2, VAR_1);

 FUNC_1(VAR_2);

 return 0;
}

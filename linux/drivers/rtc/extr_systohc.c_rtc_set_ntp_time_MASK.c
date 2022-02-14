
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {unsigned long tv_nsec; int tv_sec; } ;
struct rtc_time {int dummy; } ;
struct rtc_device {int set_offset_nsec; TYPE_1__* ops; } ;
struct TYPE_2__ {int set_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtc_device*) ;
 struct rtc_device* FUNC_1 (int ) ;
 int FUNC_2 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_3 (int ,struct rtc_time*) ;
 int FUNC_4 (int ,struct timespec64*,struct timespec64*) ;
 int FUNC_5 (struct timespec64*,int ,int ) ;

int FUNC_6(struct timespec64 VAR_3, unsigned long *VAR_4)
{
 struct rtc_device *VAR_5;
 struct rtc_time VAR_6;
 struct timespec64 VAR_7;
 int VAR_8 = -VAR_1;
 bool VAR_9;

 VAR_5 = FUNC_1(VAR_0);
 if (!VAR_5)
  goto out_err;

 if (!VAR_5->ops || !VAR_5->ops->set_time)
  goto out_close;





 FUNC_5(&VAR_7, 0, -VAR_5->set_offset_nsec);
 *VAR_4 = VAR_7.tv_nsec;





 VAR_9 = FUNC_4(VAR_5->set_offset_nsec, &VAR_7, &VAR_3);
 if (!VAR_9) {
  VAR_8 = -VAR_2;
  goto out_close;
 }

 FUNC_3(VAR_7.tv_sec, &VAR_6);

 VAR_8 = FUNC_2(VAR_5, &VAR_6);

out_close:
 FUNC_0(VAR_5);
out_err:
 return VAR_8;
}

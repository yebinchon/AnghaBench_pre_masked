
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_rtc {int pie_lock; TYPE_1__* data; } ;
struct TYPE_2__ {int (* set_freq ) (struct s3c_rtc*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct s3c_rtc*) ;
 int FUNC_2 (struct s3c_rtc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct s3c_rtc*,int) ;

__attribute__((used)) static int FUNC_6(struct s3c_rtc *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;
 FUNC_3(&VAR_1->pie_lock);

 if (VAR_1->data->set_freq)
  VAR_1->data->set_freq(VAR_1, VAR_2);

 FUNC_4(&VAR_1->pie_lock);
 FUNC_1(VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct rtc_device {TYPE_2__ dev; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* read_time ) (int ,struct rtc_time*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (struct rtc_time*,int ,int) ;
 int FUNC_2 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (int ,struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct rtc_device *VAR_2, struct rtc_time *VAR_3)
{
 int VAR_4;

 if (!VAR_2->ops) {
  VAR_4 = -VAR_1;
 } else if (!VAR_2->ops->read_time) {
  VAR_4 = -VAR_0;
 } else {
  FUNC_1(VAR_3, 0, sizeof(struct rtc_time));
  VAR_4 = VAR_2->ops->read_time(VAR_2->dev.parent, VAR_3);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_2->dev, "read_time: fail to read: %d\n",
    VAR_4);
   return VAR_4;
  }

  FUNC_2(VAR_2, VAR_3);

  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 < 0)
   FUNC_0(&VAR_2->dev, "read_time: rtc_time isn't valid\n");
 }
 return VAR_4;
}

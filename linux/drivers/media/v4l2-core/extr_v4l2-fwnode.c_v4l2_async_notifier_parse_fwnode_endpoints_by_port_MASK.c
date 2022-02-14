
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_async_notifier {int dummy; } ;
struct device {int dummy; } ;
typedef int parse_endpoint_func ;


 int FUNC_0 (struct device*,struct v4l2_async_notifier*,size_t,unsigned int,int,int ) ;

int
FUNC_1(struct device *VAR_0,
         struct v4l2_async_notifier *VAR_1,
         size_t VAR_2,
         unsigned int VAR_3,
         parse_endpoint_func VAR_4)
{
 return FUNC_0(VAR_0, VAR_1,
           VAR_2,
           VAR_3, 1,
           VAR_4);
}

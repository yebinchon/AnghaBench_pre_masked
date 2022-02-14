
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_channel_info {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct device*,struct rpmsg_channel_info*) ;

int FUNC_3(struct device *VAR_1,
       struct rpmsg_channel_info *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3);

 FUNC_1(VAR_3);

 return 0;
}

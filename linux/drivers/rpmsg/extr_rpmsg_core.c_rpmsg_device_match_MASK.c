
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct rpmsg_device {scalar_t__ src; scalar_t__ dst; TYPE_1__ id; } ;
struct rpmsg_channel_info {scalar_t__ src; scalar_t__ dst; int name; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 struct rpmsg_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, void *VAR_3)
{
 struct rpmsg_channel_info *VAR_4 = VAR_3;
 struct rpmsg_device *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->src != VAR_0 && VAR_4->src != VAR_5->src)
  return 0;

 if (VAR_4->dst != VAR_0 && VAR_4->dst != VAR_5->dst)
  return 0;

 if (FUNC_0(VAR_4->name, VAR_5->id.name, VAR_1))
  return 0;


 return 1;
}

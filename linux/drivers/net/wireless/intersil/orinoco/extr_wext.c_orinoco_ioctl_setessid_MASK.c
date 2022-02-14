
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int desired_essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct orinoco_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct orinoco_private*,unsigned long*) ;
 int FUNC_4 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
      struct iw_request_info *VAR_5,
      struct iw_point *VAR_6,
      char *VAR_7)
{
 struct orinoco_private *VAR_8 = FUNC_2(VAR_4);
 unsigned long VAR_9;






 if (VAR_6->length > VAR_3)
  return -VAR_0;

 if (FUNC_3(VAR_8, &VAR_9) != 0)
  return -VAR_1;


 FUNC_1(VAR_8->desired_essid, 0, sizeof(VAR_8->desired_essid));


 if (VAR_6->flags)
  FUNC_0(VAR_8->desired_essid, VAR_7, VAR_6->length);

 FUNC_4(VAR_8, &VAR_9);

 return -VAR_2;
}

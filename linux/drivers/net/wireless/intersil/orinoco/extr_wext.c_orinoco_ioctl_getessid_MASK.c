
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int desired_essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct orinoco_private*,int*,char*) ;
 scalar_t__ FUNC_4 (struct orinoco_private*,unsigned long*) ;
 int FUNC_5 (struct orinoco_private*,unsigned long*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2,
      struct iw_request_info *VAR_3,
      struct iw_point *VAR_4,
      char *VAR_5)
{
 struct orinoco_private *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;
 int VAR_8 = 0;
 unsigned long VAR_9;

 if (FUNC_2(VAR_2)) {
  VAR_8 = FUNC_3(VAR_6, &VAR_7, VAR_5);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_4->length = VAR_8;
 } else {
  if (FUNC_4(VAR_6, &VAR_9) != 0)
   return -VAR_0;
  FUNC_0(VAR_5, VAR_6->desired_essid, VAR_1);
  VAR_4->length = FUNC_6(VAR_6->desired_essid);
  FUNC_5(VAR_6, &VAR_9);
 }

 VAR_4->flags = 1;

 return 0;
}

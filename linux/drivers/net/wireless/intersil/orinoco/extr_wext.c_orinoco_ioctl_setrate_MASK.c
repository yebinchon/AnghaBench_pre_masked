
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int bitratemode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int fixed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     struct iw_param *VAR_5,
     char *VAR_6)
{
 struct orinoco_private *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;
 int VAR_9;
 unsigned long VAR_10;




 if (VAR_5->value == -1)
  VAR_9 = 110;
 else {
  if (VAR_5->value % 100000)
   return -VAR_2;
  VAR_9 = VAR_5->value / 100000;
 }

 VAR_8 = FUNC_1(VAR_9, !VAR_5->fixed);

 if (VAR_8 == -1)
  return -VAR_2;

 if (FUNC_2(VAR_7, &VAR_10) != 0)
  return -VAR_0;
 VAR_7->bitratemode = VAR_8;
 FUNC_3(VAR_7, &VAR_10);

 return -VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int open; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 struct orinoco_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct orinoco_private*) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    void *VAR_2,
    char *VAR_3)
{
 struct orinoco_private *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;
 int VAR_6 = 0;

 if (!VAR_4->open)
  return 0;

 if (FUNC_2(VAR_4, &VAR_5) != 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4);

 FUNC_3(VAR_4, &VAR_5);
 return VAR_6;
}

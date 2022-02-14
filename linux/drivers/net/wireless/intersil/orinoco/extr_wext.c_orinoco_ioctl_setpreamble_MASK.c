
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int preamble; int has_preamble; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct orinoco_private*,unsigned long*) ;
 int FUNC_2 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
         struct iw_request_info *VAR_4,
         void *VAR_5,
         char *VAR_6)
{
 struct orinoco_private *VAR_7 = FUNC_0(VAR_3);
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_7->has_preamble)
  return -VAR_2;






 VAR_9 = *((int *) VAR_6);

 if (FUNC_1(VAR_7, &VAR_8) != 0)
  return -VAR_0;

 if (VAR_9)
  VAR_7->preamble = 1;
 else
  VAR_7->preamble = 0;

 FUNC_2(VAR_7, &VAR_8);

 return -VAR_1;
}

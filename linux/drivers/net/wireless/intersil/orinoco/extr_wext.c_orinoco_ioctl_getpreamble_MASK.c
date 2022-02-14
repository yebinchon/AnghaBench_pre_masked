
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int preamble; int has_preamble; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
         struct iw_request_info *VAR_2,
         void *VAR_3,
         char *VAR_4)
{
 struct orinoco_private *VAR_5 = FUNC_0(VAR_1);
 int *VAR_6 = (int *) VAR_4;

 if (!VAR_5->has_preamble)
  return -VAR_0;

 *VAR_6 = VAR_5->preamble;
 return 0;
}

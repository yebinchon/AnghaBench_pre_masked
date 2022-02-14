
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ucc_geth_private {TYPE_1__* ug_info; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int statisticsMode; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ucc_geth_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_7, int VAR_8)
{
 struct ucc_geth_private *VAR_9 = FUNC_0(VAR_7);
 u32 VAR_10 = VAR_9->ug_info->statisticsMode;
 int VAR_11 = 0;

 switch (VAR_8) {
 case 128:
  if (VAR_10 & VAR_3)
   VAR_11 += VAR_4;
  if (VAR_10 & VAR_2)
   VAR_11 += VAR_6;
  if (VAR_10 & VAR_1)
   VAR_11 += VAR_5;

  return VAR_11;

 default:
  return -VAR_0;
 }
}

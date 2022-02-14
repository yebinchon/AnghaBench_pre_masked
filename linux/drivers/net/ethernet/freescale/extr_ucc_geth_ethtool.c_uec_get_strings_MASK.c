
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
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
 int VAR_7 ;
 int FUNC_0 (int *,int ,int) ;
 struct ucc_geth_private* FUNC_1 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_10, u32 VAR_11, u8 *VAR_12)
{
 struct ucc_geth_private *VAR_13 = FUNC_1(VAR_10);
 u32 VAR_14 = VAR_13->ug_info->statisticsMode;

 if (VAR_14 & VAR_3) {
  FUNC_0(VAR_12, VAR_7, VAR_4 *
           VAR_0);
  VAR_12 += VAR_4 * VAR_0;
 }
 if (VAR_14 & VAR_2) {
  FUNC_0(VAR_12, VAR_9, VAR_6 *
           VAR_0);
  VAR_12 += VAR_6 * VAR_0;
 }
 if (VAR_14 & VAR_1)
  FUNC_0(VAR_12, VAR_8, VAR_5 *
           VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ieee_pfc {int pfc_en; } ;


 int FUNC_0 (struct net_device*,struct ieee_pfc*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_0,
        int VAR_1, u8 *VAR_2)
{
 struct ieee_pfc VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);

 if (VAR_4)
  *VAR_2 = 0;
 else
  *VAR_2 = (VAR_3.pfc_en >> VAR_1) & 0x01;

 return VAR_4;
}

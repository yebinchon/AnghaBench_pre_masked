
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ieee_pfc {scalar_t__ pfc_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*,struct ieee_pfc*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_2)
{
 struct ieee_pfc VAR_3;

 if (FUNC_0(VAR_2, &VAR_3))
  return VAR_0;

 return VAR_3.pfc_en ? VAR_1 : VAR_0;
}

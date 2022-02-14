
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 struct adapter* FUNC_5 (struct net_device const*) ;
 unsigned int FUNC_6 (struct adapter*,int ) ;

unsigned int FUNC_7(const struct net_device *VAR_2, int VAR_3)
{
 struct adapter *VAR_4 = FUNC_5(VAR_2);
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_6(VAR_4, VAR_1);
 VAR_6 = FUNC_6(VAR_4, VAR_0);
 if (FUNC_4(VAR_4->params.chip)) {
  VAR_7 = FUNC_2(VAR_5);
  VAR_8 = FUNC_0(VAR_5);
 } else {
  VAR_7 = FUNC_3(VAR_5);
  VAR_8 = FUNC_1(VAR_6);
 }
 return VAR_3 ? VAR_7 : VAR_8;
}

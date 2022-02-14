
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netdata_local {int lock; int napi; int net_base; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct netdata_local* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct netdata_local *VAR_4 = FUNC_6(VAR_3);
 u32 VAR_5;

 FUNC_8(&VAR_4->lock);

 VAR_5 = FUNC_7(FUNC_1(VAR_4->net_base));

 FUNC_10(VAR_5, FUNC_0(VAR_4->net_base));

 FUNC_4(VAR_4->net_base);
 if (FUNC_3(FUNC_5(&VAR_4->napi)))
  FUNC_2(&VAR_4->napi);

 FUNC_9(&VAR_4->lock);

 return VAR_0;
}

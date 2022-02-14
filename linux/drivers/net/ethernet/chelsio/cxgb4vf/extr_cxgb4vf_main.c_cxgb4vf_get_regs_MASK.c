
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (struct adapter*) ;
 struct adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,void*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_17,
        struct ethtool_regs *VAR_18,
        void *VAR_19)
{
 struct adapter *VAR_20 = FUNC_3(VAR_17);

 VAR_18->version = FUNC_2(VAR_20);




 FUNC_1(VAR_19, 0, VAR_15);

 FUNC_4(VAR_20, VAR_19,
         VAR_16 + VAR_11,
         VAR_16 + VAR_12);
 FUNC_4(VAR_20, VAR_19,
         VAR_13 + VAR_8,
         VAR_13 + VAR_9);



 FUNC_4(VAR_20, VAR_19,
         VAR_14 + VAR_10,
         VAR_14 + (FUNC_0(VAR_20->params.chip)
         ? VAR_1 : VAR_0));
 FUNC_4(VAR_20, VAR_19,
         VAR_2 + VAR_6,
         VAR_2 + VAR_7);

 FUNC_4(VAR_20, VAR_19,
         VAR_3 + VAR_4,
         VAR_3 + VAR_5);
}

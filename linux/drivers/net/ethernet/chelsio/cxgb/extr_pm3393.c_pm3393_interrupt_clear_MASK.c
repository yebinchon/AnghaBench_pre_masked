
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cmac {TYPE_1__* adapter; } ;
struct TYPE_3__ {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct cmac*,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct cmac *VAR_19)
{
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;




 FUNC_0(VAR_19, VAR_13, &VAR_22);
 FUNC_0(VAR_19, VAR_17, &VAR_22);
 FUNC_0(VAR_19, VAR_16, &VAR_22);
 FUNC_0(VAR_19, VAR_11, &VAR_22);
 FUNC_0(VAR_19, VAR_10, &VAR_22);
 FUNC_0(VAR_19, VAR_18, &VAR_22);
 FUNC_0(VAR_19, VAR_5, &VAR_22);
 FUNC_0(VAR_19, VAR_14, &VAR_22);
 FUNC_0(VAR_19, VAR_12, &VAR_22);
 FUNC_0(VAR_19, VAR_15, &VAR_22);
 FUNC_0(VAR_19, VAR_7, &VAR_22);
 FUNC_0(VAR_19, VAR_4,
        &VAR_22);
 FUNC_0(VAR_19, VAR_9, &VAR_22);
 FUNC_0(VAR_19, VAR_8, &VAR_22);



 FUNC_0(VAR_19, VAR_6, &VAR_22);



 FUNC_2(VAR_19->adapter, VAR_0, &VAR_20);
 VAR_20 |= VAR_2;
 FUNC_3(VAR_19->adapter, VAR_0, VAR_20);



 VAR_21 = FUNC_1(VAR_19->adapter->regs + VAR_1);
 VAR_21 |= VAR_3;
 FUNC_4(VAR_21, VAR_19->adapter->regs + VAR_1);

 return 0;
}

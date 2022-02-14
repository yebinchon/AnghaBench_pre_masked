
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jme_adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 int FUNC_1 (struct jme_adapter*,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_4(struct jme_adapter *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_0);
 VAR_9 |= VAR_5 | VAR_6 |
        VAR_7 | VAR_4;
 FUNC_1(VAR_8, VAR_0, VAR_9);

 FUNC_2(VAR_8->pdev, VAR_1, &VAR_9);
 VAR_9 &= ~VAR_2;
 VAR_9 |= VAR_3;
 FUNC_3(VAR_8->pdev, VAR_1, VAR_9);
}

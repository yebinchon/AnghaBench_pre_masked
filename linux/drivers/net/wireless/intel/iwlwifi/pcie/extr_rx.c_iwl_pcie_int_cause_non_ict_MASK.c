
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {int dev; } ;
struct TYPE_2__ {int irq_lock; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct iwl_trans *VAR_1)
{
 u32 VAR_2;

 FUNC_2(&FUNC_0(VAR_1)->irq_lock);

 FUNC_3(VAR_1->dev);


 VAR_2 = FUNC_1(VAR_1, VAR_0);


 return VAR_2;
}

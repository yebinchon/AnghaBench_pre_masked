
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct aat2870_data {int (* write ) (struct aat2870_data*,int ,int ) ;} ;
struct aat2870_bl_driver_data {scalar_t__ channels; TYPE_2__* pdev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct aat2870_data* FUNC_0 (int ) ;
 int FUNC_1 (struct aat2870_data*,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct aat2870_bl_driver_data *VAR_1)
{
 struct aat2870_data *VAR_2
   = FUNC_0(VAR_1->pdev->dev.parent);

 return VAR_2->write(VAR_2, VAR_0,
         (u8)VAR_1->channels);
}

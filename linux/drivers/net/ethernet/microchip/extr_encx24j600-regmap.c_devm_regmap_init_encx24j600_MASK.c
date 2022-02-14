
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct encx24j600_context {void* phymap; void* regmap; int mutex; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct encx24j600_context* lock_arg; } ;


 void* FUNC_0 (struct device*,int *,struct encx24j600_context*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct device *VAR_4,
     struct encx24j600_context *VAR_5)
{
 FUNC_1(&VAR_5->mutex);
 VAR_2.lock_arg = VAR_5;
 VAR_5->regmap = FUNC_0(VAR_4, &VAR_3, VAR_5, &VAR_2);
 VAR_5->phymap = FUNC_0(VAR_4, &VAR_1, VAR_5, &VAR_0);
}

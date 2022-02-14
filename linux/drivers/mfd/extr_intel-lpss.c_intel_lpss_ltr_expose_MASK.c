
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_lpss {TYPE_2__* dev; } ;
struct TYPE_3__ {int set_latency_tolerance; } ;
struct TYPE_4__ {TYPE_1__ power; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct intel_lpss *VAR_1)
{
 VAR_1->dev->power.set_latency_tolerance = VAR_0;
 FUNC_0(VAR_1->dev);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int parent; } ;
struct TYPE_4__ {char const* name; int power_off; int power_on; } ;
struct bcm2835_power_domain {int domain; TYPE_2__ base; struct bcm2835_power* power; int * clk; } ;
struct TYPE_3__ {TYPE_2__** domains; } ;
struct bcm2835_power {TYPE_1__ pd_xlate; struct bcm2835_power_domain* domains; struct device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int
FUNC_4(struct bcm2835_power *VAR_3,
     int VAR_4, const char *VAR_5)
{
 struct device *VAR_6 = VAR_3->dev;
 struct bcm2835_power_domain *VAR_7 = &VAR_3->domains[VAR_4];

 VAR_7->clk = FUNC_2(VAR_6->parent, VAR_5);
 if (FUNC_0(VAR_7->clk)) {
  int VAR_8 = FUNC_1(VAR_7->clk);

  if (VAR_8 == -VAR_0)
   return VAR_8;




  VAR_7->clk = ((void*)0);
 }

 VAR_7->base.name = VAR_5;
 VAR_7->base.power_on = VAR_2;
 VAR_7->base.power_off = VAR_1;

 VAR_7->domain = VAR_4;
 VAR_7->power = VAR_3;


 FUNC_3(&VAR_7->base, ((void*)0), 1);

 VAR_3->pd_xlate.domains[VAR_4] = &VAR_7->base;

 return 0;
}

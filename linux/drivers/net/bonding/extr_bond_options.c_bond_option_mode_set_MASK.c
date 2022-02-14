
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tlb_dynamic_lb; scalar_t__ mode; int arp_validate; scalar_t__ miimon; scalar_t__ arp_interval; } ;
struct bonding {TYPE_1__ params; int dev; } ;
struct bond_opt_value {scalar_t__ value; scalar_t__ string; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct bonding *VAR_3,
    const struct bond_opt_value *VAR_4)
{
 if (!FUNC_0(VAR_4->value)) {
  if (VAR_3->params.arp_interval) {
   FUNC_1(VAR_3->dev, "%s mode is incompatible with arp monitoring, start mii monitoring\n",
       VAR_4->string);

   VAR_3->params.arp_interval = 0;
  }

  if (!VAR_3->params.miimon) {

   VAR_3->params.miimon = VAR_1;
   FUNC_1(VAR_3->dev, "Setting MII monitoring interval to %d\n",
       VAR_3->params.miimon);
  }
 }

 if (VAR_4->value == VAR_2)
  VAR_3->params.tlb_dynamic_lb = 1;


 VAR_3->params.arp_validate = VAR_0;
 VAR_3->params.mode = VAR_4->value;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct ath_softc {struct ath_hw* sc_ah; TYPE_2__* dev; } ;
struct ath_hw {int ah_flags; int dev; } ;
struct ath_common {int macaddr; TYPE_1__* bus_ops; } ;
typedef enum ath_bus_type { ____Placeholder_ath_bus_type } ath_bus_type ;
typedef int eeprom_name ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_3__ {int ath_bus_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct ath_softc*,char*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (struct device_node*) ;
 char* FUNC_8 (struct device_node*) ;
 scalar_t__ FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (char*,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct ath_softc *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev->of_node;
 struct ath_hw *VAR_5 = VAR_3->sc_ah;
 struct ath_common *VAR_6 = FUNC_2(VAR_5);
 enum ath_bus_type VAR_7 = VAR_6->bus_ops->ath_bus_type;
 const char *VAR_8;
 char VAR_9[100];
 int VAR_10;

 if (!FUNC_7(VAR_4))
  return 0;

 FUNC_4(VAR_6, VAR_2, "parsing configuration from OF node\n");

 if (FUNC_9(VAR_4, "qca,no-eeprom")) {

  FUNC_10(VAR_9, sizeof(VAR_9),
     "ath9k-eeprom-%s-%s.bin",
     FUNC_3(VAR_7), FUNC_5(VAR_5->dev));

  VAR_10 = FUNC_1(VAR_3, VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_5->ah_flags &= ~VAR_1;
  VAR_5->ah_flags |= VAR_0;
 }

 VAR_8 = FUNC_8(VAR_4);
 if (!FUNC_0(VAR_8))
  FUNC_6(VAR_6->macaddr, VAR_8);

 return 0;
}

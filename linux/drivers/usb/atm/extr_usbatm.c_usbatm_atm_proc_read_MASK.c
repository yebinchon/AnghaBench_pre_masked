
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbatm_data {char* description; scalar_t__ disconnected; } ;
struct TYPE_3__ {int rx_drop; int rx_err; int rx; int tx_err; int tx; } ;
struct TYPE_4__ {TYPE_1__ aal5; } ;
struct atm_dev {int signal; TYPE_2__ stats; int esi; struct usbatm_data* dev_data; } ;
typedef int loff_t ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct atm_dev *VAR_1, loff_t *VAR_2, char *VAR_3)
{
 struct usbatm_data *VAR_4 = VAR_1->dev_data;
 int VAR_5 = *VAR_2;

 if (!VAR_4)
  return -VAR_0;

 if (!VAR_5--)
  return FUNC_1(VAR_3, "%s\n", VAR_4->description);

 if (!VAR_5--)
  return FUNC_1(VAR_3, "MAC: %pM\n", VAR_1->esi);

 if (!VAR_5--)
  return FUNC_1(VAR_3,
          "AAL5: tx %d ( %d err ), rx %d ( %d err, %d drop )\n",
          FUNC_0(&VAR_1->stats.aal5.tx),
          FUNC_0(&VAR_1->stats.aal5.tx_err),
          FUNC_0(&VAR_1->stats.aal5.rx),
          FUNC_0(&VAR_1->stats.aal5.rx_err),
          FUNC_0(&VAR_1->stats.aal5.rx_drop));

 if (!VAR_5--) {
  if (VAR_4->disconnected)
   return FUNC_1(VAR_3, "Disconnected\n");
  else
   switch (VAR_1->signal) {
   case 129:
    return FUNC_1(VAR_3, "Line up\n");
   case 128:
    return FUNC_1(VAR_3, "Line down\n");
   default:
    return FUNC_1(VAR_3, "Line state unknown\n");
   }
 }

 return 0;
}

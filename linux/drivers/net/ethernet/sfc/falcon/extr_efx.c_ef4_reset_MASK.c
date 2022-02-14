
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int reset_pending; int net_dev; int state; int pci_dev; TYPE_1__* type; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_2__ {int (* reset ) (struct ef4_nic*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*,int) ;
 int FUNC_5 (struct ef4_nic*,int,int) ;
 int FUNC_6 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_9 (struct ef4_nic*,int ,int ,char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ef4_nic*,int) ;

int FUNC_12(struct ef4_nic *VAR_5, enum reset_type VAR_6)
{
 int VAR_7, VAR_8;
 bool VAR_9;

 FUNC_9(VAR_5, VAR_4, VAR_5->net_dev, "resetting (%s)\n",
     FUNC_0(VAR_6));

 FUNC_3(VAR_5);
 FUNC_4(VAR_5, VAR_6);

 VAR_7 = VAR_5->type->reset(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_8(VAR_5, VAR_4, VAR_5->net_dev, "failed to reset hardware\n");
  goto out;
 }




 if (VAR_6 < VAR_1)
  VAR_5->reset_pending &= -(1 << (VAR_6 + 1));
 else
  FUNC_1(VAR_6, &VAR_5->reset_pending);





 FUNC_10(VAR_5->pci_dev);

out:

 VAR_9 = VAR_7 ||
  VAR_6 == VAR_0 ||
  VAR_6 == VAR_2;
 VAR_8 = FUNC_5(VAR_5, VAR_6, !VAR_9);
 if (VAR_8) {
  VAR_9 = 1;
  if (!VAR_7)
   VAR_7 = VAR_8;
 }

 if (VAR_9) {
  FUNC_2(VAR_5->net_dev);
  FUNC_8(VAR_5, VAR_4, VAR_5->net_dev, "has been disabled\n");
  VAR_5->state = VAR_3;
 } else {
  FUNC_6(VAR_5, VAR_4, VAR_5->net_dev, "reset complete\n");
  FUNC_7(VAR_5->net_dev);
 }
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orion_mdio_ops {scalar_t__ (* is_done ) (struct orion_mdio_dev*) ;int poll_interval_max; int poll_interval_min; } ;
struct orion_mdio_dev {scalar_t__ err_interrupt; int smi_busy_wait; } ;
struct mii_bus {int parent; struct orion_mdio_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (struct orion_mdio_dev*) ;
 scalar_t__ FUNC_2 (struct orion_mdio_dev*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__,unsigned long) ;

__attribute__((used)) static int FUNC_7(const struct orion_mdio_ops *VAR_3,
     struct mii_bus *VAR_4)
{
 struct orion_mdio_dev *VAR_5 = VAR_4->priv;
 unsigned long VAR_6 = FUNC_4(VAR_1);
 unsigned long VAR_7 = VAR_2 + VAR_6;
 int VAR_8 = 0;

 while (1) {
         if (VAR_3->is_done(VAR_5))
   return 0;
         else if (VAR_8)
   break;

         if (VAR_5->err_interrupt <= 0) {
   FUNC_5(VAR_3->poll_interval_min,
         VAR_3->poll_interval_max);

   if (FUNC_3(VAR_7))
    ++VAR_8;
         } else {




   if (VAR_6 < 2)
    VAR_6 = 2;
   FUNC_6(VAR_5->smi_busy_wait,
               VAR_3->is_done(VAR_5), VAR_6);

   ++VAR_8;
         }
 }

 FUNC_0(VAR_4->parent, "Timeout: SMI busy for too long\n");
 return -VAR_0;
}

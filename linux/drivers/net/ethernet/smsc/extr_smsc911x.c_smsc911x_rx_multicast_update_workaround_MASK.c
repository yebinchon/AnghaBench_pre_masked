
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int mac_lock; scalar_t__ multicast_update_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct smsc911x_data*,int ) ;
 int FUNC_2 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_3 (struct smsc911x_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct smsc911x_data *VAR_3)
{
 unsigned int VAR_4;
 FUNC_4(&VAR_3->mac_lock);


 if (FUNC_1(VAR_3, VAR_0) & VAR_1)
  FUNC_0(VAR_3, VAR_2, "Rx not stopped");


 FUNC_3(VAR_3);


 VAR_4 = FUNC_1(VAR_3, VAR_0);
 VAR_4 |= VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_4);

 VAR_3->multicast_update_pending = 0;

 FUNC_5(&VAR_3->mac_lock);
}

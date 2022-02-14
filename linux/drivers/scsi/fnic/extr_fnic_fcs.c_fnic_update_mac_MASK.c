
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fnic {int fnic_lock; } ;
struct fc_lport {int dummy; } ;


 int FUNC_0 (struct fnic*,int *) ;
 struct fnic* FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fc_lport *VAR_0, u8 *VAR_1)
{
 struct fnic *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->fnic_lock);
 FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_2->fnic_lock);
}

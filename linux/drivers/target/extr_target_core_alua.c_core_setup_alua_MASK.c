
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t10_alua_lu_gp_member {int lu_gp_mem_lock; } ;
struct se_device {TYPE_1__* transport; TYPE_2__* se_hba; } ;
struct TYPE_4__ {int hba_flags; } ;
struct TYPE_3__ {int transport_flags; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct t10_alua_lu_gp_member*) ;
 int FUNC_1 (struct t10_alua_lu_gp_member*) ;
 int VAR_1 ;
 int FUNC_2 (struct t10_alua_lu_gp_member*,int ) ;
 struct t10_alua_lu_gp_member* FUNC_3 (struct se_device*) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct se_device *VAR_3)
{
 if (!(VAR_3->transport->transport_flags &
      VAR_1) &&
     !(VAR_3->se_hba->hba_flags & VAR_0)) {
  struct t10_alua_lu_gp_member *VAR_4;





  VAR_4 = FUNC_3(VAR_3);
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);

  FUNC_5(&VAR_4->lu_gp_mem_lock);
  FUNC_2(VAR_4,
    VAR_2);
  FUNC_6(&VAR_4->lu_gp_mem_lock);

  FUNC_4("%s: Adding to default ALUA LU Group:"
   " core/alua/lu_gps/default_lu_gp\n",
   VAR_3->transport->name);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; int machine; int sysname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_6;

 FUNC_1("TCM QLOGIC QLA2XXX fabric module %s on %s/%s on %s\n",
     VAR_1, FUNC_4()->sysname,
     FUNC_4()->machine, FUNC_4()->release);

 VAR_6 = FUNC_2(&VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(&VAR_4);
 if (VAR_6)
  goto out_fabric;

 VAR_3 = FUNC_0("tcm_qla2xxx_free",
      VAR_2, 0);
 if (!VAR_3) {
  VAR_6 = -VAR_0;
  goto out_fabric_npiv;
 }

 return 0;

out_fabric_npiv:
 FUNC_3(&VAR_4);
out_fabric:
 FUNC_3(&VAR_5);
 return VAR_6;
}

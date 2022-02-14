
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport {int * dd_data; } ;
typedef int scsi_qla_host_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct fc_vport *VAR_0, bool VAR_1)
{
 scsi_qla_host_t *VAR_2 = VAR_0->dd_data;

 if (VAR_1)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int scsi_qla_host_t ;
typedef int mb ;
typedef int fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (int *,int *,scalar_t__*,int ) ;

int
FUNC_2(scsi_qla_host_t *VAR_5, fc_port_t *VAR_6)
{
 int VAR_7;
 uint16_t VAR_8[VAR_1];

 FUNC_0(VAR_8, 0, sizeof(VAR_8));
 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_8, VAR_0);
 if (VAR_7 == VAR_4) {

  if (VAR_8[0] == VAR_2)
   VAR_7 = 1;
  else if (VAR_8[0] == VAR_3)

   VAR_7 = 3;
 }

 return (VAR_7);
}

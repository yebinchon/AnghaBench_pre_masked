
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int,int,void const*,int ,int) ;
 int FUNC_2 (scalar_t__,int *,scalar_t__,char*,...) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(uint VAR_2, scsi_qla_host_t *VAR_3, uint VAR_4, const void *VAR_5,
        uint VAR_6)
{
 uint VAR_7;

 if (!FUNC_3(VAR_2))
  return;

 FUNC_2(VAR_2, VAR_3, VAR_4,
     "%-+5d  0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F\n", VAR_6);
 FUNC_2(VAR_2, VAR_3, VAR_4,
     "----- -----------------------------------------------\n");
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += 16) {
  FUNC_2(VAR_2, VAR_3, VAR_4, "%04x: ", VAR_7);
  FUNC_1(VAR_1, "", VAR_0, 16, 1,
          VAR_5 + VAR_7, FUNC_0(16U, VAR_6 - VAR_7), 0);
 }
}

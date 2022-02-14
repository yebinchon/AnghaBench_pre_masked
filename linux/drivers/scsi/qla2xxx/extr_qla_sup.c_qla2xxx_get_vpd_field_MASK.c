
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct qla_hw_data {int* vpd; int vpd_size; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (char*,size_t,char*,int,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,char*,int ) ;

int
FUNC_5(scsi_qla_host_t *VAR_0, char *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_0->hw;
 uint8_t *VAR_5 = VAR_4->vpd;
 uint8_t *VAR_6 = VAR_5 + VAR_4->vpd_size;
 int VAR_7 = 0;

 if (!FUNC_0(VAR_4) || !FUNC_1(VAR_5, VAR_6))
  return 0;

 while (VAR_5 < VAR_6 && *VAR_5 != 0x78) {
  VAR_7 = (*VAR_5 == 0x82) ? VAR_5[1] : VAR_5[2];

  if (!FUNC_4(VAR_5, VAR_1, FUNC_3(VAR_1)))
   break;

  if (*VAR_5 != 0x90 && *VAR_5 != 0x91)
   VAR_5 += VAR_7;

  VAR_5 += 3;
 }

 if (VAR_5 < VAR_6 - VAR_7 && *VAR_5 != 0x78)
  return FUNC_2(VAR_2, VAR_3, "%.*s", VAR_7, VAR_5 + 3);

 return 0;
}

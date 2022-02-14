
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zero ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct qla_hw_data {char* model_number; char* model_desc; TYPE_1__* pdev; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {int subsystem_device; scalar_t__ subsystem_vendor; } ;


 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,int **,size_t) ;
 int FUNC_6 (char*,int *,size_t) ;
 char const** VAR_2 ;
 int FUNC_7 (TYPE_2__*,char*,char*,int) ;
 int FUNC_8 (char*,char const*,int) ;

inline void
FUNC_9(scsi_qla_host_t *VAR_3, uint8_t *VAR_4, size_t VAR_5,
         const char *VAR_6)
{
 char *VAR_7, *VAR_8;
 uint16_t VAR_9;
 uint64_t VAR_10[2] = { 0 };
 struct qla_hw_data *VAR_11 = VAR_3->hw;
 int VAR_12 = !FUNC_3(VAR_11) && !FUNC_4(VAR_11) &&
     !FUNC_0(VAR_11) && !FUNC_2(VAR_11);

 if (VAR_5 > sizeof(VAR_10))
  VAR_5 = sizeof(VAR_10);
 if (FUNC_5(VAR_4, &VAR_10, VAR_5) != 0) {
  FUNC_6(VAR_11->model_number, VAR_4, VAR_5);
  VAR_7 = VAR_8 = VAR_11->model_number;
  VAR_8 += VAR_5 - 1;
  while (VAR_8 > VAR_7) {
   if (*VAR_8 != 0x20 && *VAR_8 != 0x00)
    break;
   *VAR_8-- = '\0';
  }

  VAR_9 = (VAR_11->pdev->subsystem_device & 0xff);
  if (VAR_12 &&
      VAR_11->pdev->subsystem_vendor == VAR_0 &&
      VAR_9 < VAR_1)
   FUNC_8(VAR_11->model_desc,
       VAR_2[VAR_9 * 2 + 1],
       sizeof(VAR_11->model_desc));
 } else {
  VAR_9 = (VAR_11->pdev->subsystem_device & 0xff);
  if (VAR_12 &&
      VAR_11->pdev->subsystem_vendor == VAR_0 &&
      VAR_9 < VAR_1) {
   FUNC_8(VAR_11->model_number,
    VAR_2[VAR_9 * 2],
    sizeof(VAR_11->model_number));
   FUNC_8(VAR_11->model_desc,
       VAR_2[VAR_9 * 2 + 1],
       sizeof(VAR_11->model_desc));
  } else {
   FUNC_8(VAR_11->model_number, VAR_6,
    sizeof(VAR_11->model_number));
  }
 }
 if (FUNC_1(VAR_11))
  FUNC_7(VAR_3, "\x82", VAR_11->model_desc,
      sizeof(VAR_11->model_desc));
}

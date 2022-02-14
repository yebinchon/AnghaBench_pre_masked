
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_4__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*,int ) ;

__attribute__((used)) static int FUNC_4(scsi_qla_host_t *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;
 struct qla_hw_data *VAR_8 = VAR_4->hw;

 VAR_5 = FUNC_3(VAR_8, VAR_0);
 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = FUNC_2(VAR_5);

 if (VAR_6 == VAR_1) {
  FUNC_0(VAR_3, VAR_4, 0x600e,
      "Device temperature %d degrees C exceeds "
      " maximum allowed. Hardware has been shut down.\n",
      VAR_7);
  return 1;
 } else if (VAR_6 == VAR_2) {
  FUNC_0(VAR_3, VAR_4, 0x600f,
      "Device temperature %d degrees C exceeds "
      "operating range. Immediate action needed.\n",
      VAR_7);
 }
 return 0;
}

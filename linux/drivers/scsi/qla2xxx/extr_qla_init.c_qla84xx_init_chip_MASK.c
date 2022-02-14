
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct qla_hw_data {TYPE_1__* cs84xx; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {int fw_update_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(scsi_qla_host_t *VAR_2)
{
 int VAR_3;
 uint16_t VAR_4[2];
 struct qla_hw_data *VAR_5 = VAR_2->hw;

 FUNC_0(&VAR_5->cs84xx->fw_update_mutex);

 VAR_3 = FUNC_2(VAR_2, VAR_4);

 FUNC_1(&VAR_5->cs84xx->fw_update_mutex);

 return VAR_3 != VAR_1 || VAR_4[0] ? VAR_0 :
     VAR_1;
}

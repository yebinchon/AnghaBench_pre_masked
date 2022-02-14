
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int portnum; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qla_hw_data*,int ) ;
 int FUNC_1 (struct qla_hw_data*,int ,int) ;

inline void
FUNC_2(scsi_qla_host_t *VAR_3)
{
 uint32_t VAR_4;
 struct qla_hw_data *VAR_5 = VAR_3->hw;

 VAR_4 = FUNC_0(VAR_5, VAR_0);


 if (VAR_4 == 0xffffffff) {
  FUNC_1(VAR_5, VAR_0,
   VAR_2);
  VAR_4 = FUNC_0(VAR_5, VAR_0);
 }
 VAR_4 |= (VAR_1 << (VAR_5->portnum * 4));
 FUNC_1(VAR_5, VAR_0, VAR_4);
}

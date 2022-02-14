
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct qla_hw_data {int link_width; int pdev; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct qla_hw_data*,int ,int ) ;

int
FUNC_6(scsi_qla_host_t *VAR_10)
{
 uint16_t VAR_11;
 struct qla_hw_data *VAR_12 = VAR_10->hw;


 FUNC_5(VAR_12, VAR_1, VAR_4);




 FUNC_5(VAR_12, VAR_0, 0);
 FUNC_5(VAR_12, VAR_2, 0);


 FUNC_5(VAR_12, VAR_5, 0);
 FUNC_5(VAR_12, VAR_6, 0);

 if (FUNC_4(VAR_10) != VAR_8) {
  FUNC_1(VAR_9, VAR_10, 0x00a7,
      "Error trying to start fw.\n");
  return VAR_7;
 }


 if (FUNC_2(VAR_12) != VAR_8) {
  FUNC_1(VAR_9, VAR_10, 0x00aa,
      "Error during card handshake.\n");
  return VAR_7;
 }


 FUNC_0(VAR_12->pdev, VAR_3, &VAR_11);
 VAR_12->link_width = (VAR_11 >> 4) & 0x3f;


 return FUNC_3(VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_camera {int * data_connection; TYPE_1__* connection; } ;
struct ap_csi_config_request {int csi_id; } ;
typedef int csi_cfg ;
struct TYPE_2__ {int hd; } ;


 int VAR_0 ;
 int FUNC_0 (struct gb_camera*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct ap_csi_config_request*,int,int ,int) ;
 int FUNC_4 (struct gb_camera*,char*) ;
 int FUNC_5 (struct ap_csi_config_request*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct gb_camera *VAR_1)
{
 struct ap_csi_config_request VAR_2;
 int VAR_3;


 FUNC_5(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.csi_id = 1;

 VAR_3 = FUNC_3(VAR_1->connection->hd, &VAR_2,
      sizeof(VAR_2),
      VAR_0, 0);

 if (VAR_3 < 0)
  FUNC_4(VAR_1, "failed to stop the CSI transmitter\n");


 FUNC_0(VAR_1, 0);


 FUNC_2(VAR_1->data_connection);
 FUNC_1(VAR_1->data_connection);
 VAR_1->data_connection = ((void*)0);
}

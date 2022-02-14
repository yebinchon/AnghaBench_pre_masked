
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int,char*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_8(scsi_qla_host_t *VAR_9)
{
 int VAR_10 = VAR_5;
 uint32_t VAR_11;

 FUNC_7(VAR_9, VAR_0, VAR_3);
 FUNC_3(VAR_8, VAR_9, 0xb069, "HW State: INITIALIZING.\n");


 FUNC_0(VAR_9, &VAR_11);
 VAR_11 &= ~VAR_1;
 FUNC_1(VAR_9, 0);

 FUNC_5(VAR_9, 0);
 VAR_10 = FUNC_6(VAR_9);
 FUNC_4(VAR_9, 0);

 if (VAR_10 != VAR_5) {
  FUNC_3(VAR_7, VAR_9, 0xb06a,
      "Failed to restart NIC f/w.\n");
  FUNC_7(VAR_9, VAR_0, VAR_2);
  FUNC_3(VAR_8, VAR_9, 0xb06b, "HW State: FAILED.\n");
 } else {
  FUNC_2(VAR_6, VAR_9, 0xb06c,
      "Success in restarting nic f/w.\n");
  FUNC_7(VAR_9, VAR_0, VAR_4);
  FUNC_3(VAR_8, VAR_9, 0xb06d, "HW State: READY.\n");
 }

 return VAR_10;
}

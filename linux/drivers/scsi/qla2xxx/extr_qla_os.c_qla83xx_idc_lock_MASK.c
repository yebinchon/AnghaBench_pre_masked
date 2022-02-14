
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct qla_hw_data {int portnum; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

void
FUNC_6(scsi_qla_host_t *VAR_5, uint16_t VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 struct qla_hw_data *VAR_9 = VAR_5->hw;


retry_lock:
 if (FUNC_3(VAR_5, VAR_0, &VAR_7)
     == VAR_2) {
  if (VAR_7) {

   FUNC_5(VAR_5, VAR_1,
       VAR_9->portnum);
  } else {
   FUNC_3(VAR_5, VAR_1,
       &VAR_8);
   FUNC_0(VAR_3, VAR_5, 0xb063,
       "Failed to acquire IDC lock, acquired by %d, "
       "retrying...\n", VAR_8);


   if (FUNC_2(VAR_5)
       == VAR_2) {
    FUNC_4();
    goto retry_lock;
   } else
    FUNC_1(VAR_4, VAR_5, 0xb075,
        "IDC Lock recovery FAILED.\n");
  }

 }

 return;
}

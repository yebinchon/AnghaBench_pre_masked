
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int error_cause; } ;
union ibmvnic_crq {TYPE_2__ error_indication; } ;
typedef int u16 ;
struct ibmvnic_adapter {TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ibmvnic_adapter*,int ) ;

__attribute__((used)) static void FUNC_4(union ibmvnic_crq *VAR_3,
        struct ibmvnic_adapter *VAR_4)
{
 struct device *VAR_5 = &VAR_4->vdev->dev;
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_3->error_indication.error_cause);

 FUNC_1(VAR_5,
        "Firmware reports %serror, cause: %s. Starting recovery...\n",
        VAR_3->error_indication.flags
    & VAR_0 ? "FATAL " : "",
        FUNC_2(VAR_6));

 if (VAR_3->error_indication.flags & VAR_0)
  FUNC_3(VAR_4, VAR_1);
 else
  FUNC_3(VAR_4, VAR_2);
}

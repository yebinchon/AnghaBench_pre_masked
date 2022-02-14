
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qedf_ctx {TYPE_1__* pdev; struct fc_lport* lport; } ;
struct fc_lport {int fdmi_enabled; int host; } ;
struct fc_host_attrs {int firmware_version; int driver_version; int hardware_version; int model_description; int model; int manufacturer; int serial_number; } ;
struct TYPE_3__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 struct fc_host_attrs* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,...) ;

__attribute__((used)) static void FUNC_4(struct qedf_ctx *VAR_6)
{
 struct fc_lport *VAR_7 = VAR_6->lport;
 struct fc_host_attrs *VAR_8 = FUNC_2(VAR_7->host);
 u8 VAR_9[8];
 int VAR_10, VAR_11;




 VAR_7->fdmi_enabled = 1;







 VAR_11 = FUNC_0(VAR_6->pdev, VAR_4);
 if (VAR_11) {
  VAR_11 += 4;
  for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
   FUNC_1(VAR_6->pdev, VAR_11 + VAR_10, &VAR_9[VAR_10]);

  FUNC_3(VAR_8->serial_number,
      sizeof(VAR_8->serial_number),
      "%02X%02X%02X%02X%02X%02X%02X%02X",
      VAR_9[7], VAR_9[6], VAR_9[5], VAR_9[4],
      VAR_9[3], VAR_9[2], VAR_9[1], VAR_9[0]);
 } else
  FUNC_3(VAR_8->serial_number,
      sizeof(VAR_8->serial_number), "Unknown");

 FUNC_3(VAR_8->manufacturer,
     sizeof(VAR_8->manufacturer), "%s", "Cavium Inc.");

 FUNC_3(VAR_8->model, sizeof(VAR_8->model), "%s", "QL41000");

 FUNC_3(VAR_8->model_description, sizeof(VAR_8->model_description),
     "%s", "QLogic FastLinQ QL41000 Series 10/25/40/50GGbE Controller"
     "(FCoE)");

 FUNC_3(VAR_8->hardware_version, sizeof(VAR_8->hardware_version),
     "Rev %d", VAR_6->pdev->revision);

 FUNC_3(VAR_8->driver_version, sizeof(VAR_8->driver_version),
     "%s", VAR_5);

 FUNC_3(VAR_8->firmware_version, sizeof(VAR_8->firmware_version),
     "%d.%d.%d.%d", VAR_1, VAR_2,
     VAR_3, VAR_0);
}

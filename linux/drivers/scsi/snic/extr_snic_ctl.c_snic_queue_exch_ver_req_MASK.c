
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct snic_req_info {int dummy; } ;
struct TYPE_5__ {void* os_type; void* drvr_ver; } ;
struct TYPE_6__ {TYPE_2__ exch_ver; } ;
struct snic_host_req {TYPE_3__ u; int hdr; } ;
struct TYPE_4__ {int hid; } ;
struct snic {int shost; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int ) ;
 struct snic_host_req* FUNC_3 (struct snic_req_info*) ;
 int FUNC_4 (struct snic*,struct snic_req_info*) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct snic*,struct snic_host_req*,int) ;
 int FUNC_7 (struct snic*,struct snic_req_info*) ;
 struct snic_req_info* FUNC_8 (struct snic*,int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct snic *VAR_5)
{
 struct snic_req_info *VAR_6 = ((void*)0);
 struct snic_host_req *VAR_7 = ((void*)0);
 u32 VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_1(VAR_5->shost, "Exch Ver Req Preparing...\n");

 VAR_6 = FUNC_8(VAR_5, 0);
 if (!VAR_6) {
  FUNC_0(VAR_5->shost,
         "Queuing Exch Ver Req failed, err = %d\n",
         VAR_9);

  VAR_9 = -VAR_0;
  goto error;
 }

 VAR_7 = FUNC_3(VAR_6);


 FUNC_5(&VAR_7->hdr, VAR_4, 0, VAR_1,
   VAR_5->config.hid, 0, (ulong)VAR_6);
 VAR_8 = FUNC_9(VAR_2);
 VAR_7->u.exch_ver.drvr_ver = FUNC_2(VAR_8);
 VAR_7->u.exch_ver.os_type = FUNC_2(VAR_3);

 FUNC_4(VAR_5, VAR_6);

 VAR_9 = FUNC_6(VAR_5, VAR_7, sizeof(*VAR_7));
 if (VAR_9) {
  FUNC_7(VAR_5, VAR_6);
  FUNC_0(VAR_5->shost,
         "Queuing Exch Ver Req failed, err = %d\n",
         VAR_9);
  goto error;
 }

 FUNC_1(VAR_5->shost, "Exch Ver Req is issued. ret = %d\n", VAR_9);

error:
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct snic_req_info {struct snic_host_req* abort_req; } ;
struct TYPE_2__ {scalar_t__ init_ctx; } ;
struct snic_host_req {TYPE_1__ hdr; } ;
struct snic {int shost; int * req_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 size_t VAR_1 ;
 int FUNC_2 (int) ;
 struct snic_host_req* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snic_host_req*,int ,int) ;

struct snic_host_req *
FUNC_5(struct snic *VAR_2, struct snic_req_info *VAR_3)
{
 struct snic_host_req *VAR_4 = ((void*)0);

 FUNC_0(!VAR_3);


 if (VAR_3->abort_req)
  return VAR_3->abort_req;


 VAR_4 = FUNC_3(VAR_2->req_pool[VAR_1], VAR_0);
 if (!VAR_4) {
  FUNC_1(VAR_2->shost, "abts:Failed to alloc tm req.\n");
  FUNC_2(1);

  return ((void*)0);
 }

 VAR_3->abort_req = VAR_4;
 FUNC_4(VAR_4, 0, sizeof(struct snic_host_req));

 VAR_4->hdr.init_ctx = (ulong) VAR_3;

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int dummy; } ;
struct nvme_rdma_cm_rej {void* sts; void* recfmt; } ;
typedef int rej ;
typedef enum nvme_rdma_cm_status { ____Placeholder_nvme_rdma_cm_status } nvme_rdma_cm_status ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (struct rdma_cm_id*,void*,int) ;

__attribute__((used)) static int FUNC_4(struct rdma_cm_id *VAR_1,
    enum nvme_rdma_cm_status VAR_2)
{
 struct nvme_rdma_cm_rej VAR_3;

 FUNC_2("rejecting connect request: status %d (%s)\n",
   VAR_2, FUNC_1(VAR_2));

 VAR_3.recfmt = FUNC_0(VAR_0);
 VAR_3.sts = FUNC_0(VAR_2);

 return FUNC_3(VAR_1, (void *)&VAR_3, sizeof(VAR_3));
}

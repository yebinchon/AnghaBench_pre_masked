
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct vnic_wq_buf {int * os_buf; } ;
struct vnic_wq {int vdev; } ;
struct snic_req_info {int dummy; } ;
struct snic {TYPE_1__* shost; } ;
struct cq_desc {int dummy; } ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int ,int ,int ) ;
 int VAR_1 ;
 struct snic* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct vnic_wq *VAR_2,
       struct cq_desc *VAR_3,
       struct vnic_wq_buf *VAR_4,
       void *VAR_5)
{
 struct snic *VAR_6 = FUNC_3(VAR_2->vdev);

 FUNC_0(VAR_4->os_buf == ((void*)0));

 if (VAR_1 & VAR_0)
  FUNC_1(VAR_6->shost,
          "Ack received for snic_host_req %p.\n",
          VAR_4->os_buf);

 FUNC_2(VAR_6->shost->host_no, 0, 0,
   ((ulong)(VAR_4->os_buf) - sizeof(struct snic_req_info)), 0, 0,
   0);

 VAR_4->os_buf = ((void*)0);
}

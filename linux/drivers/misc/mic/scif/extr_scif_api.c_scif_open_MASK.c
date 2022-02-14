
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct scif_endpt* qp; } ;
struct scif_endpt {TYPE_2__ qp_info; int state; int recvlock; int sendlock; int lock; } ;
typedef struct scif_endpt* scif_epd_t ;
struct TYPE_4__ {int this_device; } ;
struct TYPE_6__ {TYPE_1__ mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct scif_endpt*) ;
 int FUNC_1 (struct scif_endpt*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct scif_endpt*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_6 (struct scif_endpt*) ;
 int FUNC_7 (int *) ;

scif_epd_t FUNC_8(void)
{
 struct scif_endpt *VAR_3;
 int VAR_4;

 FUNC_3();
 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto err_ep_alloc;

 VAR_3->qp_info.qp = FUNC_2(sizeof(*VAR_3->qp_info.qp), VAR_0);
 if (!VAR_3->qp_info.qp)
  goto err_qp_alloc;

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4)
  goto err_anon_inode;

 FUNC_7(&VAR_3->lock);
 FUNC_4(&VAR_3->sendlock);
 FUNC_4(&VAR_3->recvlock);

 FUNC_6(VAR_3);
 VAR_3->state = VAR_1;
 FUNC_0(VAR_2.mdev.this_device,
  "SCIFAPI open: ep %p success\n", VAR_3);
 return VAR_3;

err_anon_inode:
 FUNC_1(VAR_3->qp_info.qp);
err_qp_alloc:
 FUNC_1(VAR_3);
err_ep_alloc:
 return ((void*)0);
}

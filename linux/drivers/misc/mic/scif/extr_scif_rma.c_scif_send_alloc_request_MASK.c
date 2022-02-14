
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scifmsg {scalar_t__* payload; int uop; } ;
struct scif_allocmsg {int allocwq; int state; } ;
struct scif_window {struct scif_allocmsg alloc_handle; scalar_t__ nr_pages; } ;
struct scif_endpt {int remote_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scifmsg*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct scif_endpt *VAR_2,
       struct scif_window *VAR_3)
{
 struct scifmsg VAR_4;
 struct scif_allocmsg *VAR_5 = &VAR_3->alloc_handle;


 VAR_5->state = VAR_0;
 FUNC_1(&VAR_5->allocwq);


 VAR_4.uop = VAR_1;
 VAR_4.payload[1] = VAR_3->nr_pages;
 VAR_4.payload[2] = (u64)&VAR_3->alloc_handle;
 return FUNC_0(VAR_2->remote_dev, &VAR_4);
}

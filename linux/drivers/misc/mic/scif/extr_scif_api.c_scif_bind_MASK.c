
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int port; int node; } ;
struct scif_endpt {size_t state; int lock; int conn_async_state; TYPE_1__ port; } ;
typedef scalar_t__ scif_epd_t ;
struct TYPE_5__ {int this_device; } ;
struct TYPE_6__ {TYPE_2__ mdev; int nodeid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int * VAR_8 ;
 int FUNC_2 () ;
 TYPE_3__ VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(scif_epd_t VAR_10, u16 VAR_11)
{
 struct scif_endpt *VAR_12 = (struct scif_endpt *)VAR_10;
 int VAR_13 = 0;
 int VAR_14;

 FUNC_1(VAR_9.mdev.this_device,
  "SCIFAPI bind: ep %p %s requested port number %d\n",
  VAR_12, VAR_8[VAR_12->state], VAR_11);
 if (VAR_11) {





  if (VAR_11 < VAR_7 && !FUNC_0(VAR_1)) {
   VAR_13 = -VAR_2;
   goto scif_bind_admin_exit;
  }
 }

 FUNC_4(&VAR_12->lock);
 if (VAR_12->state == VAR_5) {
  VAR_13 = -VAR_3;
  goto scif_bind_exit;
 } else if (VAR_12->state != VAR_6) {
  VAR_13 = -VAR_4;
  goto scif_bind_exit;
 }

 if (VAR_11) {
  VAR_14 = FUNC_3(VAR_11);
  if (VAR_14 != VAR_11) {
   VAR_13 = -VAR_3;
   goto scif_bind_exit;
  }
 } else {
  VAR_13 = FUNC_2();
  if (VAR_13 < 0)
   goto scif_bind_exit;
  VAR_11 = VAR_13;
 }

 VAR_12->state = VAR_5;
 VAR_12->port.node = VAR_9.nodeid;
 VAR_12->port.port = VAR_11;
 VAR_12->conn_async_state = VAR_0;
 VAR_13 = VAR_11;
 FUNC_1(VAR_9.mdev.this_device,
  "SCIFAPI bind: bound to port number %d\n", VAR_11);
scif_bind_exit:
 FUNC_5(&VAR_12->lock);
scif_bind_admin_exit:
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_vsock {int send_pkt_work; int dev; TYPE_1__* vqs; } ;
struct TYPE_2__ {int poll; scalar_t__ handle_kick; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct vhost_vsock *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->vqs); VAR_1++)
  if (VAR_0->vqs[VAR_1].handle_kick)
   FUNC_1(&VAR_0->vqs[VAR_1].poll);
 FUNC_2(&VAR_0->dev, &VAR_0->send_pkt_work);
}

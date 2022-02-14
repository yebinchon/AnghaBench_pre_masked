
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvneta_rx_queue {int size; int last_desc; int descs; int descs_phys; } ;
struct mvneta_port {int rx_ring_size; TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct mvneta_port *VAR_3,
         struct mvneta_rx_queue *VAR_4)
{
 VAR_4->size = VAR_3->rx_ring_size;


 VAR_4->descs = FUNC_0(VAR_3->dev->dev.parent,
     VAR_4->size * VAR_2,
     &VAR_4->descs_phys, VAR_1);
 if (!VAR_4->descs)
  return -VAR_0;

 VAR_4->last_desc = VAR_4->size - 1;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rio_mport_mapping {int phys_addr; int rio_addr; int size; int * virt_addr; int node; int ref; struct mport_dev* md; struct file* filp; int dir; } ;
struct TYPE_2__ {int parent; } ;
struct rio_mport {TYPE_1__ dev; } ;
struct mport_dev {int buf_mutex; int mappings; struct rio_mport* mport; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int,int*,int ) ;
 int FUNC_1 (int ,int,int *,int) ;
 int FUNC_2 (struct rio_mport_mapping*) ;
 int FUNC_3 (int *) ;
 struct rio_mport_mapping* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rio_mport*,int,int,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct mport_dev *VAR_5, struct file *VAR_6,
    u64 VAR_7, u64 VAR_8,
    struct rio_mport_mapping **VAR_9)
{
 struct rio_mport *VAR_10 = VAR_5->mport;
 struct rio_mport_mapping *VAR_11;
 int VAR_12;


 if (VAR_8 > 0xffffffff)
  return -VAR_0;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 VAR_11->virt_addr = FUNC_0(VAR_10->dev.parent, VAR_8,
         &VAR_11->phys_addr, VAR_2);
 if (VAR_11->virt_addr == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto err_dma_alloc;
 }

 if (VAR_7 == VAR_4)
  VAR_7 = VAR_11->phys_addr;
 VAR_12 = FUNC_8(VAR_10, VAR_11->phys_addr, VAR_7, (u32)VAR_8, 0);
 if (VAR_12 < 0)
  goto err_map_inb;

 VAR_11->dir = VAR_3;
 VAR_11->rio_addr = VAR_7;
 VAR_11->size = VAR_8;
 VAR_11->filp = VAR_6;
 VAR_11->md = VAR_5;
 FUNC_3(&VAR_11->ref);
 FUNC_6(&VAR_5->buf_mutex);
 FUNC_5(&VAR_11->node, &VAR_5->mappings);
 FUNC_7(&VAR_5->buf_mutex);
 *VAR_9 = VAR_11;
 return 0;

err_map_inb:
 FUNC_1(VAR_10->dev.parent, VAR_8,
     VAR_11->virt_addr, VAR_11->phys_addr);
err_dma_alloc:
 FUNC_2(VAR_11);
 return VAR_12;
}

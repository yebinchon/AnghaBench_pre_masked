
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport_mapping {int node; int ref; struct mport_dev* md; struct file* filp; int phys_addr; int size; int rio_addr; int rioid; int dir; } ;
struct rio_mport {int dummy; } ;
struct mport_dev {int mappings; struct rio_mport* mport; } ;
struct file {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rio_mport_mapping*) ;
 int FUNC_1 (int *) ;
 struct rio_mport_mapping* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct rio_mport*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct mport_dev *VAR_4, struct file *VAR_5,
      u16 VAR_6, u64 VAR_7, u32 VAR_8,
      dma_addr_t *VAR_9)
{
 struct rio_mport *VAR_10 = VAR_4->mport;
 struct rio_mport_mapping *VAR_11;
 int VAR_12;

 FUNC_5(VAR_3, "did=%d ra=0x%llx sz=0x%x", VAR_6, VAR_7, VAR_8);

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_10, VAR_6, VAR_7, VAR_8, 0, VAR_9);
 if (VAR_12 < 0)
  goto err_map_outb;

 VAR_11->dir = VAR_2;
 VAR_11->rioid = VAR_6;
 VAR_11->rio_addr = VAR_7;
 VAR_11->size = VAR_8;
 VAR_11->phys_addr = *VAR_9;
 VAR_11->filp = VAR_5;
 VAR_11->md = VAR_4;
 FUNC_1(&VAR_11->ref);
 FUNC_3(&VAR_11->node, &VAR_4->mappings);
 return 0;
err_map_outb:
 FUNC_0(VAR_11);
 return VAR_12;
}

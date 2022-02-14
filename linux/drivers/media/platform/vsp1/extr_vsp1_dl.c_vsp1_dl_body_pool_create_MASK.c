
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_dl_entry {int dummy; } ;
struct vsp1_dl_body_pool {size_t size; unsigned int max_entries; int free; scalar_t__ mem; scalar_t__ entries; scalar_t__ dma; struct vsp1_dl_body_pool* pool; struct vsp1_dl_body_pool* bodies; int lock; struct vsp1_device* vsp1; } ;
struct vsp1_dl_body {size_t size; unsigned int max_entries; int free; scalar_t__ mem; scalar_t__ entries; scalar_t__ dma; struct vsp1_dl_body* pool; struct vsp1_dl_body* bodies; int lock; struct vsp1_device* vsp1; } ;
struct vsp1_device {int bus_master; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,size_t,scalar_t__*,int ) ;
 struct vsp1_dl_body_pool* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct vsp1_dl_body_pool*) ;
 struct vsp1_dl_body_pool* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

struct vsp1_dl_body_pool *
FUNC_7(struct vsp1_device *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, size_t VAR_4)
{
 struct vsp1_dl_body_pool *VAR_5;
 size_t VAR_6;
 unsigned int VAR_7;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->vsp1 = VAR_1;







 VAR_6 = VAR_3 * sizeof(struct vsp1_dl_entry) + VAR_4;
 VAR_5->size = VAR_6 * VAR_2;

 VAR_5->bodies = FUNC_2(VAR_2, sizeof(*VAR_5->bodies), VAR_0);
 if (!VAR_5->bodies) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_5->mem = FUNC_1(VAR_1->bus_master, VAR_5->size, &VAR_5->dma,
     VAR_0);
 if (!VAR_5->mem) {
  FUNC_3(VAR_5->bodies);
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 FUNC_6(&VAR_5->lock);
 FUNC_0(&VAR_5->free);

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  struct vsp1_dl_body *VAR_8 = &VAR_5->bodies[VAR_7];

  VAR_8->pool = VAR_5;
  VAR_8->max_entries = VAR_3;

  VAR_8->dma = VAR_5->dma + VAR_7 * VAR_6;
  VAR_8->entries = VAR_5->mem + VAR_7 * VAR_6;

  FUNC_5(&VAR_8->free, &VAR_5->free);
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ion_heap {int flags; scalar_t__ num_of_alloc_bytes; scalar_t__ alloc_bytes_wm; TYPE_1__* ops; int stat_lock; int num_of_buffers; } ;
struct ion_device {int dummy; } ;
struct ion_buffer {unsigned long flags; unsigned long size; int lock; int attachments; int sg_table; struct ion_device* dev; struct ion_heap* heap; } ;
struct TYPE_2__ {int (* allocate ) (struct ion_heap*,struct ion_buffer*,unsigned long,unsigned long) ;int (* free ) (struct ion_buffer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct ion_buffer* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct ion_heap*,int ) ;
 int FUNC_4 (struct ion_buffer*) ;
 struct ion_buffer* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ion_heap*,struct ion_buffer*,unsigned long,unsigned long) ;
 int FUNC_10 (struct ion_heap*,struct ion_buffer*,unsigned long,unsigned long) ;
 int FUNC_11 (struct ion_buffer*) ;

__attribute__((used)) static struct ion_buffer *FUNC_12(struct ion_heap *VAR_4,
         struct ion_device *VAR_5,
         unsigned long VAR_6,
         unsigned long VAR_7)
{
 struct ion_buffer *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_8->heap = VAR_4;
 VAR_8->flags = VAR_7;
 VAR_8->dev = VAR_5;
 VAR_8->size = VAR_6;

 VAR_9 = VAR_4->ops->allocate(VAR_4, VAR_8, VAR_6, VAR_7);

 if (VAR_9) {
  if (!(VAR_4->flags & VAR_3))
   goto err2;

  FUNC_3(VAR_4, 0);
  VAR_9 = VAR_4->ops->allocate(VAR_4, VAR_8, VAR_6, VAR_7);
  if (VAR_9)
   goto err2;
 }

 if (!VAR_8->sg_table) {
  FUNC_2(1, "This heap needs to set the sgtable");
  VAR_9 = -VAR_0;
  goto err1;
 }

 FUNC_7(&VAR_4->stat_lock);
 VAR_4->num_of_buffers++;
 VAR_4->num_of_alloc_bytes += VAR_6;
 if (VAR_4->num_of_alloc_bytes > VAR_4->alloc_bytes_wm)
  VAR_4->alloc_bytes_wm = VAR_4->num_of_alloc_bytes;
 FUNC_8(&VAR_4->stat_lock);

 FUNC_1(&VAR_8->attachments);
 FUNC_6(&VAR_8->lock);
 return VAR_8;

err1:
 VAR_4->ops->free(VAR_8);
err2:
 FUNC_4(VAR_8);
 return FUNC_0(VAR_9);
}

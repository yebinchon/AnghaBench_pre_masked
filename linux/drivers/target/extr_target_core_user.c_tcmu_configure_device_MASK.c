
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio_info {int * name; int release; int open; int mmap; int irq; int irqcontrol; TYPE_1__* mem; int version; } ;
struct tcmu_mailbox {int flags; void* cmdr_size; void* cmdr_off; int version; } ;
struct tcmu_dev {int max_blocks; int data_size; scalar_t__ nl_reply_supported; int * data_bitmap; struct tcmu_mailbox* mb_addr; struct uio_info uio_info; int kref; int node; void* ring_size; void* data_off; void* cmdr_size; scalar_t__ dbi_thresh; int cmdr_lock; } ;
struct TYPE_4__ {int hw_block_size; int hw_max_sectors; int hw_queue_depth; scalar_t__ emulate_write_cache; } ;
struct se_device {TYPE_2__ dev_attrib; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_3__ {char* name; int memtype; void* size; scalar_t__ addr; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int VAR_5 ;
 struct tcmu_dev* FUNC_1 (struct se_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (struct tcmu_dev*) ;
 int FUNC_13 (struct tcmu_dev*) ;
 int FUNC_14 (int ,struct uio_info*) ;
 int FUNC_15 (struct uio_info*) ;
 int FUNC_16 (struct tcmu_mailbox*) ;
 struct tcmu_mailbox* FUNC_17 (void*) ;

__attribute__((used)) static int FUNC_18(struct se_device *VAR_20)
{
 struct tcmu_dev *VAR_21 = FUNC_1(VAR_20);
 struct uio_info *VAR_22;
 struct tcmu_mailbox *VAR_23;
 int VAR_24 = 0;

 VAR_24 = FUNC_13(VAR_21);
 if (VAR_24)
  return VAR_24;

 VAR_22 = &VAR_21->uio_info;

 FUNC_10(&VAR_21->cmdr_lock);
 VAR_21->data_bitmap = FUNC_5(VAR_21->max_blocks, VAR_4);
 FUNC_11(&VAR_21->cmdr_lock);
 if (!VAR_21->data_bitmap) {
  VAR_24 = -VAR_3;
  goto err_bitmap_alloc;
 }

 VAR_21->mb_addr = FUNC_17(VAR_1);
 if (!VAR_21->mb_addr) {
  VAR_24 = -VAR_3;
  goto err_vzalloc;
 }


 VAR_21->cmdr_size = VAR_1 - VAR_0;
 VAR_21->data_off = VAR_1;
 VAR_21->data_size = VAR_21->max_blocks * VAR_2;
 VAR_21->dbi_thresh = 0;


 VAR_23 = VAR_21->mb_addr;
 VAR_23->version = VAR_8;
 VAR_23->flags = VAR_6 | VAR_7;
 VAR_23->cmdr_off = VAR_0;
 VAR_23->cmdr_size = VAR_21->cmdr_size;

 FUNC_2(!FUNC_0(VAR_21->data_off));
 FUNC_2(VAR_21->data_size % VAR_5);
 FUNC_2(VAR_21->data_size % VAR_2);

 VAR_22->version = FUNC_3(VAR_8);

 VAR_22->mem[0].name = "tcm-user command & data buffer";
 VAR_22->mem[0].addr = (phys_addr_t)(uintptr_t)VAR_21->mb_addr;
 VAR_22->mem[0].size = VAR_21->ring_size = VAR_21->data_size + VAR_1;
 VAR_22->mem[0].memtype = VAR_10;

 VAR_22->irqcontrol = VAR_14;
 VAR_22->irq = VAR_9;

 VAR_22->mmap = VAR_16;
 VAR_22->open = VAR_17;
 VAR_22->release = VAR_18;

 VAR_24 = FUNC_14(VAR_19, VAR_22);
 if (VAR_24)
  goto err_register;


 if (VAR_20->dev_attrib.hw_block_size == 0)
  VAR_20->dev_attrib.hw_block_size = 512;

 if (!VAR_20->dev_attrib.hw_max_sectors)
  VAR_20->dev_attrib.hw_max_sectors = 128;
 if (!VAR_20->dev_attrib.emulate_write_cache)
  VAR_20->dev_attrib.emulate_write_cache = 0;
 VAR_20->dev_attrib.hw_queue_depth = 128;




 if (VAR_21->nl_reply_supported >= 0)
  VAR_21->nl_reply_supported = VAR_15;





 FUNC_7(&VAR_21->kref);

 VAR_24 = FUNC_12(VAR_21);
 if (VAR_24)
  goto err_netlink;

 FUNC_10(&VAR_12);
 FUNC_9(&VAR_21->node, &VAR_11);
 FUNC_11(&VAR_12);

 return 0;

err_netlink:
 FUNC_8(&VAR_21->kref, VAR_13);
 FUNC_15(&VAR_21->uio_info);
err_register:
 FUNC_16(VAR_21->mb_addr);
 VAR_21->mb_addr = ((void*)0);
err_vzalloc:
 FUNC_4(VAR_21->data_bitmap);
 VAR_21->data_bitmap = ((void*)0);
err_bitmap_alloc:
 FUNC_6(VAR_22->name);
 VAR_22->name = ((void*)0);

 return VAR_24;
}

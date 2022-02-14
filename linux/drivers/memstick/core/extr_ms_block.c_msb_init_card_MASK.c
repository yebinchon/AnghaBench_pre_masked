
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sectors; int heads; int cylinders; } ;
struct msb_data {int caps; int read_only; int state; int page_size; int block_count; int pages_in_block; int block_size; TYPE_2__ geometry; int block_buffer; struct ms_boot_page* boot_page; } ;
struct TYPE_7__ {int number_of_blocks; int page_size; int block_size; int transfer_supporting; int device_type; } ;
struct ms_boot_page {TYPE_3__ attr; } ;
struct memstick_host {int caps; } ;
struct TYPE_5__ {scalar_t__ class; } ;
struct memstick_dev {TYPE_1__ id; struct memstick_host* host; } ;
struct TYPE_8__ {int size; int sec; int head; int cyl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int ) ;
 struct msb_data* FUNC_2 (struct memstick_dev*) ;
 int FUNC_3 (struct msb_data*) ;
 int FUNC_4 (struct msb_data*) ;
 int FUNC_5 (struct msb_data*) ;
 int FUNC_6 (struct msb_data*,int) ;
 int FUNC_7 (struct msb_data*) ;
 int FUNC_8 (struct msb_data*,int) ;
 int FUNC_9 (struct msb_data*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct memstick_dev *VAR_8)
{
 struct msb_data *VAR_9 = FUNC_2(VAR_8);
 struct memstick_host *VAR_10 = VAR_8->host;
 struct ms_boot_page *VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14;

 VAR_9->caps = 0;

 if (VAR_8->id.class >= VAR_5 &&
    VAR_8->id.class <= VAR_5)
  VAR_9->read_only = 1;

 VAR_9->state = -1;
 VAR_12 = FUNC_8(VAR_9, 0);
 if (VAR_12)
  return VAR_12;




 if (VAR_10->caps & VAR_4)
  FUNC_9(VAR_9);

 VAR_9->page_size = sizeof(struct ms_boot_page);


 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12)
  return -VAR_1;

 VAR_11 = &VAR_9->boot_page[0];


 VAR_9->block_count = VAR_11->attr.number_of_blocks;
 VAR_9->page_size = VAR_11->attr.page_size;

 VAR_9->pages_in_block = VAR_11->attr.block_size * 2;
 VAR_9->block_size = VAR_9->page_size * VAR_9->pages_in_block;

 if (VAR_9->page_size > VAR_6) {

  FUNC_0("device page %d size isn't supported", VAR_9->page_size);
  return -VAR_0;
 }

 VAR_9->block_buffer = FUNC_1(VAR_9->block_size, VAR_3);
 if (!VAR_9->block_buffer)
  return -VAR_2;

 VAR_14 = (VAR_9->block_size * VAR_9->block_count) >> 20;

 for (VAR_13 = 0; VAR_7[VAR_13].size; VAR_13++) {

  if (VAR_7[VAR_13].size != VAR_14)
   continue;

  VAR_9->geometry.cylinders = VAR_7[VAR_13].cyl;
  VAR_9->geometry.heads = VAR_7[VAR_13].head;
  VAR_9->geometry.sectors = VAR_7[VAR_13].sec;
  break;
 }

 if (VAR_11->attr.transfer_supporting == 1)
  VAR_9->caps |= VAR_4;

 if (VAR_11->attr.device_type & 0x03)
  VAR_9->read_only = 1;

 FUNC_0("Total block count = %d", VAR_9->block_count);
 FUNC_0("Each block consists of %d pages", VAR_9->pages_in_block);
 FUNC_0("Page size = %d bytes", VAR_9->page_size);
 FUNC_0("Parallel mode supported: %d", !!(VAR_9->caps & VAR_4));
 FUNC_0("Read only: %d", VAR_9->read_only);







 VAR_12 = FUNC_3(VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12)
  return VAR_12;



 VAR_12 = FUNC_6(VAR_9, 0);

 if (VAR_12 && VAR_12 != -VAR_2) {
  FUNC_0("failed to read bad block table from primary boot block, trying from backup");
  VAR_12 = FUNC_6(VAR_9, 1);
 }

 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_5(VAR_9);
 if (VAR_12) {
  FUNC_10("Scan of media failed");
  return VAR_12;
 }

 return 0;

}

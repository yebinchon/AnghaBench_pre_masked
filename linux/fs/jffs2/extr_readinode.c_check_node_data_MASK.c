
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct jffs2_tmp_dnode_info {int csize; int data_crc; int partial_crc; TYPE_1__* fn; } ;
struct jffs2_sb_info {int wbuf_pagesize; size_t sector_size; int used_size; int unchecked_size; int mtd; int erase_completion_lock; struct jffs2_eraseblock* blocks; } ;
struct jffs2_raw_node_ref {size_t flash_offset; } ;
struct jffs2_raw_inode {int dummy; } ;
struct jffs2_eraseblock {int used_size; int unchecked_size; } ;
struct TYPE_2__ {struct jffs2_raw_node_ref* raw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,size_t,int) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (char*,int,...) ;
 size_t VAR_4 ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (char*,int,int,int,...) ;
 int FUNC_6 (struct jffs2_sb_info*,struct jffs2_eraseblock*) ;
 int FUNC_7 (struct jffs2_sb_info*,int,int,size_t*,unsigned char*) ;
 scalar_t__ FUNC_8 (struct jffs2_sb_info*) ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,int,int,size_t*,void**,int *) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (struct jffs2_raw_node_ref*) ;
 int FUNC_15 (struct jffs2_sb_info*,struct jffs2_eraseblock*,struct jffs2_raw_node_ref*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct jffs2_sb_info *VAR_5, struct jffs2_tmp_dnode_info *VAR_6)
{
 struct jffs2_raw_node_ref *VAR_7 = VAR_6->fn->raw;
 int VAR_8 = 0, VAR_9 = 0;
 struct jffs2_eraseblock *VAR_10;
 unsigned char *VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;
 size_t VAR_15;

 FUNC_0(VAR_6->csize == 0);


 VAR_13 = FUNC_14(VAR_7) + sizeof(struct jffs2_raw_inode);
 VAR_14 = VAR_6->csize;

 if (FUNC_8(VAR_5)) {
  int VAR_16 = VAR_13 % VAR_5->wbuf_pagesize;
  if (FUNC_11(VAR_16))
   VAR_16 = VAR_5->wbuf_pagesize - VAR_16;

  if (VAR_16 >= VAR_6->csize) {
   FUNC_5("no need to check node at %#08x, data length %u, data starts at %#08x - it has already been checked.\n",
          FUNC_14(VAR_7), VAR_6->csize, VAR_13);
   goto adj_acc;
  }

  VAR_13 += VAR_16;
  VAR_14 -= VAR_16;
 }

 FUNC_5("check node at %#08x, data length %u, partial CRC %#08x, correct CRC %#08x, data starts at %#08x, start checking from %#08x - %u bytes.\n",
  FUNC_14(VAR_7), VAR_6->csize, VAR_6->partial_crc, VAR_6->data_crc, VAR_13 - VAR_14, VAR_13, VAR_14);




 VAR_8 = FUNC_12(VAR_5->mtd, VAR_13, VAR_14, &VAR_15, (void **)&VAR_11, ((void*)0));
 if (!VAR_8 && VAR_15 < VAR_14) {
  FUNC_3("MTD point returned len too short: %zu instead of %u.\n", VAR_15, VAR_6->csize);
  FUNC_13(VAR_5->mtd, VAR_13, VAR_15);
 } else if (VAR_8) {
  if (VAR_8 != -VAR_2)
   FUNC_3("MTD point failed: error code %d.\n", VAR_8);
 } else
  VAR_9 = 1;


 if (!VAR_9) {
  VAR_11 = FUNC_10(VAR_14, VAR_3);
  if (FUNC_18(!VAR_11))
   return -VAR_1;



  VAR_8 = FUNC_7(VAR_5, VAR_13, VAR_14, &VAR_15, VAR_11);
  if (VAR_8) {
   FUNC_1("can not read %d bytes from 0x%08x, error code: %d.\n", VAR_14, VAR_13, VAR_8);
   goto free_out;
  }

  if (VAR_15 != VAR_14) {
   FUNC_1("short read at %#08x: %zd instead of %d.\n", VAR_13, VAR_15, VAR_14);
   VAR_8 = -VAR_0;
   goto free_out;
  }
 }


 VAR_12 = FUNC_4(VAR_6->partial_crc, VAR_11, VAR_14);
 if(!VAR_9)
  FUNC_9(VAR_11);

 else
  FUNC_13(VAR_5->mtd, VAR_13, VAR_14);


 if (VAR_12 != VAR_6->data_crc) {
  FUNC_2("wrong data CRC in data node at 0x%08x: read %#08x, calculated %#08x.\n",
        FUNC_14(VAR_7), VAR_6->data_crc, VAR_12);
  return 1;
 }

adj_acc:
 VAR_10 = &VAR_5->blocks[VAR_7->flash_offset / VAR_5->sector_size];
 VAR_14 = FUNC_15(VAR_5, VAR_10, VAR_7);




 VAR_7->flash_offset |= VAR_4;




 FUNC_16(&VAR_5->erase_completion_lock);
 VAR_10->used_size += VAR_14;
 VAR_10->unchecked_size -= VAR_14;
 VAR_5->used_size += VAR_14;
 VAR_5->unchecked_size -= VAR_14;
 FUNC_6(VAR_5, VAR_10);
 FUNC_17(&VAR_5->erase_completion_lock);

 return 0;

free_out:
 if(!VAR_9)
  FUNC_9(VAR_11);

 else
  FUNC_13(VAR_5->mtd, VAR_13, VAR_14);

 return VAR_8;
}

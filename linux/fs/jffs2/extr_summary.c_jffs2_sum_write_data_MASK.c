
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {union jffs2_sum_mem* next; int nodetype; } ;
struct TYPE_9__ {int offset; int nodetype; } ;
struct TYPE_8__ {int totlen; int offset; int version; int xid; int nodetype; } ;
struct TYPE_12__ {int nsize; int name; int type; int ino; int version; int pino; int offset; int totlen; int nodetype; } ;
struct TYPE_11__ {int totlen; int offset; int version; int inode; int nodetype; } ;
union jffs2_sum_mem {TYPE_3__ u; TYPE_2__ r; TYPE_1__ x; TYPE_5__ d; TYPE_4__ i; } ;
typedef int uint32_t ;
struct kvec {int iov_len; struct jffs2_raw_summary* iov_base; } ;
struct jffs2_unknown_node {int dummy; } ;
struct jffs2_sum_xref_flash {int offset; int nodetype; } ;
struct jffs2_sum_xattr_flash {int totlen; int offset; int version; int xid; int nodetype; } ;
struct jffs2_sum_marker {void* magic; void* offset; } ;
struct jffs2_sum_inode_flash {int totlen; int offset; int version; int inode; int nodetype; } ;
struct jffs2_sum_dirent_flash {int name; int type; int nsize; int ino; int version; int pino; int offset; int totlen; int nodetype; } ;
struct jffs2_sb_info {int cleanmarker_size; int sector_size; int erase_completion_lock; TYPE_6__* summary; } ;
struct jffs2_raw_summary {void* node_crc; void* sum_crc; void* sum_num; void* cln_mkr; void* padded; void* hdr_crc; void* totlen; void* nodetype; void* magic; } ;
struct jffs2_eraseblock {int offset; int free_size; } ;
typedef int isum ;
struct TYPE_13__ {int sum_padded; int sum_num; int sum_size; struct jffs2_raw_summary* sum_buf; union jffs2_sum_mem* sum_list_head; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,struct jffs2_raw_summary*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct jffs2_sb_info*,struct kvec*,int,int,size_t*,int ) ;
 int FUNC_9 (struct jffs2_sb_info*,struct jffs2_eraseblock*,int,int,int *) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (union jffs2_sum_mem*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (struct jffs2_raw_summary*,int,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct jffs2_sb_info *VAR_12, struct jffs2_eraseblock *VAR_13,
    uint32_t VAR_14, uint32_t VAR_15, int VAR_16)
{
 struct jffs2_raw_summary VAR_17;
 union jffs2_sum_mem *VAR_18;
 struct jffs2_sum_marker *VAR_19;
 struct kvec VAR_20[2];
 uint32_t VAR_21;
 void *VAR_22;
 int VAR_23;
 size_t VAR_24;

 if (VAR_16 + VAR_15 > VAR_9) {

  FUNC_10(VAR_12->summary);

  FUNC_2("Summary too big (%d data, %d pad) in eraseblock at %08x\n",
         VAR_15, VAR_16, VAR_13->offset);

  return 0;
 }

 if (VAR_16 < 0) {

  FUNC_10(VAR_12->summary);

  FUNC_2("Not enough space for summary, padsize = %d\n",
         VAR_16);

  return 0;
 }

 FUNC_14(VAR_12->summary->sum_buf, 0xff, VAR_15);
 FUNC_14(&VAR_17, 0, sizeof(VAR_17));

 VAR_17.magic = FUNC_3(VAR_2);
 VAR_17.nodetype = FUNC_3(VAR_3);
 VAR_17.totlen = FUNC_4(VAR_14);
 VAR_17.hdr_crc = FUNC_4(FUNC_5(0, &VAR_17, sizeof(struct jffs2_unknown_node) - 4));
 VAR_17.padded = FUNC_4(VAR_12->summary->sum_padded);
 VAR_17.cln_mkr = FUNC_4(VAR_12->cleanmarker_size);
 VAR_17.sum_num = FUNC_4(VAR_12->summary->sum_num);
 VAR_22 = VAR_12->summary->sum_buf;

 while (VAR_12->summary->sum_num) {
  VAR_18 = VAR_12->summary->sum_list_head;

  switch (FUNC_7(VAR_18->u.nodetype)) {
   case 130: {
    struct jffs2_sum_inode_flash *VAR_25 = VAR_22;

    VAR_25->nodetype = VAR_18->i.nodetype;
    VAR_25->inode = VAR_18->i.inode;
    VAR_25->version = VAR_18->i.version;
    VAR_25->offset = VAR_18->i.offset;
    VAR_25->totlen = VAR_18->i.totlen;

    VAR_22 += VAR_4;

    break;
   }

   case 131: {
    struct jffs2_sum_dirent_flash *VAR_26 = VAR_22;

    VAR_26->nodetype = VAR_18->d.nodetype;
    VAR_26->totlen = VAR_18->d.totlen;
    VAR_26->offset = VAR_18->d.offset;
    VAR_26->pino = VAR_18->d.pino;
    VAR_26->version = VAR_18->d.version;
    VAR_26->ino = VAR_18->d.ino;
    VAR_26->nsize = VAR_18->d.nsize;
    VAR_26->type = VAR_18->d.type;

    FUNC_13(VAR_26->name, VAR_18->d.name,
       VAR_18->d.nsize);

    VAR_22 += FUNC_1(VAR_18->d.nsize);

    break;
   }
   default : {
    if ((FUNC_7(VAR_18->u.nodetype) & VAR_0)
        == VAR_1) {
     FUNC_6("Writing unknown RWCOMPAT_COPY node type %x\n",
          FUNC_7(VAR_18->u.nodetype));
     FUNC_10(VAR_12->summary);
    } else {
     FUNC_0();
    }
   }
  }

  VAR_12->summary->sum_list_head = VAR_18->u.next;
  FUNC_12(VAR_18);

  VAR_12->summary->sum_num--;
 }

 FUNC_11(VAR_12->summary);

 VAR_22 += VAR_16;

 VAR_19 = VAR_22;
 VAR_19->offset = FUNC_4(VAR_12->sector_size - VAR_13->free_size);
 VAR_19->magic = FUNC_4(VAR_8);

 VAR_17.sum_crc = FUNC_4(FUNC_5(0, VAR_12->summary->sum_buf, VAR_15));
 VAR_17.node_crc = FUNC_4(FUNC_5(0, &VAR_17, sizeof(VAR_17) - 8));

 VAR_20[0].iov_base = &VAR_17;
 VAR_20[0].iov_len = sizeof(VAR_17);
 VAR_20[1].iov_base = VAR_12->summary->sum_buf;
 VAR_20[1].iov_len = VAR_15;

 VAR_21 = VAR_13->offset + VAR_12->sector_size - VAR_13->free_size;

 FUNC_6("writing out data to flash to pos : 0x%08x\n", VAR_21);

 VAR_23 = FUNC_8(VAR_12, VAR_20, 2, VAR_21, &VAR_24, 0);

 if (VAR_23 || (VAR_24 != VAR_14)) {

  FUNC_2("Write of %u bytes at 0x%08x failed. returned %d, retlen %zd\n",
         VAR_14, VAR_21, VAR_23, VAR_24);

  if (VAR_24) {

   FUNC_15(&VAR_12->erase_completion_lock);
   FUNC_9(VAR_12, VAR_13, VAR_21 | VAR_11, VAR_14, ((void*)0));
   FUNC_16(&VAR_12->erase_completion_lock);
  }

  VAR_12->summary->sum_size = VAR_5;

  return 0;
 }

 FUNC_15(&VAR_12->erase_completion_lock);
 FUNC_9(VAR_12, VAR_13, VAR_21 | VAR_10, VAR_14, ((void*)0));
 FUNC_16(&VAR_12->erase_completion_lock);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int nodetype; int hdr_crc; } ;
struct TYPE_5__ {int nsize; int name_crc; union jffs2_node_union* name; int node_crc; } ;
struct TYPE_4__ {int data_crc; int csize; union jffs2_node_union* data; int dsize; int node_crc; } ;
union jffs2_node_union {TYPE_3__ u; TYPE_2__ d; TYPE_1__ i; } ;
typedef scalar_t__ uint32_t ;
struct jffs2_unknown_node {int dummy; } ;
struct jffs2_sb_info {scalar_t__ sector_size; struct jffs2_eraseblock* blocks; int gcblock; } ;
struct jffs2_raw_node_ref {int dummy; } ;
struct jffs2_raw_inode {int dummy; } ;
struct jffs2_inode_cache {int dummy; } ;
struct jffs2_eraseblock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,union jffs2_node_union*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct jffs2_sb_info*,scalar_t__,scalar_t__,struct jffs2_inode_cache*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (struct jffs2_sb_info*,struct jffs2_eraseblock*) ;
 int FUNC_6 (struct jffs2_sb_info*,struct jffs2_eraseblock*) ;
 int FUNC_7 (struct jffs2_sb_info*,int,scalar_t__,size_t*,char*) ;
 int FUNC_8 (struct jffs2_sb_info*,scalar_t__,scalar_t__,size_t*,char*) ;
 int FUNC_9 (struct jffs2_sb_info*,struct jffs2_raw_node_ref*) ;
 int FUNC_10 (struct jffs2_sb_info*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_11 (union jffs2_node_union*) ;
 union jffs2_node_union* FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (char*,scalar_t__,...) ;
 int FUNC_14 (char*,int,...) ;
 int FUNC_15 (struct jffs2_raw_node_ref*) ;
 scalar_t__ FUNC_16 (struct jffs2_sb_info*,int ,struct jffs2_raw_node_ref*) ;
 int FUNC_17 (union jffs2_node_union*,int) ;
 scalar_t__ FUNC_18 (struct jffs2_sb_info*) ;

__attribute__((used)) static int FUNC_19(struct jffs2_sb_info *VAR_7,
       struct jffs2_inode_cache *VAR_8,
       struct jffs2_raw_node_ref *VAR_9)
{
 union jffs2_node_union *VAR_10;
 size_t VAR_11;
 int VAR_12;
 uint32_t VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16;
 int VAR_17 = 0;

 FUNC_4(1, "Going to GC REF_PRISTINE node at 0x%08x\n",
    FUNC_15(VAR_9));

 VAR_14 = VAR_16 = FUNC_16(VAR_7, VAR_7->gcblock, VAR_9);




 if (VAR_8 && VAR_14 > sizeof(struct jffs2_raw_inode) + VAR_4)
  VAR_14 = sizeof(struct jffs2_raw_inode) + VAR_4;

 VAR_12 = FUNC_10(VAR_7, VAR_14, &VAR_14, VAR_16);


 if (VAR_12)
  return VAR_12;

 if (VAR_14 < VAR_16) {

  return -VAR_0;
 }

 VAR_10 = FUNC_12(VAR_16, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_12 = FUNC_7(VAR_7, FUNC_15(VAR_9), VAR_16, &VAR_11, (char *)VAR_10);
 if (!VAR_12 && VAR_11 != VAR_16)
  VAR_12 = -VAR_1;
 if (VAR_12)
  goto out_node;

 VAR_15 = FUNC_0(0, VAR_10, sizeof(struct jffs2_unknown_node)-4);
 if (FUNC_2(VAR_10->u.hdr_crc) != VAR_15) {
  FUNC_14("Header CRC failed on REF_PRISTINE node at 0x%08x: Read 0x%08x, calculated 0x%08x\n",
   FUNC_15(VAR_9), FUNC_2(VAR_10->u.hdr_crc), VAR_15);
  goto bail;
 }

 switch(FUNC_1(VAR_10->u.nodetype)) {
 case 128:
  VAR_15 = FUNC_0(0, VAR_10, sizeof(VAR_10->i)-8);
  if (FUNC_2(VAR_10->i.node_crc) != VAR_15) {
   FUNC_14("Node CRC failed on REF_PRISTINE data node at 0x%08x: Read 0x%08x, calculated 0x%08x\n",
    FUNC_15(VAR_9), FUNC_2(VAR_10->i.node_crc),
    VAR_15);
   goto bail;
  }

  if (FUNC_2(VAR_10->i.dsize)) {
   VAR_15 = FUNC_0(0, VAR_10->i.data, FUNC_2(VAR_10->i.csize));
   if (FUNC_2(VAR_10->i.data_crc) != VAR_15) {
    FUNC_14("Data CRC failed on REF_PRISTINE data node at 0x%08x: Read 0x%08x, calculated 0x%08x\n",
     FUNC_15(VAR_9),
     FUNC_2(VAR_10->i.data_crc), VAR_15);
    goto bail;
   }
  }
  break;

 case 129:
  VAR_15 = FUNC_0(0, VAR_10, sizeof(VAR_10->d)-8);
  if (FUNC_2(VAR_10->d.node_crc) != VAR_15) {
   FUNC_14("Node CRC failed on REF_PRISTINE dirent node at 0x%08x: Read 0x%08x, calculated 0x%08x\n",
    FUNC_15(VAR_9),
    FUNC_2(VAR_10->d.node_crc), VAR_15);
   goto bail;
  }

  if (FUNC_17(VAR_10->d.name, VAR_10->d.nsize) != VAR_10->d.nsize) {
   FUNC_14("Name in dirent node at 0x%08x contains zeroes\n",
    FUNC_15(VAR_9));
   goto bail;
  }

  if (VAR_10->d.nsize) {
   VAR_15 = FUNC_0(0, VAR_10->d.name, VAR_10->d.nsize);
   if (FUNC_2(VAR_10->d.name_crc) != VAR_15) {
    FUNC_14("Name CRC failed on REF_PRISTINE dirent node at 0x%08x: Read 0x%08x, calculated 0x%08x\n",
     FUNC_15(VAR_9),
     FUNC_2(VAR_10->d.name_crc), VAR_15);
    goto bail;
   }
  }
  break;
 default:

  if (VAR_8) {
   FUNC_14("Unknown node type for REF_PRISTINE node at 0x%08x: 0x%04x\n",
    FUNC_15(VAR_9), FUNC_1(VAR_10->u.nodetype));
   goto bail;
  }
 }


 retry:
 VAR_13 = FUNC_18(VAR_7);

 VAR_12 = FUNC_8(VAR_7, VAR_13, VAR_16, &VAR_11, (char *)VAR_10);

 if (VAR_12 || (VAR_11 != VAR_16)) {
  FUNC_13("Write of %d bytes at 0x%08x failed. returned %d, retlen %zd\n",
     VAR_16, VAR_13, VAR_12, VAR_11);
  if (VAR_11) {
   FUNC_3(VAR_7, VAR_13 | VAR_5, VAR_16, ((void*)0));
  } else {
   FUNC_13("Not marking the space at 0x%08x as dirty because the flash driver returned retlen zero\n",
      VAR_13);
  }
  if (!VAR_17) {

   uint32_t VAR_18;
   struct jffs2_eraseblock *VAR_19 = &VAR_7->blocks[VAR_13 / VAR_7->sector_size];

   VAR_17 = 1;

   FUNC_4(1, "Retrying failed write of REF_PRISTINE node.\n");

   FUNC_6(VAR_7,VAR_19);
   FUNC_5(VAR_7, VAR_19);

   VAR_12 = FUNC_10(VAR_7, VAR_16, &VAR_18, VAR_16);



   if (!VAR_12) {
    FUNC_4(1, "Allocated space at 0x%08x to retry failed write.\n",
       VAR_13);

    FUNC_6(VAR_7,VAR_19);
    FUNC_5(VAR_7, VAR_19);

    goto retry;
   }
   FUNC_4(1, "Failed to allocate space to retry failed write: %d!\n",
      VAR_12);
  }

  if (!VAR_12)
   VAR_12 = -VAR_1;
  goto out_node;
 }
 FUNC_3(VAR_7, VAR_13 | VAR_6, VAR_16, VAR_8);

 FUNC_9(VAR_7, VAR_9);
 FUNC_4(1, "WHEEE! GC REF_PRISTINE node at 0x%08x succeeded\n",
    FUNC_15(VAR_9));

 out_node:
 FUNC_11(VAR_10);
 return VAR_12;
 bail:
 VAR_12 = -VAR_0;
 goto out_node;
}

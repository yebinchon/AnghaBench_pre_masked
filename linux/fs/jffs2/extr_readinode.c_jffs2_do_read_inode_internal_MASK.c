
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_readinode_info {scalar_t__ latest_ref; scalar_t__ mctime_ver; scalar_t__ latest_mctime; int fds; TYPE_2__* mdata_tn; int tn_root; } ;
struct jffs2_raw_inode {int mode; void* csize; void* dsize; void* isize; void* mtime; void* ctime; void* version; void* node_crc; void* uid; void* gid; void* atime; } ;
struct jffs2_inode_info {char* target; TYPE_1__* inocache; int fragtree; TYPE_5__* metadata; int dents; } ;
typedef int rii ;
struct TYPE_11__ {scalar_t__ raw; } ;
struct TYPE_10__ {TYPE_5__* node; } ;
struct TYPE_9__ {TYPE_5__* fn; } ;
struct TYPE_8__ {int ino; scalar_t__ state; int pino_nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_9 ;




 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,struct jffs2_raw_inode*,int) ;
 int FUNC_7 (char*,...) ;
 TYPE_4__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (void*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_readinode_info*) ;
 int FUNC_13 (struct jffs2_inode_info*) ;
 int FUNC_14 (struct jffs2_sb_info*,int,scalar_t__,size_t*,char*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_readinode_info*) ;
 int FUNC_20 (struct jffs2_sb_info*,TYPE_2__*) ;
 int FUNC_21 (struct jffs2_sb_info*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_22 (struct jffs2_sb_info*,int *,scalar_t__) ;
 int FUNC_23 (char*) ;
 char* FUNC_24 (int ,int ) ;
 int FUNC_25 (struct jffs2_readinode_info*,int ,int) ;
 int FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static int FUNC_28(struct jffs2_sb_info *VAR_14,
     struct jffs2_inode_info *VAR_15,
     struct jffs2_raw_inode *VAR_16)
{
 struct jffs2_readinode_info VAR_17;
 uint32_t VAR_18, VAR_19;
 size_t VAR_20;
 int VAR_21;

 FUNC_7("ino #%u pino/nlink is %d\n", VAR_15->inocache->ino,
        VAR_15->inocache->pino_nlink);

 FUNC_25(&VAR_17, 0, sizeof(VAR_17));


 VAR_21 = FUNC_19(VAR_14, VAR_15, &VAR_17);

 if (VAR_21) {
  FUNC_0("cannot read nodes for ino %u, returned error is %d\n", VAR_15->inocache->ino, VAR_21);
  if (VAR_15->inocache->state == VAR_7)
   FUNC_21(VAR_14, VAR_15->inocache, VAR_4);
  return VAR_21;
 }

 VAR_21 = FUNC_12(VAR_14, VAR_15, &VAR_17);
 if (VAR_21) {
  FUNC_0("Failed to build final fragtree for inode #%u: error %d\n",
       VAR_15->inocache->ino, VAR_21);
  if (VAR_15->inocache->state == VAR_7)
   FUNC_21(VAR_14, VAR_15->inocache, VAR_4);
  FUNC_18(&VAR_17.tn_root);

  if (VAR_17.mdata_tn) {
   FUNC_15(VAR_17.mdata_tn->fn);
   FUNC_17(VAR_17.mdata_tn);
   VAR_17.mdata_tn = ((void*)0);
  }
  return VAR_21;
 }

 if (VAR_17.mdata_tn) {
  if (VAR_17.mdata_tn->fn->raw == VAR_17.latest_ref) {
   VAR_15->metadata = VAR_17.mdata_tn->fn;
   FUNC_17(VAR_17.mdata_tn);
  } else {
   FUNC_20(VAR_14, VAR_17.mdata_tn);
  }
  VAR_17.mdata_tn = ((void*)0);
 }

 VAR_15->dents = VAR_17.fds;

 FUNC_13(VAR_15);

 if (FUNC_27(!VAR_17.latest_ref)) {

  if (VAR_15->inocache->ino != 1) {
   FUNC_2("no data nodes found for ino #%u\n", VAR_15->inocache->ino);
   if (!VAR_17.fds) {
    if (VAR_15->inocache->state == VAR_7)
     FUNC_21(VAR_14, VAR_15->inocache, VAR_4);
    return -VAR_0;
   }
   FUNC_1("but it has children so we fake some modes for it\n");
  }
  VAR_16->mode = FUNC_5(130|VAR_11|VAR_12|VAR_13);
  VAR_16->version = FUNC_4(0);
  VAR_16->atime = VAR_16->ctime = VAR_16->mtime = FUNC_4(0);
  VAR_16->isize = FUNC_4(0);
  VAR_16->gid = FUNC_3(0);
  VAR_16->uid = FUNC_3(0);
  if (VAR_15->inocache->state == VAR_7)
   FUNC_21(VAR_14, VAR_15->inocache, VAR_6);
  return 0;
 }

 VAR_21 = FUNC_14(VAR_14, FUNC_26(VAR_17.latest_ref), sizeof(*VAR_16), &VAR_20, (void *)VAR_16);
 if (VAR_21 || VAR_20 != sizeof(*VAR_16)) {
  FUNC_0("failed to read from flash: error %d, %zd of %zd bytes read\n",
   VAR_21, VAR_20, sizeof(*VAR_16));

  return VAR_21 ? VAR_21 : -VAR_0;
 }

 VAR_18 = FUNC_6(0, VAR_16, sizeof(*VAR_16)-8);
 if (VAR_18 != FUNC_10(VAR_16->node_crc)) {
  FUNC_0("CRC failed for read_inode of inode %u at physical location 0x%x\n",
   VAR_15->inocache->ino, FUNC_26(VAR_17.latest_ref));
  return -VAR_0;
 }

 switch(FUNC_11(VAR_16->mode) & VAR_10) {
 case 130:
  if (VAR_17.mctime_ver > FUNC_10(VAR_16->version)) {


   VAR_16->ctime = VAR_16->mtime = FUNC_4(VAR_17.latest_mctime);
  }
  break;


 case 128:

  VAR_19 = FUNC_22(VAR_14, &VAR_15->fragtree, FUNC_10(VAR_16->isize));
  if (VAR_19 != FUNC_10(VAR_16->isize)) {
   FUNC_2("Truncating ino #%u to %d bytes failed because it only had %d bytes to start with!\n",
          VAR_15->inocache->ino, FUNC_10(VAR_16->isize), VAR_19);
   VAR_16->isize = FUNC_4(VAR_19);
  }
  break;

 case 129:




  if (!FUNC_10(VAR_16->isize))
   VAR_16->isize = VAR_16->dsize;

  if (VAR_15->inocache->state != VAR_5) {



   uint32_t VAR_22 = FUNC_10(VAR_16->csize);
   if (VAR_22 > VAR_8)
    return -VAR_1;
   VAR_15->target = FUNC_24(VAR_22 + 1, VAR_3);
   if (!VAR_15->target) {
    FUNC_0("can't allocate %u bytes of memory for the symlink target path cache\n", VAR_22);
    return -VAR_2;
   }

   VAR_21 = FUNC_14(VAR_14, FUNC_26(VAR_17.latest_ref) + sizeof(*VAR_16),
            VAR_22, &VAR_20, (char *)VAR_15->target);

   if (VAR_21 || VAR_20 != VAR_22) {
    if (VAR_20 != VAR_22)
     VAR_21 = -VAR_0;
    FUNC_23(VAR_15->target);
    VAR_15->target = ((void*)0);
    return VAR_21;
   }

   VAR_15->target[VAR_22] = '\0';
   FUNC_7("symlink's target '%s' cached\n", VAR_15->target);
  }



 case 132:
 case 131:


  if (VAR_15->metadata) {
   FUNC_0("Argh. Special inode #%u with mode 0%o had metadata node\n",
          VAR_15->inocache->ino, FUNC_11(VAR_16->mode));
   return -VAR_0;
  }
  if (!FUNC_8(&VAR_15->fragtree)) {
   FUNC_0("Argh. Special inode #%u with mode 0%o has no fragments\n",
          VAR_15->inocache->ino, FUNC_11(VAR_16->mode));
   return -VAR_0;
  }

  if (FUNC_9(FUNC_8(&VAR_15->fragtree))) {
   FUNC_0("Argh. Special inode #%u with mode 0x%x had more than one node\n",
          VAR_15->inocache->ino, FUNC_11(VAR_16->mode));

   return -VAR_0;
  }

  VAR_15->metadata = FUNC_8(&VAR_15->fragtree)->node;
  FUNC_16(FUNC_8(&VAR_15->fragtree));
  VAR_15->fragtree = VAR_9;
  break;
 }
 if (VAR_15->inocache->state == VAR_7)
  FUNC_21(VAR_14, VAR_15->inocache, VAR_6);

 return 0;
}

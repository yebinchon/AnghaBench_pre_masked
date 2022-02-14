
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct jffs2_unknown_node {int dummy; } ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_raw_dirent {int nsize; void* name_crc; void* node_crc; int type; void* mctime; void* ino; void* version; void* pino; void* hdr_crc; void* totlen; void* nodetype; void* magic; } ;
struct jffs2_inode_info {scalar_t__ highest_version; int dents; TYPE_1__* inocache; } ;
struct jffs2_full_dirent {scalar_t__ ino; struct jffs2_raw_dirent* name; int type; } ;
struct jffs2_eraseblock {int dummy; } ;
typedef int rd ;
struct TYPE_2__ {scalar_t__ ino; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct jffs2_full_dirent*) ;
 scalar_t__ FUNC_1 (struct jffs2_inode_info*) ;
 scalar_t__ FUNC_2 (struct jffs2_inode_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct jffs2_full_dirent*) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,struct jffs2_raw_dirent*,int) ;
 int FUNC_8 (struct jffs2_sb_info*,struct jffs2_full_dirent*,int *) ;
 int FUNC_9 (struct jffs2_sb_info*,int,int *,int ) ;
 struct jffs2_full_dirent* FUNC_10 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_raw_dirent*,struct jffs2_raw_dirent*,int,int ) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (struct jffs2_raw_dirent*) ;

__attribute__((used)) static int FUNC_13(struct jffs2_sb_info *VAR_3, struct jffs2_eraseblock *VAR_4,
     struct jffs2_inode_info *VAR_5, struct jffs2_full_dirent *VAR_6)
{
 struct jffs2_full_dirent *VAR_7;
 struct jffs2_raw_dirent VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_8.magic = FUNC_5(VAR_1);
 VAR_8.nodetype = FUNC_5(VAR_2);
 VAR_8.nsize = FUNC_12(VAR_6->name);
 VAR_8.totlen = FUNC_6(sizeof(VAR_8) + VAR_8.nsize);
 VAR_8.hdr_crc = FUNC_6(FUNC_7(0, &VAR_8, sizeof(struct jffs2_unknown_node)-4));

 VAR_8.pino = FUNC_6(VAR_5->inocache->ino);
 VAR_8.version = FUNC_6(++VAR_5->highest_version);
 VAR_8.ino = FUNC_6(VAR_6->ino);


 if (FUNC_2(VAR_5) == FUNC_1(VAR_5))
  VAR_8.mctime = FUNC_6(FUNC_2(VAR_5));
 else
  VAR_8.mctime = FUNC_6(0);
 VAR_8.type = VAR_6->type;
 VAR_8.node_crc = FUNC_6(FUNC_7(0, &VAR_8, sizeof(VAR_8)-8));
 VAR_8.name_crc = FUNC_6(FUNC_7(0, VAR_6->name, VAR_8.nsize));

 VAR_10 = FUNC_9(VAR_3, sizeof(VAR_8)+VAR_8.nsize, &VAR_9,
    FUNC_3(VAR_8.nsize));
 if (VAR_10) {
  FUNC_11("jffs2_reserve_space_gc of %zd bytes for garbage_collect_dirent failed: %d\n",
   sizeof(VAR_8)+VAR_8.nsize, VAR_10);
  return VAR_10;
 }
 VAR_7 = FUNC_10(VAR_3, VAR_5, &VAR_8, VAR_6->name, VAR_8.nsize, VAR_0);

 if (FUNC_0(VAR_7)) {
  FUNC_11("jffs2_write_dirent in garbage_collect_dirent failed: %ld\n",
   FUNC_4(VAR_7));
  return FUNC_4(VAR_7);
 }
 FUNC_8(VAR_3, VAR_7, &VAR_5->dents);
 return 0;
}

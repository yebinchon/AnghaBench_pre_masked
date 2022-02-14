
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_mode; int i_sb; } ;
struct hfs_cat_file {int dummy; } ;
struct hfs_cat_dir {int dummy; } ;
struct TYPE_11__ {int fdCreator; int fdType; } ;
struct TYPE_12__ {int Flags; TYPE_3__ UsrWds; scalar_t__ BkDat; void* MdDat; void* CrDat; void* FlNum; } ;
struct TYPE_9__ {int frView; } ;
struct TYPE_10__ {TYPE_1__ UsrInfo; scalar_t__ BkDat; void* MdDat; void* CrDat; void* DirID; } ;
struct TYPE_13__ {TYPE_4__ file; int type; TYPE_2__ dir; } ;
typedef TYPE_5__ hfs_cat_rec ;
typedef void* __be32 ;
struct TYPE_14__ {int s_creator; int s_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 () ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_6(hfs_cat_rec *VAR_6, u32 VAR_7, struct inode *VAR_8)
{
 __be32 VAR_9 = FUNC_4();

 FUNC_5(VAR_6, 0, sizeof(*VAR_6));
 if (FUNC_1(VAR_8->i_mode)) {
  VAR_6->type = VAR_0;
  VAR_6->dir.DirID = FUNC_3(VAR_7);
  VAR_6->dir.CrDat = VAR_9;
  VAR_6->dir.MdDat = VAR_9;
  VAR_6->dir.BkDat = 0;
  VAR_6->dir.UsrInfo.frView = FUNC_2(0xff);
  return sizeof(struct hfs_cat_dir);
 } else {

  VAR_6->type = VAR_1;
  VAR_6->file.Flags = VAR_4 | VAR_3;
  if (!(VAR_8->i_mode & VAR_5))
   VAR_6->file.Flags |= VAR_2;
  VAR_6->file.FlNum = FUNC_3(VAR_7);
  VAR_6->file.CrDat = VAR_9;
  VAR_6->file.MdDat = VAR_9;
  VAR_6->file.BkDat = 0;
  VAR_6->file.UsrWds.fdType = FUNC_0(VAR_8->i_sb)->s_type;
  VAR_6->file.UsrWds.fdCreator = FUNC_0(VAR_8->i_sb)->s_creator;
  return sizeof(struct hfs_cat_file);
 }
}

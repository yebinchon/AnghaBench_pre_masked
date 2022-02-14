
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_7__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {void* tv_nsec; void* tv_sec; } ;
struct inode {TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; void* i_mode; } ;
struct f2fs_inode {int i_inline; char* i_name; int i_gc_failures; int i_flags; int i_advise; int i_mtime_nsec; int i_ctime_nsec; int i_atime_nsec; int i_mtime; int i_ctime; int i_atime; int i_size; int i_projid; int i_extra_isize; int i_gid; int i_uid; int i_mode; } ;
typedef scalar_t__ projid_t ;
typedef int kprojid_t ;
struct TYPE_8__ {void** i_gc_failures; void* i_flags; int i_advise; int i_projid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct f2fs_inode*,void*,int ) ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 struct f2fs_inode* FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*) ;
 size_t VAR_1 ;
 int FUNC_4 (struct inode*,void*) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (int ,char*,int ,char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,void*) ;
 int VAR_2 ;
 int FUNC_12 (struct inode*,void*) ;
 int VAR_3 ;
 int FUNC_13 (struct page*) ;
 void* FUNC_14 (int ) ;
 void* FUNC_15 (int ) ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct inode*,struct f2fs_inode*) ;
 int FUNC_20 (struct inode*,struct page*) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_4, struct page *VAR_5)
{
 struct f2fs_inode *VAR_6 = FUNC_2(VAR_5);
 char *VAR_7;
 int VAR_8;

 VAR_4->i_mode = FUNC_14(VAR_6->i_mode);

 VAR_8 = FUNC_20(VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_12(VAR_4, FUNC_15(VAR_6->i_uid));
 FUNC_11(VAR_4, FUNC_15(VAR_6->i_gid));

 if (VAR_6->i_inline & VAR_0) {
  if (FUNC_7(FUNC_3(VAR_4)) &&
   FUNC_0(VAR_6, FUNC_14(VAR_6->i_extra_isize),
        VAR_2)) {
   projid_t VAR_9;
   kprojid_t VAR_10;

   VAR_9 = (projid_t)FUNC_15(VAR_6->i_projid);
   VAR_10 = FUNC_17(&VAR_3, VAR_9);

   if (!FUNC_18(VAR_10, FUNC_1(VAR_4)->i_projid)) {
    VAR_8 = FUNC_9(VAR_4,
        VAR_10);
    if (VAR_8)
     return VAR_8;
    FUNC_1(VAR_4)->i_projid = VAR_10;
   }
  }
 }

 FUNC_4(VAR_4, FUNC_16(VAR_6->i_size));
 VAR_4->i_atime.tv_sec = FUNC_16(VAR_6->i_atime);
 VAR_4->i_ctime.tv_sec = FUNC_16(VAR_6->i_ctime);
 VAR_4->i_mtime.tv_sec = FUNC_16(VAR_6->i_mtime);
 VAR_4->i_atime.tv_nsec = FUNC_15(VAR_6->i_atime_nsec);
 VAR_4->i_ctime.tv_nsec = FUNC_15(VAR_6->i_ctime_nsec);
 VAR_4->i_mtime.tv_nsec = FUNC_15(VAR_6->i_mtime_nsec);

 FUNC_1(VAR_4)->i_advise = VAR_6->i_advise;
 FUNC_1(VAR_4)->i_flags = FUNC_15(VAR_6->i_flags);
 FUNC_8(VAR_4);
 FUNC_1(VAR_4)->i_gc_failures[VAR_1] =
    FUNC_14(VAR_6->i_gc_failures);

 FUNC_19(VAR_4, VAR_6);

 FUNC_5(VAR_4, 1);

 if (FUNC_10(VAR_4))
  VAR_7 = "<encrypted>";
 else
  VAR_7 = FUNC_2(VAR_5)->i_name;

 FUNC_6(FUNC_3(VAR_4), "recover_inode: ino = %x, name = %s, inline = %x",
      FUNC_13(VAR_5), VAR_7, VAR_6->i_inline);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dentry; } ;
struct TYPE_2__ {int mode; scalar_t__ size; } ;
struct ovl_copy_up_ctx {int link; struct path lowerpath; TYPE_1__ stat; TYPE_1__ pstat; int destname; int destdir; int metacopy; int workdir; struct dentry* dentry; struct dentry* parent; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct ovl_copy_up_ctx*) ;
 int FUNC_8 (struct dentry*,int) ;
 int FUNC_9 (struct dentry*) ;
 scalar_t__ FUNC_10 (struct dentry*,int) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct ovl_copy_up_ctx*) ;
 int FUNC_13 (struct ovl_copy_up_ctx*) ;
 int FUNC_14 (struct dentry*,int ,int) ;
 int FUNC_15 (struct dentry*,struct path*) ;
 int FUNC_16 (struct dentry*,struct path*) ;
 int FUNC_17 (struct dentry*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct path*,TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_21(struct dentry *VAR_7, struct dentry *VAR_8,
      int VAR_9)
{
 int VAR_10;
 FUNC_0(VAR_6);
 struct path VAR_11;
 struct ovl_copy_up_ctx VAR_12 = {
  .parent = VAR_7,
  .dentry = VAR_8,
  .workdir = FUNC_17(VAR_8),
 };

 if (FUNC_4(!VAR_12.workdir))
  return -VAR_1;

 FUNC_15(VAR_8, &VAR_12.lowerpath);
 VAR_10 = FUNC_20(&VAR_12.lowerpath, &VAR_12.stat,
     VAR_4, VAR_0);
 if (VAR_10)
  return VAR_10;

 VAR_12.metacopy = FUNC_14(VAR_8, VAR_12.stat.mode, VAR_9);

 if (VAR_7) {
  FUNC_16(VAR_7, &VAR_11);
  VAR_12.destdir = VAR_11.dentry;
  VAR_12.destname = VAR_8->d_name;

  VAR_10 = FUNC_20(&VAR_11, &VAR_12.pstat,
      VAR_3 | VAR_5,
      VAR_0);
  if (VAR_10)
   return VAR_10;
 }


 if (VAR_9 & VAR_2)
  VAR_12.stat.size = 0;

 if (FUNC_3(VAR_12.stat.mode)) {
  VAR_12.link = FUNC_19(VAR_12.lowerpath.dentry, &VAR_6);
  if (FUNC_1(VAR_12.link))
   return FUNC_2(VAR_12.link);
 }

 VAR_10 = FUNC_8(VAR_8, VAR_9);

 if (FUNC_18(VAR_10)) {
  if (VAR_10 > 0)
   VAR_10 = 0;
 } else {
  if (!FUNC_11(VAR_8))
   VAR_10 = FUNC_12(&VAR_12);
  if (!VAR_10 && VAR_7 && !FUNC_9(VAR_8))
   VAR_10 = FUNC_13(&VAR_12);
  if (!VAR_10 && FUNC_10(VAR_8, VAR_9))
   VAR_10 = FUNC_7(&VAR_12);
  FUNC_6(VAR_8);
 }
 FUNC_5(&VAR_6);

 return VAR_10;
}

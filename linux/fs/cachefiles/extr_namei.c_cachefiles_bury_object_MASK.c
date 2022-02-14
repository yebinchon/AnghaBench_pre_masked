
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {struct dentry* d_parent; } ;
struct cachefiles_object {int dummy; } ;
struct cachefiles_cache {struct dentry* graveyard; int mnt; int gravecounter; } ;
typedef enum fscache_why_object_killed { ____Placeholder_fscache_why_object_killed } fscache_why_object_killed ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,struct dentry*,struct dentry*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct cachefiles_cache*,char*,...) ;
 int FUNC_8 (struct cachefiles_cache*,struct dentry*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 scalar_t__ FUNC_13 (struct dentry*) ;
 scalar_t__ FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct dentry*) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 () ;
 struct dentry* FUNC_18 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_19 (char*,struct dentry*,int ) ;
 int FUNC_20 (struct path*,struct dentry*,struct path*,struct dentry*,int ) ;
 int FUNC_21 (struct path*,struct dentry*) ;
 int FUNC_22 (char*,char*,int,int) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (struct cachefiles_object*,struct dentry*,struct dentry*,int) ;
 int FUNC_25 (struct cachefiles_object*,struct dentry*,int) ;
 int FUNC_26 (struct dentry*,struct dentry*) ;
 int FUNC_27 (int ,struct dentry*,int ,struct dentry*,int *,int ) ;
 int FUNC_28 (int ,struct dentry*,int *) ;

__attribute__((used)) static int FUNC_29(struct cachefiles_cache *VAR_2,
      struct cachefiles_object *VAR_3,
      struct dentry *VAR_4,
      struct dentry *VAR_5,
      bool VAR_6,
      enum fscache_why_object_killed VAR_7)
{
 struct dentry *VAR_8, *VAR_9;
 struct path VAR_10, VAR_11;
 char VAR_12[8 + 8 + 1];
 int VAR_13;

 FUNC_4(",'%pd','%pd'", VAR_4, VAR_5);

 FUNC_3("remove %p from %p", VAR_5, VAR_4);


 if (!FUNC_12(VAR_5)) {
  FUNC_3("unlink stale object");

  VAR_10.mnt = VAR_2->mnt;
  VAR_10.dentry = VAR_4;
  VAR_13 = FUNC_21(&VAR_10, VAR_5);
  if (VAR_13 < 0) {
   FUNC_7(VAR_2, "Unlink security error");
  } else {
   FUNC_25(VAR_3, VAR_5, VAR_7);
   VAR_13 = FUNC_28(FUNC_11(VAR_4), VAR_5, ((void*)0));

   if (VAR_6)
    FUNC_8(VAR_2, VAR_5, VAR_7);
  }

  FUNC_16(FUNC_11(VAR_4));

  if (VAR_13 == -VAR_0)
   FUNC_7(VAR_2, "Unlink failed");

  FUNC_5(" = %d", VAR_13);
  return VAR_13;
 }


 FUNC_3("move stale object to graveyard");
 FUNC_16(FUNC_11(VAR_4));

try_again:

 FUNC_22(VAR_12, "%08x%08x",
  (uint32_t) FUNC_17(),
  (uint32_t) FUNC_6(&VAR_2->gravecounter));


 VAR_9 = FUNC_18(VAR_2->graveyard, VAR_4);


 if (VAR_5->d_parent != VAR_4 || FUNC_0(FUNC_11(VAR_5))) {


  FUNC_26(VAR_2->graveyard, VAR_4);
  FUNC_5(" = 0 [culled?]");
  return 0;
 }

 if (!FUNC_10(VAR_2->graveyard)) {
  FUNC_26(VAR_2->graveyard, VAR_4);
  FUNC_7(VAR_2, "Graveyard no longer a directory");
  return -VAR_0;
 }

 if (VAR_9 == VAR_5) {
  FUNC_26(VAR_2->graveyard, VAR_4);
  FUNC_7(VAR_2, "May not make directory loop");
  return -VAR_0;
 }

 if (FUNC_14(VAR_5)) {
  FUNC_26(VAR_2->graveyard, VAR_4);
  FUNC_7(VAR_2, "Mountpoint in cache");
  return -VAR_0;
 }

 VAR_8 = FUNC_19(VAR_12, VAR_2->graveyard, FUNC_23(VAR_12));
 if (FUNC_1(VAR_8)) {
  FUNC_26(VAR_2->graveyard, VAR_4);

  if (FUNC_2(VAR_8) == -VAR_1) {
   FUNC_5(" = -ENOMEM");
   return -VAR_1;
  }

  FUNC_7(VAR_2, "Lookup error %ld",
        FUNC_2(VAR_8));
  return -VAR_0;
 }

 if (FUNC_13(VAR_8)) {
  FUNC_26(VAR_2->graveyard, VAR_4);
  FUNC_15(VAR_8);
  VAR_8 = ((void*)0);
  FUNC_9();
  goto try_again;
 }

 if (FUNC_14(VAR_8)) {
  FUNC_26(VAR_2->graveyard, VAR_4);
  FUNC_15(VAR_8);
  FUNC_7(VAR_2, "Mountpoint in graveyard");
  return -VAR_0;
 }


 if (VAR_9 == VAR_8) {
  FUNC_26(VAR_2->graveyard, VAR_4);
  FUNC_15(VAR_8);
  FUNC_7(VAR_2, "May not make directory loop");
  return -VAR_0;
 }


 VAR_10.mnt = VAR_2->mnt;
 VAR_10.dentry = VAR_4;
 VAR_11.mnt = VAR_2->mnt;
 VAR_11.dentry = VAR_2->graveyard;
 VAR_13 = FUNC_20(&VAR_10, VAR_5, &VAR_11, VAR_8, 0);
 if (VAR_13 < 0) {
  FUNC_7(VAR_2, "Rename security error %d", VAR_13);
 } else {
  FUNC_24(VAR_3, VAR_5, VAR_8, VAR_7);
  VAR_13 = FUNC_27(FUNC_11(VAR_4), VAR_5,
     FUNC_11(VAR_2->graveyard), VAR_8, ((void*)0), 0);
  if (VAR_13 != 0 && VAR_13 != -VAR_1)
   FUNC_7(VAR_2,
         "Rename failed with error %d", VAR_13);

  if (VAR_6)
   FUNC_8(VAR_2, VAR_5, VAR_7);
 }

 FUNC_26(VAR_2->graveyard, VAR_4);
 FUNC_15(VAR_8);
 FUNC_5(" = 0");
 return 0;
}

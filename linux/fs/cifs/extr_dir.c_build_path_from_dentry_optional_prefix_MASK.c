
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int name; } ;
struct dentry {struct dentry* d_parent; int d_lock; TYPE_1__ d_name; int d_sb; } ;
struct cifs_tcon {int treeName; } ;
struct cifs_sb_info {int mnt_cifs_flags; char* prepath; } ;


 char FUNC_0 (struct cifs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 struct cifs_tcon* FUNC_4 (struct cifs_sb_info*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 unsigned int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,unsigned int) ;
 int VAR_6 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ,int) ;
 int FUNC_16 (int ,scalar_t__) ;

char *
FUNC_17(struct dentry *VAR_7, bool VAR_8)
{
 struct dentry *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 char *VAR_13;
 char VAR_14;
 struct cifs_sb_info *VAR_15 = FUNC_1(VAR_7->d_sb);
 struct cifs_tcon *VAR_16 = FUNC_4(VAR_15);
 unsigned VAR_17;

 VAR_14 = FUNC_0(VAR_15);
 if (VAR_8)
  VAR_11 = FUNC_16(VAR_16->treeName, VAR_4 + 1);
 else
  VAR_11 = 0;

 if (VAR_15->mnt_cifs_flags & VAR_1)
  VAR_12 = VAR_15->prepath ? FUNC_14(VAR_15->prepath) + 1 : 0;

cifs_bp_rename_retry:
 VAR_10 = VAR_11 + VAR_12;
 VAR_17 = FUNC_10(&VAR_6);
 FUNC_8();
 for (VAR_9 = VAR_7; !FUNC_2(VAR_9);) {
  VAR_10 += (1 + VAR_9->d_name.len);
  VAR_9 = VAR_9->d_parent;
  if (VAR_9 == ((void*)0)) {
   FUNC_3(VAR_5, "corrupt dentry\n");
   FUNC_9();
   return ((void*)0);
  }
 }
 FUNC_9();

 VAR_13 = FUNC_6(VAR_10+1, VAR_3);
 if (VAR_13 == ((void*)0))
  return VAR_13;
 VAR_13[VAR_10] = 0;
 FUNC_8();
 for (VAR_9 = VAR_7; !FUNC_2(VAR_9);) {
  FUNC_12(&VAR_9->d_lock);
  VAR_10 -= 1 + VAR_9->d_name.len;
  if (VAR_10 < 0) {
   FUNC_13(&VAR_9->d_lock);
   break;
  } else {
   VAR_13[VAR_10] = VAR_14;
   FUNC_15(VAR_13 + VAR_10 + 1, VAR_9->d_name.name,
    VAR_9->d_name.len);
   FUNC_3(VAR_2, "name: %s\n", VAR_13 + VAR_10);
  }
  FUNC_13(&VAR_9->d_lock);
  VAR_9 = VAR_9->d_parent;
  if (VAR_9 == ((void*)0)) {
   FUNC_3(VAR_5, "corrupt dentry\n");
   FUNC_9();
   FUNC_5(VAR_13);
   return ((void*)0);
  }
 }
 FUNC_9();
 if (VAR_10 != VAR_11 + VAR_12 || FUNC_11(&VAR_6, VAR_17)) {
  FUNC_3(VAR_2, "did not end path lookup where expected. namelen=%ddfsplen=%d\n",
    VAR_10, VAR_11);



  FUNC_5(VAR_13);
  goto cifs_bp_rename_retry;
 }







 if (VAR_12) {
  int VAR_18;

  FUNC_3(VAR_2, "using cifs_sb prepath <%s>\n", VAR_15->prepath);
  FUNC_7(VAR_13+VAR_11+1, VAR_15->prepath, VAR_12-1);
  VAR_13[VAR_11] = VAR_14;
  for (VAR_18 = 0; VAR_18 < VAR_12-1; VAR_18++)
   if (VAR_13[VAR_11+1+VAR_18] == '/')
    VAR_13[VAR_11+1+VAR_18] = FUNC_0(VAR_15);
 }

 if (VAR_11) {
  FUNC_15(VAR_13, VAR_16->treeName, VAR_11);
  if (VAR_15->mnt_cifs_flags & VAR_0) {
   int VAR_19;
   for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
    if (VAR_13[VAR_19] == '\\')
     VAR_13[VAR_19] = '/';
   }
  }
 }
 return VAR_13;
}

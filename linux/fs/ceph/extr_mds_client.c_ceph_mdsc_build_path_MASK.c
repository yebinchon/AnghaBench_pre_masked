
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; int name; } ;
struct dentry {int d_parent; int d_lock; TYPE_1__ d_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_4 ;
 struct dentry* FUNC_2 (int ) ;
 char* FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 struct inode* FUNC_7 (struct dentry*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int ,scalar_t__) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 unsigned int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,unsigned int) ;
 int VAR_5 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

char *FUNC_17(struct dentry *VAR_6, int *VAR_7, u64 *VAR_8,
      int VAR_9)
{
 struct dentry *VAR_10;
 char *VAR_11;
 int VAR_12;
 unsigned VAR_13;
 u64 VAR_14;

 if (!VAR_6)
  return FUNC_0(-VAR_2);

 VAR_11 = FUNC_3();
 if (!VAR_11)
  return FUNC_0(-VAR_3);
retry:
 VAR_12 = VAR_4 - 1;
 VAR_11[VAR_12] = '\0';

 VAR_13 = FUNC_13(&VAR_5);
 FUNC_11();
 VAR_10 = VAR_6;
 for (;;) {
  struct inode *VAR_15;

  FUNC_15(&VAR_10->d_lock);
  VAR_15 = FUNC_7(VAR_10);
  if (VAR_15 && FUNC_5(VAR_15) == VAR_1) {
   FUNC_8("build_path path+%d: %p SNAPDIR\n",
        VAR_12, VAR_10);
  } else if (VAR_9 && VAR_15 && VAR_6 != VAR_10 &&
      FUNC_5(VAR_15) == VAR_0) {
   FUNC_16(&VAR_10->d_lock);
   VAR_12++;
   break;
  } else {
   VAR_12 -= VAR_10->d_name.len;
   if (VAR_12 < 0) {
    FUNC_16(&VAR_10->d_lock);
    break;
   }
   FUNC_9(VAR_11 + VAR_12, VAR_10->d_name.name, VAR_10->d_name.len);
  }
  FUNC_16(&VAR_10->d_lock);
  VAR_10 = FUNC_2(VAR_10->d_parent);


  if (FUNC_1(VAR_10))
   break;


  if (--VAR_12 < 0)
   break;

  VAR_11[VAR_12] = '/';
 }
 VAR_14 = FUNC_4(FUNC_7(VAR_10));
 FUNC_12();
 if (VAR_12 < 0 || FUNC_14(&VAR_5, VAR_13)) {
  FUNC_10("build_path did not end path lookup where "
         "expected, pos is %d\n", VAR_12);




  goto retry;
 }

 *VAR_8 = VAR_14;
 *VAR_7 = VAR_4 - 1 - VAR_12;
 FUNC_8("build_path on %p %d built %llx '%.*s'\n",
      VAR_6, FUNC_6(VAR_6), VAR_14, *VAR_7, VAR_11 + VAR_12);
 return VAR_11 + VAR_12;
}

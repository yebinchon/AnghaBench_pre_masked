
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {unsigned int i_size; int i_sb; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct cramfs_inode {int namelen; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_2 ;
 struct inode* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct inode*) ;
 struct cramfs_inode* FUNC_3 (int ,int,scalar_t__) ;
 struct dentry* FUNC_4 (struct inode*,struct dentry*) ;
 struct inode* FUNC_5 (int ,struct cramfs_inode*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

__attribute__((used)) static struct dentry *FUNC_9(struct inode *VAR_4, struct dentry *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = 0;
 struct inode *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_7(&VAR_3);
 VAR_9 = FUNC_0(VAR_4->i_sb)->flags & VAR_0;
 while (VAR_7 < VAR_4->i_size) {
  struct cramfs_inode *VAR_10;
  char *VAR_11;
  int VAR_12, VAR_13;
  int VAR_14 = FUNC_2(VAR_4) + VAR_7;

  VAR_10 = FUNC_3(VAR_4->i_sb, VAR_14, sizeof(*VAR_10)+VAR_1);
  VAR_11 = (char *)(VAR_10+1);


  if (VAR_9 && (VAR_5->d_name.name[0] < VAR_11[0]))
   break;

  VAR_12 = VAR_10->namelen << 2;
  VAR_7 += sizeof(*VAR_10) + VAR_12;


  if (((VAR_5->d_name.len + 3) & ~3) != VAR_12)
   continue;

  for (;;) {
   if (!VAR_12) {
    VAR_8 = FUNC_1(-VAR_2);
    goto out;
   }
   if (VAR_11[VAR_12-1])
    break;
   VAR_12--;
  }
  if (VAR_12 != VAR_5->d_name.len)
   continue;
  VAR_13 = FUNC_6(VAR_5->d_name.name, VAR_11, VAR_12);
  if (VAR_13 > 0)
   continue;
  if (!VAR_13) {
   VAR_8 = FUNC_5(VAR_4->i_sb, VAR_10, VAR_14);
   break;
  }

  if (VAR_9)
   break;
 }
out:
 FUNC_8(&VAR_3);
 return FUNC_4(VAR_8, VAR_5);
}

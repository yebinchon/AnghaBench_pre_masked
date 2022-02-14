
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {TYPE_1__* dentry; } ;
struct kstat {int result_mask; int attributes_mask; int attributes; } ;
struct inode {int i_flags; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct inode*,struct kstat*) ;
 int FUNC_1 (int ,char*,TYPE_1__*,int) ;
 int FUNC_2 (struct inode*,int ) ;

int FUNC_3(const struct path *VAR_7, struct kstat *VAR_8,
       u32 VAR_9, unsigned int VAR_10)
{
 int VAR_11;
 struct inode *VAR_12 = VAR_7->dentry->d_inode;

 FUNC_1(VAR_0,
       "orangefs_getattr: called on %pd mask %u\n",
       VAR_7->dentry, VAR_9);

 VAR_11 = FUNC_2(VAR_12,
     VAR_9 & VAR_4 ? VAR_1 : 0);
 if (VAR_11 == 0) {
  FUNC_0(VAR_12, VAR_8);


  if (!(VAR_9 & VAR_4))
   VAR_8->result_mask &= ~VAR_4;

  VAR_8->attributes_mask = VAR_3 |
      VAR_2;
  if (VAR_12->i_flags & VAR_6)
   VAR_8->attributes |= VAR_3;
  if (VAR_12->i_flags & VAR_5)
   VAR_8->attributes |= VAR_2;
 }
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int osb_lock; struct inode** local_system_inodes; int max_slots; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct inode**) ;
 struct inode** FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct inode **FUNC_8(struct ocfs2_super *VAR_6,
          int VAR_7,
          u32 VAR_8)
{
 int VAR_9;
 struct inode **VAR_10, **VAR_11 = ((void*)0);

 FUNC_0(VAR_8 == VAR_4);
 FUNC_0(VAR_7 < VAR_3 ||
        VAR_7 > VAR_5);

 FUNC_5(&VAR_6->osb_lock);
 VAR_10 = VAR_6->local_system_inodes;
 FUNC_6(&VAR_6->osb_lock);

 if (FUNC_7(!VAR_10)) {
  VAR_10 =
   FUNC_3(FUNC_1(sizeof(struct inode *),
         VAR_2,
         VAR_6->max_slots),
    VAR_1);
  if (!VAR_10) {
   FUNC_4(-VAR_0);





   return ((void*)0);
  }

  FUNC_5(&VAR_6->osb_lock);
  if (VAR_6->local_system_inodes) {

   VAR_11 = VAR_10;
   VAR_10 = VAR_6->local_system_inodes;
  } else
   VAR_6->local_system_inodes = VAR_10;
  FUNC_6(&VAR_6->osb_lock);
  FUNC_2(VAR_11);
 }

 VAR_9 = (VAR_8 * VAR_2) +
  (VAR_7 - VAR_3);

 return &VAR_10[VAR_9];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orangefs_object_kref {scalar_t__ fs_id; int khandle; } ;
struct TYPE_2__ {scalar_t__ fs_id; int khandle; } ;
struct orangefs_inode_s {TYPE_1__ refn; } ;
struct inode {int dummy; } ;


 struct orangefs_inode_s* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, void *VAR_1)
{
 struct orangefs_object_kref *VAR_2 = (struct orangefs_object_kref *) VAR_1;
 struct orangefs_inode_s *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(VAR_0);

 return (!FUNC_1(&(VAR_3->refn.khandle),
    &(VAR_2->khandle)) &&
   VAR_3->refn.fs_id == VAR_2->fs_id);
}

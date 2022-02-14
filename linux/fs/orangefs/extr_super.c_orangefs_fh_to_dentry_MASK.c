
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct orangefs_object_kref {scalar_t__ fs_id; int khandle; } ;
struct fid {scalar_t__* raw; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__*,int) ;
 struct dentry* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,scalar_t__) ;
 int FUNC_3 (struct super_block*,struct orangefs_object_kref*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct super_block *VAR_1,
      struct fid *VAR_2,
      int VAR_3,
      int VAR_4)
{
 struct orangefs_object_kref VAR_5;

 if (VAR_3 < 5 || VAR_4 > 2)
  return ((void*)0);

 FUNC_0(&(VAR_5.khandle), VAR_2->raw, 16);
 VAR_5.fs_id = (u32) VAR_2->raw[4];
 FUNC_2(VAR_0,
       "fh_to_dentry: handle %pU, fs_id %d\n",
       &VAR_5.khandle,
       VAR_5.fs_id);

 return FUNC_1(FUNC_3(VAR_1, &VAR_5));
}

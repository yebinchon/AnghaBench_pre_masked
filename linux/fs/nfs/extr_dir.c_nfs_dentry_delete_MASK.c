
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_flags; TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dentry const*) ;
 scalar_t__ FUNC_2 (struct dentry const*) ;
 int FUNC_3 (int ,char*,struct dentry const*,int) ;

__attribute__((used)) static int FUNC_4(const struct dentry *VAR_3)
{
 FUNC_3(VAR_2, "NFS: dentry_delete(%pd2, %x)\n",
  VAR_3, VAR_3->d_flags);


 if (FUNC_2(VAR_3) && FUNC_0(FUNC_1(VAR_3)))
  return 1;

 if (VAR_3->d_flags & VAR_0) {

  return 1;
 }
 if (!(VAR_3->d_sb->s_flags & VAR_1)) {


  return 1;
 }
 return 0;

}

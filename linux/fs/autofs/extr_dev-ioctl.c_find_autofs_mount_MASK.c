
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct path {TYPE_2__* dentry; TYPE_3__* mnt; } ;
struct TYPE_6__ {TYPE_2__* mnt_root; } ;
struct TYPE_5__ {TYPE_1__* d_sb; } ;
struct TYPE_4__ {scalar_t__ s_magic; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct path*) ;
 int FUNC_1 (int ,char const*,struct path*,int ) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (struct path*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3,
        struct path *VAR_4,
        int VAR_5(const struct path *VAR_6, void *VAR_7),
        void *VAR_8)
{
 struct path VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_0, VAR_3, &VAR_9, 0);
 if (VAR_10)
  return VAR_10;
 VAR_10 = -VAR_2;
 while (VAR_9.dentry == VAR_9.mnt->mnt_root) {
  if (VAR_9.dentry->d_sb->s_magic == VAR_1) {
   if (VAR_5(&VAR_9, VAR_8)) {
    FUNC_2(&VAR_9);
    *VAR_4 = VAR_9;
    VAR_10 = 0;
    break;
   }
  }
  if (!FUNC_0(&VAR_9))
   break;
 }
 FUNC_3(&VAR_9);
 return VAR_10;
}

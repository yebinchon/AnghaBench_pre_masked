
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qstr {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_mode; } ;
struct fsnotify_iter_info {int dummy; } ;
struct fsnotify_group {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int) ;

__attribute__((used)) static int
FUNC_4(struct fsnotify_group *VAR_1,
    struct inode *VAR_2,
    u32 VAR_3, const void *VAR_4, int VAR_5,
    const struct qstr *VAR_6, u32 VAR_7,
    struct fsnotify_iter_info *VAR_8)
{
 FUNC_3(VAR_2, VAR_3);


 if (!FUNC_0(VAR_2->i_mode)) {
  FUNC_1(1);
  return 0;
 }


 if (VAR_3 & VAR_0) {
  if (VAR_2->i_nlink)
   return 0;
 }

 FUNC_2(VAR_2);
 return 0;
}

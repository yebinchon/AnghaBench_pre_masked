
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct fsnotify_group {int mark_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsnotify_group*,struct inode*,int ) ;
 int FUNC_1 (struct fsnotify_group*,struct inode*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fsnotify_group *VAR_1, struct inode *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;

 FUNC_2(&VAR_1->mark_mutex);

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_4 == -VAR_0)
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_1->mark_mutex);

 return VAR_4;
}

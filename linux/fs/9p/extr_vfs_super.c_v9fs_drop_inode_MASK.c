
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {scalar_t__ cache; } ;
struct inode {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct inode*) ;
 struct v9fs_session_info* FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2)
{
 struct v9fs_session_info *VAR_3;
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3->cache == VAR_1 || VAR_3->cache == VAR_0)
  return FUNC_0(VAR_2);





 return 1;
}

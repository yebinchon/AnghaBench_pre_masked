
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qnx6_inode_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int ,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(void)
{
 VAR_5 = FUNC_0("qnx6_inode_cache",
          sizeof(struct qnx6_inode_info),
          0, (VAR_3|
      VAR_2|VAR_1),
          VAR_4);
 if (!VAR_5)
  return -VAR_0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct inode*,int ,struct buffer_head*,int) ;
 int FUNC_2 (struct inode*,int ,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, sector_t VAR_2,
      struct buffer_head *VAR_3, int VAR_4)
{
 if (FUNC_0(VAR_1) == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}

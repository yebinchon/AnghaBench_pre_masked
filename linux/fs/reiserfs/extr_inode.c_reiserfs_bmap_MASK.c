
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,struct buffer_head*,int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, sector_t VAR_2,
    struct buffer_head *VAR_3, int VAR_4)
{
 if (!FUNC_1(VAR_1, VAR_2))
  return -VAR_0;

 FUNC_2(VAR_1->i_sb);

 FUNC_0(VAR_1, VAR_2, VAR_3, 0);
 FUNC_3(VAR_1->i_sb);
 return 0;
}

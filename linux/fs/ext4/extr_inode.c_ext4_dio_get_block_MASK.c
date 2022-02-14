
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ,struct buffer_head*,int ) ;
 int FUNC_2 (struct inode*,int ,struct buffer_head*,int ) ;
 int FUNC_3 () ;

int FUNC_4(struct inode *VAR_1, sector_t VAR_2,
         struct buffer_head *VAR_3, int VAR_4)
{

 FUNC_0(FUNC_3());

 if (!VAR_4)
  return FUNC_1(VAR_1, VAR_2, VAR_3, 0);
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0);
}

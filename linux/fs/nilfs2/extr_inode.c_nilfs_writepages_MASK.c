
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; int range_end; int range_start; } ;
struct inode {int i_sb; } ;
struct address_space {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct address_space*,int) ;
 int FUNC_1 (int ,struct inode*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct address_space *VAR_2,
       struct writeback_control *VAR_3)
{
 struct inode *VAR_4 = VAR_2->host;
 int VAR_5 = 0;

 if (FUNC_2(VAR_4->i_sb)) {
  FUNC_0(VAR_2, 0);
  return -VAR_0;
 }

 if (VAR_3->sync_mode == VAR_1)
  VAR_5 = FUNC_1(VAR_4->i_sb, VAR_4,
          VAR_3->range_start,
          VAR_3->range_end);
 return VAR_5;
}

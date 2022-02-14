
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct extent_io_tree {struct inode* private_data; } ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct extent_io_tree *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = VAR_0->private_data;

 FUNC_0(FUNC_1(VAR_2->i_sb), VAR_1,
 "locking error: extent tree was modified by another thread while locked");
}

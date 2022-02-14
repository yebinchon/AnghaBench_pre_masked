
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_data; int * i_mapping; struct block_device* i_bdev; int i_sb; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_1)
{
 struct block_device *VAR_2 = ((void*)0);

 FUNC_2(&VAR_0);
 if (!FUNC_1(VAR_1->i_sb))
  VAR_2 = VAR_1->i_bdev;
 VAR_1->i_bdev = ((void*)0);
 VAR_1->i_mapping = &VAR_1->i_data;
 FUNC_3(&VAR_0);

 if (VAR_2)
  FUNC_0(VAR_2);
}

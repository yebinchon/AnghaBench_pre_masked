
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; struct block_device* i_bdev; int i_rdev; } ;
struct block_device {TYPE_1__* bd_inode; } ;
struct TYPE_2__ {int i_mapping; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct block_device* FUNC_1 (int ) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct block_device *FUNC_6(struct inode *VAR_1)
{
 struct block_device *VAR_2;

 FUNC_4(&VAR_0);
 VAR_2 = VAR_1->i_bdev;
 if (VAR_2 && !FUNC_3(VAR_2->bd_inode)) {
  FUNC_2(VAR_2);
  FUNC_5(&VAR_0);
  return VAR_2;
 }
 FUNC_5(&VAR_0);







 if (VAR_2)
  FUNC_0(VAR_1);

 VAR_2 = FUNC_1(VAR_1->i_rdev);
 if (VAR_2) {
  FUNC_4(&VAR_0);
  if (!VAR_1->i_bdev) {






   FUNC_2(VAR_2);
   VAR_1->i_bdev = VAR_2;
   VAR_1->i_mapping = VAR_2->bd_inode->i_mapping;
  }
  FUNC_5(&VAR_0);
 }
 return VAR_2;
}

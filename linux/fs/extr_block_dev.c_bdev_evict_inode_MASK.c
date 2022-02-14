
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; } ;
struct block_device {int * bd_bdi; int bd_list; } ;
struct TYPE_2__ {struct block_device bdev; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_2)
{
 struct block_device *VAR_3 = &FUNC_0(VAR_2)->bdev;
 FUNC_8(&VAR_2->i_data);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2);
 FUNC_6(&VAR_0);
 FUNC_5(&VAR_3->bd_list);
 FUNC_7(&VAR_0);

 FUNC_3(VAR_2);
 if (VAR_3->bd_bdi != &VAR_1) {
  FUNC_1(VAR_3->bd_bdi);
  VAR_3->bd_bdi = &VAR_1;
 }
}

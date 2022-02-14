
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_allocation_request {int len; int inode; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_3__ {int key; int * bh; int * p; } ;
typedef TYPE_1__ Indirect ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *,scalar_t__,int,int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int,char*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(handle_t *VAR_1,
         struct ext4_allocation_request *VAR_2,
         Indirect *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 ext4_fsblk_t VAR_7;






 if (VAR_3->bh) {
  FUNC_0(VAR_3->bh, "get_write_access");
  VAR_6 = FUNC_4(VAR_1, VAR_3->bh);
  if (VAR_6)
   goto err_out;
 }


 *VAR_3->p = VAR_3->key;





 if (VAR_4 == 0 && VAR_2->len > 1) {
  VAR_7 = FUNC_7(VAR_3->key) + 1;
  for (VAR_5 = 1; VAR_5 < VAR_2->len; VAR_5++)
   *(VAR_3->p + VAR_5) = FUNC_1(VAR_7++);
 }



 if (VAR_3->bh) {
  FUNC_6(5, "splicing indirect only\n");
  FUNC_0(VAR_3->bh, "call ext4_handle_dirty_metadata");
  VAR_6 = FUNC_3(VAR_1, VAR_2->inode, VAR_3->bh);
  if (VAR_6)
   goto err_out;
 } else {



  FUNC_5(VAR_1, VAR_2->inode);
  FUNC_6(5, "splicing direct\n");
 }
 return VAR_6;

err_out:
 for (VAR_5 = 1; VAR_5 <= VAR_4; VAR_5++) {





  FUNC_2(VAR_1, VAR_2->inode, VAR_3[VAR_5].bh, 0, 1,
     VAR_0);
 }
 FUNC_2(VAR_1, VAR_2->inode, ((void*)0), FUNC_7(VAR_3[VAR_4].key),
    VAR_2->len, 0);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int dummy; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct block_device {char* bd_queue; TYPE_1__* bd_disk; } ;
typedef int ssize_t ;
typedef int get_block_t ;
typedef int dio_submit_t ;
typedef int dio_iodone_t ;
struct TYPE_2__ {char part_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (struct kiocb*,struct inode*,struct block_device*,struct iov_iter*,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;

ssize_t FUNC_2(struct kiocb *VAR_1, struct inode *VAR_2,
        struct block_device *VAR_3, struct iov_iter *VAR_4,
        get_block_t VAR_5,
        dio_iodone_t VAR_6, dio_submit_t VAR_7,
        int VAR_8)
{
 FUNC_1(&VAR_3->bd_disk->part_tbl);
 FUNC_1(VAR_3->bd_queue);
 FUNC_1((char *)VAR_3->bd_queue + VAR_0);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8);
}

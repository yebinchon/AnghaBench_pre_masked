
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kiocb {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_7__ {int size; int offset; TYPE_1__* inode; } ;
typedef TYPE_2__ ext4_io_end_t ;
struct TYPE_6__ {int i_ino; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,TYPE_2__*,int ,struct kiocb*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kiocb *VAR_0, loff_t VAR_1,
       ssize_t VAR_2, void *VAR_3)
{
        ext4_io_end_t *VAR_4 = VAR_3;


 if (!VAR_4)
  return 0;

 FUNC_2("ext4_end_io_dio(): io_end 0x%p "
    "for inode %lu, iocb 0x%p, offset %llu, size %zd\n",
    VAR_4, VAR_4->inode->i_ino, VAR_0, VAR_1, VAR_2);





 if (VAR_2 <= 0) {
  FUNC_0(VAR_4);
  VAR_2 = 0;
 }
 VAR_4->offset = VAR_1;
 VAR_4->size = VAR_2;
 FUNC_1(VAR_4);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; int wait; } ;
struct z_erofs_unzip_io {int head; TYPE_1__ u; int pending_bios; } ;
struct z_erofs_unzip_io_sb {struct super_block* sb; struct z_erofs_unzip_io io; } ;
struct super_block {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct z_erofs_unzip_io_sb* FUNC_4 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static struct z_erofs_unzip_io *FUNC_5(struct super_block *VAR_4,
           struct z_erofs_unzip_io *VAR_5,
           bool VAR_6)
{
 struct z_erofs_unzip_io_sb *VAR_7;

 if (VAR_6) {

  FUNC_0(!VAR_5);

  FUNC_3(&VAR_5->u.wait);
  FUNC_2(&VAR_5->pending_bios, 0);
  goto out;
 }

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_0 | VAR_2);
 FUNC_0(!VAR_7);


 VAR_5 = &VAR_7->io;
 VAR_7->sb = VAR_4;
 FUNC_1(&VAR_5->u.work, VAR_3);
out:
 VAR_5->head = VAR_1;
 return VAR_5;
}

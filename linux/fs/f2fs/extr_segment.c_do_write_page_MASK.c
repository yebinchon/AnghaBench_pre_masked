
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct f2fs_summary {int dummy; } ;
struct f2fs_io_info {TYPE_1__* sbi; int new_blkaddr; int old_blkaddr; scalar_t__ retry; int page; } ;
struct TYPE_5__ {int io_order_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct f2fs_io_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *,struct f2fs_summary*,int,struct f2fs_io_info*,int) ;
 int FUNC_5 (struct f2fs_io_info*) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_io_info*) ;

__attribute__((used)) static void FUNC_10(struct f2fs_summary *VAR_3, struct f2fs_io_info *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_4);
 bool VAR_6 = (FUNC_7(VAR_4->sbi, VAR_1) && VAR_5 == VAR_0);

 if (VAR_6)
  FUNC_3(&VAR_4->sbi->io_order_lock);
reallocate:
 FUNC_4(VAR_4->sbi, VAR_4->page, VAR_4->old_blkaddr,
   &VAR_4->new_blkaddr, VAR_3, VAR_5, VAR_4, 1);
 if (FUNC_0(VAR_4->sbi, VAR_4->old_blkaddr) != VAR_2)
  FUNC_6(FUNC_1(VAR_4->sbi),
     VAR_4->old_blkaddr, VAR_4->old_blkaddr);


 FUNC_5(VAR_4);
 if (VAR_4->retry) {
  VAR_4->old_blkaddr = VAR_4->new_blkaddr;
  goto reallocate;
 }

 FUNC_9(VAR_4);

 if (VAR_6)
  FUNC_8(&VAR_4->sbi->io_order_lock);
}

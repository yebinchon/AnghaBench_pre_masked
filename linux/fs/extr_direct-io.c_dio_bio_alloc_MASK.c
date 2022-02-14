
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dio_submit {int cur_page_fs_offset; int logical_offset_in_bio; struct bio* bio; } ;
struct dio {TYPE_1__* iocb; scalar_t__ is_async; int op_flags; int op; } ;
struct block_device {int dummy; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {int bi_write_hint; int bi_end_io; TYPE_2__ bi_iter; } ;
typedef int sector_t ;
struct TYPE_3__ {int ki_hint; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ,int) ;
 int FUNC_1 (struct bio*,struct block_device*) ;
 int FUNC_2 (struct bio*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_3(struct dio *VAR_3, struct dio_submit *VAR_4,
       struct block_device *VAR_5,
       sector_t VAR_6, int VAR_7)
{
 struct bio *VAR_8;





 VAR_8 = FUNC_0(VAR_0, VAR_7);

 FUNC_1(VAR_8, VAR_5);
 VAR_8->bi_iter.bi_sector = VAR_6;
 FUNC_2(VAR_8, VAR_3->op, VAR_3->op_flags);
 if (VAR_3->is_async)
  VAR_8->bi_end_io = VAR_1;
 else
  VAR_8->bi_end_io = VAR_2;

 VAR_8->bi_write_hint = VAR_3->iocb->ki_hint;

 VAR_4->bio = VAR_8;
 VAR_4->logical_offset_in_bio = VAR_4->cur_page_fs_offset;
}

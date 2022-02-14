
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parallel_io {int dummy; } ;
struct block_device {int dummy; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {struct parallel_io* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
typedef int sector_t ;
typedef int bio_end_io_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bio* FUNC_0 (int ,int) ;
 int FUNC_1 (struct bio*,struct block_device*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static struct bio *
FUNC_3(int VAR_4, struct block_device *VAR_5, sector_t VAR_6,
  bio_end_io_t VAR_7, struct parallel_io *VAR_8)
{
 struct bio *VAR_9;

 VAR_4 = FUNC_2(VAR_4, VAR_0);
 VAR_9 = FUNC_0(VAR_1, VAR_4);
 if (!VAR_9 && (VAR_3->flags & VAR_2)) {
  while (!VAR_9 && (VAR_4 /= 2))
   VAR_9 = FUNC_0(VAR_1, VAR_4);
 }

 if (VAR_9) {
  VAR_9->bi_iter.bi_sector = VAR_6;
  FUNC_1(VAR_9, VAR_5);
  VAR_9->bi_end_io = VAR_7;
  VAR_9->bi_private = VAR_8;
 }
 return VAR_9;
}

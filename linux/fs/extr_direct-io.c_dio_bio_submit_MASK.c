
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_submit {int logical_offset_in_bio; scalar_t__ boundary; struct bio* bio; int (* submit_io ) (struct bio*,int ,int ) ;} ;
struct dio {scalar_t__ op; int bio_cookie; int inode; int bio_disk; scalar_t__ should_dirty; scalar_t__ is_async; int bio_lock; int refcount; } ;
struct bio {int bi_disk; struct dio* bi_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct bio*,int ,int ) ;
 int FUNC_4 (struct bio*) ;

__attribute__((used)) static inline void FUNC_5(struct dio *VAR_2, struct dio_submit *VAR_3)
{
 struct bio *VAR_4 = VAR_3->bio;
 unsigned long VAR_5;

 VAR_4->bi_private = VAR_2;

 FUNC_1(&VAR_2->bio_lock, VAR_5);
 VAR_2->refcount++;
 FUNC_2(&VAR_2->bio_lock, VAR_5);

 if (VAR_2->is_async && VAR_2->op == VAR_1 && VAR_2->should_dirty)
  FUNC_0(VAR_4);

 VAR_2->bio_disk = VAR_4->bi_disk;

 if (VAR_3->submit_io) {
  VAR_3->submit_io(VAR_4, VAR_2->inode, VAR_3->logical_offset_in_bio);
  VAR_2->bio_cookie = VAR_0;
 } else
  VAR_2->bio_cookie = FUNC_4(VAR_4);

 VAR_3->bio = ((void*)0);
 VAR_3->boundary = 0;
 VAR_3->logical_offset_in_bio = 0;
}

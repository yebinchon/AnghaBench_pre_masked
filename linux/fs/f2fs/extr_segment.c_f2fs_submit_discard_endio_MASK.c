
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discard_cmd {scalar_t__ state; int lock; int wait; int bio_ref; int error; } ;
struct bio {int bi_status; scalar_t__ bi_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_2)
{
 struct discard_cmd *VAR_3 = (struct discard_cmd *)VAR_2->bi_private;
 unsigned long VAR_4;

 VAR_3->error = FUNC_1(VAR_2->bi_status);

 FUNC_3(&VAR_3->lock, VAR_4);
 VAR_3->bio_ref--;
 if (!VAR_3->bio_ref && VAR_3->state == VAR_1) {
  VAR_3->state = VAR_0;
  FUNC_2(&VAR_3->wait);
 }
 FUNC_4(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio {scalar_t__ op; scalar_t__ is_async; int io_error; int should_dirty; } ;
struct bio {scalar_t__ bi_status; int bi_opf; } ;
typedef scalar_t__ blk_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int) ;

__attribute__((used)) static blk_status_t FUNC_3(struct dio *VAR_5, struct bio *VAR_6)
{
 blk_status_t VAR_7 = VAR_6->bi_status;
 bool VAR_8 = VAR_5->op == VAR_4 && VAR_5->should_dirty;

 if (VAR_7) {
  if (VAR_7 == VAR_0 && (VAR_6->bi_opf & VAR_3))
   VAR_5->io_error = -VAR_1;
  else
   VAR_5->io_error = -VAR_2;
 }

 if (VAR_5->is_async && VAR_8) {
  FUNC_0(VAR_6);
 } else {
  FUNC_2(VAR_6, VAR_8);
  FUNC_1(VAR_6);
 }
 return VAR_7;
}

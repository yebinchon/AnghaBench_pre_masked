
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_status; struct bio* bi_next; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct bio*) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0, blk_status_t VAR_1)
{
 struct bio *VAR_2;

 while (VAR_0) {
  VAR_2 = VAR_0->bi_next;
  VAR_0->bi_next = ((void*)0);
  VAR_0->bi_status = VAR_1;
  FUNC_0(VAR_0);
  VAR_0 = VAR_2;
 }
}

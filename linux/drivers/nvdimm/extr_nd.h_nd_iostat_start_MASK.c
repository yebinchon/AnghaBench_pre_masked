
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int part0; int queue; } ;
struct bio {struct gendisk* bi_disk; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 unsigned long VAR_0 ;

__attribute__((used)) static inline bool FUNC_4(struct bio *VAR_1, unsigned long *VAR_2)
{
 struct gendisk *VAR_3 = VAR_1->bi_disk;

 if (!FUNC_2(VAR_3->queue))
  return 0;

 *VAR_2 = VAR_0;
 FUNC_3(VAR_3->queue, FUNC_0(VAR_1), FUNC_1(VAR_1),
         &VAR_3->part0);
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int part0; int queue; } ;
struct bio {struct gendisk* bi_disk; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,int ,int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct bio *VAR_0, unsigned long VAR_1)
{
 struct gendisk *VAR_2 = VAR_0->bi_disk;

 FUNC_1(VAR_2->queue, FUNC_0(VAR_0), &VAR_2->part0, VAR_1);
}

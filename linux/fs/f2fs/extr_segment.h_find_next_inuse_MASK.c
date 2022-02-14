
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_segmap_info {int segmap_lock; int free_segmap; } ;


 unsigned int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct free_segmap_info *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 FUNC_1(&VAR_0->segmap_lock);
 VAR_3 = FUNC_0(VAR_0->free_segmap, VAR_1, VAR_2);
 FUNC_2(&VAR_0->segmap_lock);
 return VAR_3;
}

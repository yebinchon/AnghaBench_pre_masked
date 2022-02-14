
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb2_mem_region {int lock_count; int id; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline struct omapfb2_mem_region *
FUNC_2(struct omapfb2_mem_region *VAR_0)
{
 FUNC_1(&VAR_0->lock, VAR_0->id);
 FUNC_0(&VAR_0->lock_count);
 return VAR_0;
}

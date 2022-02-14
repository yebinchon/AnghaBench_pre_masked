
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_master_resource {int lock; } ;


 int FUNC_0 (struct vme_master_resource*,int*,unsigned long long*,unsigned long long*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vme_master_resource *VAR_0, int *VAR_1,
  unsigned long long *VAR_2, unsigned long long *VAR_3,
  u32 *VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_0->lock);

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5, VAR_6);

 FUNC_2(&VAR_0->lock);

 return VAR_7;
}

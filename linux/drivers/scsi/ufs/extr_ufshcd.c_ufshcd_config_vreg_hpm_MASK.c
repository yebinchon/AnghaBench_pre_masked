
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_vreg {int max_uA; } ;
struct ufs_hba {int dev; } ;


 int FUNC_0 (int ,struct ufs_vreg*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct ufs_hba *VAR_0,
      struct ufs_vreg *VAR_1)
{
 if (!VAR_1)
  return 0;

 return FUNC_0(VAR_0->dev, VAR_1, VAR_1->max_uA);
}

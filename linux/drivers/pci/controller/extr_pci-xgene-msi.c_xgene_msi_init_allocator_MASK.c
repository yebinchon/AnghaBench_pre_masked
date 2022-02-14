
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_msi_group {int dummy; } ;
struct xgene_msi {int msi_groups; int bitmap_lock; int bitmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct xgene_msi *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3) * sizeof(long);

 VAR_4->bitmap = FUNC_2(VAR_5, VAR_1);
 if (!VAR_4->bitmap)
  return -VAR_0;

 FUNC_3(&VAR_4->bitmap_lock);

 VAR_4->msi_groups = FUNC_1(VAR_2,
     sizeof(struct xgene_msi_group),
     VAR_1);
 if (!VAR_4->msi_groups)
  return -VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova {int dummy; } ;
struct imgu_device {int iova_domain; int mmu; } ;
struct imgu_css_map {int daddr; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct iova*) ;
 struct iova* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,struct iova*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iova*) ;

void FUNC_8(struct imgu_device *VAR_0, struct imgu_css_map *VAR_1)
{
 struct iova *VAR_2;

 VAR_2 = FUNC_2(&VAR_0->iova_domain,
    FUNC_5(&VAR_0->iova_domain, VAR_1->daddr));
 if (FUNC_0(!VAR_2))
  return;

 FUNC_3(VAR_0->mmu, FUNC_4(&VAR_0->iova_domain, VAR_2),
         FUNC_7(VAR_2) << FUNC_6(&VAR_0->iova_domain));

 FUNC_1(&VAR_0->iova_domain, VAR_2);
}

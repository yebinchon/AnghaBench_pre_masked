
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_vde {int iova; TYPE_2__* domain; } ;
struct sg_table {int nents; int sgl; } ;
struct iova {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {unsigned long aperture_end; } ;
struct TYPE_4__ {TYPE_1__ geometry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct iova*) ;
 struct iova* FUNC_1 (int *,size_t,unsigned long,int) ;
 size_t FUNC_2 (TYPE_2__*,int ,int ,int ,int) ;
 size_t FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,struct iova*) ;
 unsigned long FUNC_5 (int *) ;

int FUNC_6(struct tegra_vde *VAR_4,
   struct sg_table *VAR_5,
   struct iova **VAR_6,
   size_t VAR_7)
{
 struct iova *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 dma_addr_t VAR_11;

 VAR_10 = VAR_4->domain->geometry.aperture_end;
 VAR_7 = FUNC_3(&VAR_4->iova, VAR_7);
 VAR_9 = FUNC_5(&VAR_4->iova);

 VAR_8 = FUNC_1(&VAR_4->iova, VAR_7 >> VAR_9, VAR_10 >> VAR_9, 1);
 if (!VAR_8)
  return -VAR_0;

 VAR_11 = FUNC_4(&VAR_4->iova, VAR_8);

 VAR_7 = FUNC_2(VAR_4->domain, VAR_11, VAR_5->sgl, VAR_5->nents,
       VAR_2 | VAR_3);
 if (!VAR_7) {
  FUNC_0(&VAR_4->iova, VAR_8);
  return -VAR_1;
 }

 *VAR_6 = VAR_8;

 return 0;
}

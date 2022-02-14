
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct genwqe_file {struct genwqe_dev* cd; } ;
struct genwqe_dev {int dummy; } ;
struct dma_mapping {int dummy; } ;
struct ddcb_requ {TYPE_1__* sgls; struct dma_mapping* dma_mappings; } ;
struct TYPE_2__ {int * sgl; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct genwqe_file*,struct dma_mapping*) ;
 scalar_t__ FUNC_1 (struct dma_mapping*) ;
 int FUNC_2 (struct genwqe_dev*,TYPE_1__*) ;
 int FUNC_3 (struct genwqe_dev*,struct dma_mapping*) ;

__attribute__((used)) static int FUNC_4(struct genwqe_file *VAR_1, struct ddcb_requ *VAR_2)
{
 unsigned int VAR_3;
 struct dma_mapping *VAR_4;
 struct genwqe_dev *VAR_5 = VAR_1->cd;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_2->dma_mappings[VAR_3];

  if (FUNC_1(VAR_4)) {
   FUNC_0(VAR_1, VAR_4);
   FUNC_3(VAR_5, VAR_4);
  }
  if (VAR_2->sgls[VAR_3].sgl != ((void*)0))
   FUNC_2(VAR_5, &VAR_2->sgls[VAR_3]);
 }
 return 0;
}

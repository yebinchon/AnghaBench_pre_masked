
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_mem {int addr; scalar_t__ size; } ;
struct genwqe_file {struct genwqe_dev* cd; } ;
struct genwqe_dev {int dummy; } ;
struct dma_mapping {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct genwqe_file*,struct dma_mapping*) ;
 struct dma_mapping* FUNC_1 (struct genwqe_file*,unsigned long,unsigned long,int *) ;
 int FUNC_2 (struct genwqe_dev*,struct dma_mapping*) ;
 int FUNC_3 (struct dma_mapping*) ;
 unsigned long FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct genwqe_file *VAR_4, struct genwqe_mem *VAR_5)
{
 struct genwqe_dev *VAR_6 = VAR_4->cd;
 struct dma_mapping *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 if (VAR_5->addr == 0x0)
  return -VAR_0;

 VAR_8 = (VAR_5->addr & VAR_2);
 VAR_9 = FUNC_4(VAR_5->size + (VAR_5->addr & ~VAR_2), VAR_3);

 VAR_7 = FUNC_1(VAR_4, VAR_8, VAR_9, ((void*)0));
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_0(VAR_4, VAR_7);
 FUNC_2(VAR_6, VAR_7);
 FUNC_3(VAR_7);
 return 0;
}

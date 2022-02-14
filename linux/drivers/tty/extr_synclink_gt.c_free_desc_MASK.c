
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int * tbufs; int * rbufs; int * bufs; int bufs_dma_addr; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_1)
{
 if (VAR_1->bufs != ((void*)0)) {
  FUNC_0(VAR_1->pdev, VAR_0, VAR_1->bufs, VAR_1->bufs_dma_addr);
  VAR_1->bufs = ((void*)0);
  VAR_1->rbufs = ((void*)0);
  VAR_1->tbufs = ((void*)0);
 }
}

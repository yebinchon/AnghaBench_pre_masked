
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_desc {int dummy; } ;
struct tx_ring {int wq_base_dma; int * wq_base; int wq_size; int * q; int wq_len; } ;
struct ql_adapter {int ndev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int * FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct ql_adapter *VAR_4,
     struct tx_ring *VAR_5)
{
 VAR_5->wq_base =
     FUNC_2(VAR_4->pdev, VAR_5->wq_size,
     &VAR_5->wq_base_dma);

 if ((VAR_5->wq_base == ((void*)0)) ||
     VAR_5->wq_base_dma & VAR_2)
  goto pci_alloc_err;

 VAR_5->q =
     FUNC_0(VAR_5->wq_len, sizeof(struct tx_ring_desc),
     VAR_1);
 if (VAR_5->q == ((void*)0))
  goto err;

 return 0;
err:
 FUNC_3(VAR_4->pdev, VAR_5->wq_size,
       VAR_5->wq_base, VAR_5->wq_base_dma);
 VAR_5->wq_base = ((void*)0);
pci_alloc_err:
 FUNC_1(VAR_4, VAR_3, VAR_4->ndev, "tx_ring alloc failed.\n");
 return -VAR_0;
}

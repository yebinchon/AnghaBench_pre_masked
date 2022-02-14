
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_uld_txq_info {int dummy; } ;
struct sge_uld_rxq_info {int dummy; } ;
struct sge {void* uld_rxq_info; void* uld_txq_info; } ;
struct adapter {void* uld; struct sge sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (void*) ;

int FUNC_2(struct adapter *VAR_4)
{
 struct sge *VAR_5 = &VAR_4->sge;

 VAR_4->uld = FUNC_0(VAR_1, sizeof(*VAR_4->uld), VAR_3);
 if (!VAR_4->uld)
  return -VAR_2;

 VAR_5->uld_rxq_info = FUNC_0(VAR_1,
      sizeof(struct sge_uld_rxq_info *),
      VAR_3);
 if (!VAR_5->uld_rxq_info)
  goto err_uld;

 VAR_5->uld_txq_info = FUNC_0(VAR_0,
      sizeof(struct sge_uld_txq_info *),
      VAR_3);
 if (!VAR_5->uld_txq_info)
  goto err_uld_rx;
 return 0;

err_uld_rx:
 FUNC_1(VAR_5->uld_rxq_info);
err_uld:
 FUNC_1(VAR_4->uld);
 return -VAR_2;
}

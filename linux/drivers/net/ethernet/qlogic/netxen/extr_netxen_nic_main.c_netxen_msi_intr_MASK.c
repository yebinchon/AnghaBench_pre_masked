
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_sds_ring {int napi; struct netxen_adapter* adapter; } ;
struct netxen_adapter {int tgt_status_reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct nx_host_sds_ring *VAR_3 = VAR_2;
 struct netxen_adapter *VAR_4 = VAR_3->adapter;


 FUNC_1(0xffffffff, VAR_4->tgt_status_reg);

 FUNC_0(&VAR_3->napi);
 return VAR_0;
}

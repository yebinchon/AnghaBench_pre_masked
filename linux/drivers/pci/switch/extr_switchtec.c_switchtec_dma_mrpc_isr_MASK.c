
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_dev {int mrpc_work; TYPE_1__* mmio_part_cfg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int mrpc_comp_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct switchtec_dev *VAR_6 = VAR_5;
 irqreturn_t VAR_7 = VAR_1;

 FUNC_0(VAR_2 |
    VAR_3,
    &VAR_6->mmio_part_cfg->mrpc_comp_hdr);
 FUNC_1(&VAR_6->mrpc_work);

 VAR_7 = VAR_0;
 return VAR_7;
}

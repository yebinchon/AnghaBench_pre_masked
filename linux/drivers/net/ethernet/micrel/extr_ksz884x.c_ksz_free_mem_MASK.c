
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_desc_info; int tx_desc_info; } ;
struct dev_info {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dev_info*,int *,int ) ;
 int FUNC_1 (struct dev_info*) ;

__attribute__((used)) static void FUNC_2(struct dev_info *VAR_2)
{

 FUNC_0(VAR_2, &VAR_2->hw.tx_desc_info,
  VAR_1);


 FUNC_0(VAR_2, &VAR_2->hw.rx_desc_info,
  VAR_0);


 FUNC_1(VAR_2);
}

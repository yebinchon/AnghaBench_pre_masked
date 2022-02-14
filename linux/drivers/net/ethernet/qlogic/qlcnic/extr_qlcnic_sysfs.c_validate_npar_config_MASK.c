
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qlcnic_npar_func_cfg {int pci_func; int max_bw; int min_bw; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_1,
    struct qlcnic_npar_func_cfg *VAR_2,
    int VAR_3)
{
 u8 VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = VAR_2[VAR_5].pci_func;
  if (FUNC_1(VAR_1, VAR_4) < 0)
   return -VAR_0;

  if (!FUNC_0(VAR_2[VAR_5].min_bw) ||
      !FUNC_0(VAR_2[VAR_5].max_bw))
   return -VAR_0;
 }
 return 0;
}

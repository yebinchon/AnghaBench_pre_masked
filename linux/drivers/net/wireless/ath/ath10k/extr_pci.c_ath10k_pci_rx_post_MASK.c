
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int * pipe_info; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(&VAR_2->pipe_info[VAR_3]);
}

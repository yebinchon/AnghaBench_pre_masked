
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_qmi {int nr_mem_region; int * mem_region; } ;


 int FUNC_0 (struct ath10k_qmi*,int *) ;
 int FUNC_1 (struct ath10k_qmi*,int *) ;

__attribute__((used)) static int FUNC_2(struct ath10k_qmi *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_mem_region; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, &VAR_0->mem_region[VAR_2]);
  if (VAR_1)
   goto err_unmap;
 }

 return 0;

err_unmap:
 for (VAR_2--; VAR_2 >= 0; VAR_2--)
  FUNC_1(VAR_0, &VAR_0->mem_region[VAR_2]);
 return VAR_1;
}

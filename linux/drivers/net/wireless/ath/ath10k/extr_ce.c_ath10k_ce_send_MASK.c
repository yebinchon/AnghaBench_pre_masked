
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ce_pipe {struct ath10k* ar; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;
typedef int dma_addr_t ;


 struct ath10k_ce* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k_ce_pipe*,void*,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ath10k_ce_pipe *VAR_0,
     void *VAR_1,
     dma_addr_t VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5)
{
 struct ath10k *VAR_6 = VAR_0->ar;
 struct ath10k_ce *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 FUNC_2(&VAR_7->ce_lock);
 VAR_8 = FUNC_1(VAR_0, VAR_1,
        VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_3(&VAR_7->ce_lock);

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_snoc {int pipe_info; } ;
struct ath10k {int napi; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ath10k*,int) ;
 int FUNC_2 (struct ath10k*) ;
 struct ath10k_snoc* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*,int,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2;
 struct ath10k_snoc *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = FUNC_1(VAR_3, VAR_1);

 if (VAR_5 < 0 || VAR_5 >= FUNC_0(VAR_4->pipe_info)) {
  FUNC_4(VAR_3, "unexpected/invalid irq %d ce_id %d\n", VAR_1,
       VAR_5);
  return VAR_0;
 }

 FUNC_2(VAR_3);
 FUNC_5(&VAR_3->napi);

 return VAR_0;
}

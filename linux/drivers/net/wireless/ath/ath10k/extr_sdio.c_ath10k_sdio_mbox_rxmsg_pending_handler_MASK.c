
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_sdio {int n_rx_pkts; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct ath10k*,int *,int) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int *,int*) ;
 struct ath10k_sdio* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_4,
        u32 VAR_5, bool *VAR_6)
{
 struct ath10k_sdio *VAR_7 = FUNC_3(VAR_4);
 u32 VAR_8[VAR_0];
 int VAR_9 = 1;
 unsigned long VAR_10;
 int VAR_11;

 *VAR_6 = 1;




 VAR_8[0] = VAR_5;

 VAR_10 = VAR_3 + VAR_2;
 do {



  VAR_11 = FUNC_0(VAR_4, VAR_8,
      VAR_9);
  if (VAR_11)
   break;

  if (VAR_7->n_rx_pkts >= 2)



   *VAR_6 = 0;

  VAR_11 = FUNC_1(VAR_4);





  VAR_9 = 0;
  VAR_11 = FUNC_2(VAR_4,
         VAR_8,
         &VAR_9);

  if (!VAR_9 || VAR_11)
   break;







  *VAR_6 = 0;
 } while (FUNC_5(VAR_3, VAR_10));

 if (VAR_11 && (VAR_11 != -VAR_1))
  FUNC_4(VAR_4, "failed to get pending recv messages: %d\n",
       VAR_11);

 return VAR_11;
}

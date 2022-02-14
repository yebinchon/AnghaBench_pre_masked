
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {size_t cal_data_len; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,size_t,int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (size_t,int ) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_4, void **VAR_5,
        size_t *VAR_6)
{
 u8 *VAR_7 = ((void*)0);
 size_t VAR_8, VAR_9;
 int VAR_10;

 if (!FUNC_0(VAR_4))
  return -VAR_2;

 VAR_8 = VAR_4->hw_params.cal_data_len;
 VAR_7 = FUNC_5(VAR_8, VAR_3);
 if (!VAR_7)
  return -VAR_1;

 FUNC_1(VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_10 = FUNC_2(VAR_4, VAR_9, &VAR_7[VAR_9]);
  if (VAR_10)
   goto err_free;
 }

 if (!FUNC_3(VAR_7, VAR_8))
  goto err_free;

 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;

 return 0;

err_free:
 FUNC_4(VAR_7);

 return -VAR_0;
}

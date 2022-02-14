
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int,int *) ;
 int FUNC_1 (struct ath10k*,char*,int,int) ;
 int * VAR_1 ;

int FUNC_2(struct ath10k *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2, VAR_3, &VAR_1[VAR_3]);
  if (VAR_4) {
   FUNC_1(VAR_2, "failed to initialize copy engine pipe %d: %d\n",
       VAR_3, VAR_4);
   return VAR_4;
  }
 }

 return 0;
}

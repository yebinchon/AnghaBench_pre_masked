
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,int *,int *) ;
 int FUNC_1 (struct ath10k*,char*,int ) ;

__attribute__((used)) static bool FUNC_2(struct ath10k *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0,
      &VAR_2,
      &VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_1, "unsupported HTC service id: %d\n",
       VAR_0);

  return 0;
 }

 return 1;
}

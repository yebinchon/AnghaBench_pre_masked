
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int vht_cap_info; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ath10k *VAR_2)
{
 int VAR_3 = VAR_2->vht_cap_info;

 VAR_3 &= VAR_0;
 VAR_3 >>= VAR_1;




 if (VAR_3 == 0)
  return 1;

 return VAR_3;
}

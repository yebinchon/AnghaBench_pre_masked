
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int loff_t ;
typedef int blkcnt_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static loff_t FUNC_1(int VAR_1, int VAR_2)
{
 loff_t VAR_3;
 loff_t VAR_4 = VAR_0;

 FUNC_0(sizeof(blkcnt_t) < sizeof(u64));

 if (!VAR_2) {
  VAR_4 = (1LL << 32) - 1;


  VAR_4 >>= (VAR_1 - 9);
  VAR_4 <<= VAR_1;
 }






 VAR_3 = (1LL << 32) - 1;
 VAR_3 <<= VAR_1;


 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;

 return VAR_3;
}

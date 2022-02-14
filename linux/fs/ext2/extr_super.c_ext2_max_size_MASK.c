
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long loff_t ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 long long VAR_0 ;
 long long VAR_1 ;

__attribute__((used)) static loff_t FUNC_1(int VAR_2)
{
 loff_t VAR_3 = VAR_0;
 int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6 = 1 << (VAR_2-2);
 VAR_5 = (1LL << 32) - 1;


 VAR_5 >>= (VAR_2 - 9);


 VAR_3 += 1LL << (VAR_2-2);
 VAR_3 += 1LL << (2*(VAR_2-2));
 VAR_3 += 1LL << (3*(VAR_2-2));

 if (VAR_3 < VAR_5)
  goto check_lfs;

 VAR_3 = VAR_5;

 VAR_5 -= VAR_0;

 VAR_4 = 1;
 VAR_5 -= VAR_6;

 if (VAR_5 < VAR_6 * VAR_6) {
  VAR_4 += 1 + FUNC_0(VAR_5, VAR_6);
  VAR_3 -= VAR_4;
  goto check_lfs;
 }
 VAR_4 += 1 + VAR_6;
 VAR_5 -= VAR_6 * VAR_6;

 VAR_4 += 1 + FUNC_0(VAR_5, VAR_6) +
  FUNC_0(VAR_5, VAR_6*VAR_6);
 VAR_3 -= VAR_4;
check_lfs:
 VAR_3 <<= VAR_2;
 if (VAR_3 > VAR_1)
  VAR_3 = VAR_1;

 return VAR_3;
}

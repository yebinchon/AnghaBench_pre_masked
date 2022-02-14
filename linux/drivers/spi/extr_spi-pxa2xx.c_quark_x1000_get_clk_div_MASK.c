
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;


 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (unsigned long) ;
 long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static unsigned int FUNC_5(int VAR_0, u32 *VAR_1)
{
 unsigned long VAR_2 = 200000000;
 unsigned long VAR_3 = VAR_2 / 2;


 unsigned long VAR_4 = VAR_3 / 2;
 unsigned long VAR_5 = VAR_3 * 2 / 5;
 unsigned long VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9;
 long VAR_10, VAR_11, VAR_12;
 u32 VAR_13;




 VAR_13 = (1 << 24) >> 1;


 VAR_8 = FUNC_0(VAR_4, VAR_0);


 if (VAR_8 > 256) {

  VAR_6 = FUNC_4(VAR_8 - 1);
  if (VAR_6 > 9) {
   VAR_8 >>= VAR_6 - 9;
   VAR_13 >>= VAR_6 - 9;
  }


  VAR_8 += VAR_8 & 1;
 }


 VAR_6 = FUNC_1(VAR_8);
 VAR_8 >>= VAR_6;
 VAR_13 >>= VAR_6;


 VAR_11 = FUNC_2(VAR_4 / (1 << (24 - FUNC_4(VAR_13))) / VAR_8 - VAR_0);



 VAR_9 = FUNC_0(VAR_5, VAR_0);
 VAR_12 = FUNC_2(VAR_5 / VAR_9 - VAR_0);






 if (VAR_12 >= VAR_11 || VAR_9 > 256) {

  VAR_10 = VAR_11;
  VAR_7 = VAR_8;
 } else {

  VAR_10 = VAR_12;
  VAR_7 = VAR_9;
  VAR_13 = (1 << 24) * 2 / 5;
 }


 if (VAR_3 / VAR_0 >= 80) {
  u64 VAR_14;
  u32 VAR_15;


  VAR_8 = FUNC_0(VAR_3, VAR_0);
  VAR_15 = (1 << 24) / VAR_8;


  VAR_14 = (u64)VAR_3 * VAR_15;
  FUNC_3(VAR_14, 1 << 24);
  VAR_11 = FUNC_2(VAR_14 - VAR_0);


  if (VAR_11 < VAR_10) {

   VAR_7 = 1;
   VAR_13 = VAR_15;
  }
 }

 *VAR_1 = VAR_13;
 return VAR_7 - 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct w1_slave {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct w1_slave*,int*,int,int const*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct w1_slave *VAR_7, u16 VAR_8,
 const u8 *VAR_9, size_t VAR_10, bool VAR_11)
{
 int VAR_12;
 int VAR_13 = VAR_10;
 const u8 *VAR_14;
 u8 VAR_15[2];


 if (VAR_10 == 0)
  return -VAR_1;


 if (VAR_10 <= VAR_2) {






  VAR_15[0] = (VAR_11 ? VAR_6
   : VAR_3);
  VAR_15[1] = VAR_8 << 1;
  VAR_12 = FUNC_0(VAR_7, VAR_15, 2, VAR_9, VAR_10);
 } else {



  VAR_14 = VAR_9;
  VAR_15[0] = VAR_3;
  VAR_15[1] = VAR_8 << 1;
  VAR_12 = FUNC_0(VAR_7, VAR_15, 2, VAR_14,
   VAR_2);
  if (VAR_12 < 0)
   return VAR_12;


  if (FUNC_1(VAR_7->master))
   return -VAR_0;


  VAR_14 += VAR_2;
  VAR_13 -= VAR_2;

  while (VAR_13 > VAR_2) {

   VAR_15[0] = VAR_4;
   VAR_12 = FUNC_0(VAR_7, VAR_15, 1, VAR_14,
     VAR_2);
   if (VAR_12 < 0)
    return VAR_12;


   if (FUNC_1(VAR_7->master))
    return -VAR_0;


   VAR_14 += VAR_2;
   VAR_13 -= VAR_2;
  }


  VAR_15[0] = (VAR_11 ? VAR_5
   : VAR_4);
  VAR_12 = FUNC_0(VAR_7, VAR_15, 1, VAR_14, VAR_13);
 }

 return VAR_12;
}

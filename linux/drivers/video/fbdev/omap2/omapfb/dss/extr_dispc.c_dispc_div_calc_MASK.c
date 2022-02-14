
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* dispc_div_calc_func ) (int,int,unsigned long,unsigned long,void*) ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (unsigned long,unsigned long) ;

bool FUNC_7(unsigned long VAR_5,
  unsigned long VAR_6, unsigned long VAR_7,
  dispc_div_calc_func VAR_8, void *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19, VAR_20;
 unsigned VAR_21;
 unsigned long VAR_22;




 VAR_21 = 0;


 VAR_19 = FUNC_3(VAR_3);
 VAR_20 = FUNC_2(VAR_3);

 VAR_18 = FUNC_2(VAR_2);

 VAR_6 = VAR_6 ? VAR_6 : 1;
 VAR_7 = VAR_7 ? VAR_7 : VAR_4;

 VAR_11 = FUNC_5(FUNC_0(VAR_5, VAR_18), 1ul);
 VAR_12 = FUNC_6(VAR_5 / VAR_6, 255ul);

 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; ++VAR_10) {
  VAR_17 = VAR_5 / VAR_10;

  VAR_14 = FUNC_5(FUNC_0(VAR_17, VAR_7), VAR_19);
  VAR_15 = FUNC_6(VAR_17 / VAR_6, VAR_20);

  for (VAR_13 = VAR_14; VAR_13 <= VAR_15; ++VAR_13) {
   VAR_16 = VAR_17 / VAR_13;







   if (FUNC_4(VAR_1))
    VAR_22 = FUNC_1();
   else
    VAR_22 = VAR_17;

   if (VAR_22 < VAR_16 * VAR_21)
    continue;

   if (VAR_8(VAR_10, VAR_13, VAR_17, VAR_16, VAR_9))
    return 1;
  }
 }

 return 0;
}

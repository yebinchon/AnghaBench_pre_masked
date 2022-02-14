
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* dss_div_calc_func ) (unsigned long,void*) ;
struct TYPE_4__ {int * parent_clk; TYPE_1__* feat; int dss_clk; } ;
struct TYPE_3__ {unsigned long fck_div_max; unsigned int dss_fck_multiplier; } ;


 unsigned int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 TYPE_2__ VAR_1 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;

bool FUNC_6(unsigned long VAR_2, unsigned long VAR_3,
  dss_div_calc_func VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 unsigned VAR_13;

 VAR_10 = FUNC_3(VAR_0);

 if (VAR_1.parent_clk == ((void*)0)) {
  unsigned VAR_14;

  VAR_14 = VAR_10 / VAR_2;

  VAR_9 = VAR_2 * VAR_14;

  VAR_9 = FUNC_2(VAR_1.dss_clk, VAR_9);

  return VAR_4(VAR_9, VAR_5);
 }

 VAR_11 = VAR_1.feat->fck_div_max;

 VAR_13 = VAR_1.feat->dss_fck_multiplier;
 VAR_12 = FUNC_1(VAR_1.parent_clk);

 VAR_3 = VAR_3 ? VAR_3 : 1;

 VAR_7 = FUNC_5(VAR_12 * VAR_13 / VAR_3, VAR_11);
 VAR_8 = FUNC_4(FUNC_0(VAR_12 * VAR_13, VAR_10), 1ul);

 for (VAR_6 = VAR_7; VAR_6 >= VAR_8; --VAR_6) {
  VAR_9 = FUNC_0(VAR_12, VAR_6) * VAR_13;

  if (VAR_4(VAR_9, VAR_5))
   return 1;
 }

 return 0;
}

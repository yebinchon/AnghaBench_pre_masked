
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cvmx_ciu_wdogx {int u64; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;
 union cvmx_ciu_wdogx VAR_4;

 VAR_2 = FUNC_2(VAR_1);

 VAR_3 = FUNC_3(VAR_1);


 FUNC_4(VAR_3, FUNC_0(VAR_2), 1);


 VAR_4.u64 = 0;
 FUNC_4(VAR_3, FUNC_1(VAR_2), VAR_4.u64);

 FUNC_5(FUNC_6(VAR_1), VAR_0);
 return 0;
}

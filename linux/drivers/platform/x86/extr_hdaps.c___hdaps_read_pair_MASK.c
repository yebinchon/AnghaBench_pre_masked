
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_6, unsigned int VAR_7,
        int *VAR_8, int *VAR_9)
{

 if (FUNC_1())
  return -VAR_0;

 *VAR_9 = FUNC_3(VAR_7);
 *VAR_8 = FUNC_3(VAR_6);
 VAR_5 = FUNC_2(VAR_1);
 FUNC_0();


 if (VAR_4 & VAR_2)
  *VAR_8 = -*VAR_8;
 if (VAR_4 & VAR_3)
  *VAR_9 = -*VAR_9;

 return 0;
}

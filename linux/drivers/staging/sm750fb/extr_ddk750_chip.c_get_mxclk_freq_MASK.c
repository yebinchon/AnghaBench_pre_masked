
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static unsigned int FUNC_4(void)
{
 unsigned int VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;

 if (FUNC_3() == VAR_10)
  return FUNC_1(130);

 VAR_11 = FUNC_2(VAR_1);
 VAR_12 = (VAR_11 & VAR_2) >> VAR_3;
 VAR_13 = (VAR_11 & VAR_4) >> VAR_5;
 VAR_14 = (VAR_11 & VAR_6) >> VAR_7;
 VAR_15 = (VAR_11 & VAR_8) >> VAR_9;

 return VAR_0 * VAR_12 / VAR_13 / FUNC_0(VAR_14) / FUNC_0(VAR_15);
}

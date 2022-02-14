
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = VAR_3 * (VAR_5 / VAR_1);
 if (VAR_4 < 1)
  VAR_4 = 1;
 if (VAR_4 > 0xffff)
  VAR_4 = 0xffff;
 FUNC_0(VAR_4);
 VAR_0 = VAR_4 * VAR_1 / VAR_5;
 FUNC_2("timer margin %d seconds (prescale %d, change %d, freq %d)\n",
  VAR_0, VAR_1, VAR_4, VAR_5);
}

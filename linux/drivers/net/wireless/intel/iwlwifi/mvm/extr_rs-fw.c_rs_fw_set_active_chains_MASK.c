
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_5)
{
 u8 VAR_6 = 0;

 if (VAR_5 & VAR_0)
  VAR_6 |= VAR_3;
 if (VAR_5 & VAR_1)
  VAR_6 |= VAR_4;
 if (VAR_5 & VAR_2)
  FUNC_0(0,
       "tlc offload doesn't support antenna C. chains: 0x%x\n",
       VAR_5);

 return VAR_6;
}

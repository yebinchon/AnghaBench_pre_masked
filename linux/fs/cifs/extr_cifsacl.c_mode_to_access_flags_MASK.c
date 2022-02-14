
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_1(umode_t VAR_7, umode_t VAR_8,
    __u32 *VAR_9)
{

 *VAR_9 = 0x0;


 VAR_7 &= VAR_8;




 if (VAR_7 & VAR_4)
  *VAR_9 |= VAR_2;
 if (VAR_7 & VAR_5)
  *VAR_9 |= VAR_3;
 if (VAR_7 & VAR_6)
  *VAR_9 |= VAR_1;

 FUNC_0(VAR_0, "mode: 0x%x, access flags now 0x%x\n",
   VAR_7, *VAR_9);
 return;
}

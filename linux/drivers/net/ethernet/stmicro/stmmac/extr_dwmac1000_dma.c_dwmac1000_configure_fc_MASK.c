
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_5, int VAR_6)
{
 VAR_5 &= ~VAR_1;
 VAR_5 &= ~VAR_2;





 if (VAR_6 < 4096) {
  VAR_5 &= ~VAR_0;
  FUNC_0("GMAC: disabling flow control, rxfifo too small(%d)\n",
    VAR_6);
 } else {
  VAR_5 |= VAR_0;
  VAR_5 |= VAR_3;
  VAR_5 |= VAR_4;
 }
 return VAR_5;
}

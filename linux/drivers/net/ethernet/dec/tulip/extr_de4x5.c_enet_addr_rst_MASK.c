
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef void* u32 ;
typedef char s8 ;


 void* VAR_0 ;
 short VAR_1 ;
 char FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(u_long VAR_2)
{
    union {
 struct {
     u32 a;
     u32 b;
 } llsig;
 char Sig[sizeof(u32) << 1];
    } VAR_3;
    short VAR_4=0;
    s8 VAR_5;
    int VAR_6, VAR_7;

    VAR_3.llsig.a = VAR_0;
    VAR_3.llsig.b = VAR_0;
    VAR_4 = sizeof(u32) << 1;

    for (VAR_6=0,VAR_7=0;VAR_7<VAR_4 && VAR_6<VAR_1+VAR_4-1;VAR_6++) {
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_3.Sig[VAR_7] == VAR_5) {
     VAR_7++;
 } else {
     if (VAR_5 == VAR_3.Sig[0]) {
  VAR_7=1;
     } else {
  VAR_7=0;
     }
 }
    }
}

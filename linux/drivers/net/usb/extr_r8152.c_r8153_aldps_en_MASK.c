
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int aldps; } ;
struct r8152 {TYPE_1__ ups_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8152*,int ,int) ;
 int FUNC_1 (struct r8152*,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct r8152 *VAR_3, bool VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4) {
  VAR_5 |= VAR_0;
  FUNC_2(VAR_3, VAR_2, VAR_5);
 } else {
  int VAR_6;

  VAR_5 &= ~VAR_0;
  FUNC_2(VAR_3, VAR_2, VAR_5);
  for (VAR_6 = 0; VAR_6 < 20; VAR_6++) {
   FUNC_3(1000, 2000);
   if (FUNC_0(VAR_3, VAR_1, 0xe000) & 0x0100)
    break;
  }
 }

 VAR_3->ups_info.aldps = VAR_4;
}

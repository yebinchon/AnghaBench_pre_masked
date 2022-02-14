
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int green; } ;
struct r8152 {TYPE_1__ ups_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r8152*,int) ;
 int FUNC_1 (struct r8152*,int,int) ;

__attribute__((used)) static void FUNC_2(struct r8152 *VAR_2, bool VAR_3)
{
 u16 VAR_4;

 if (VAR_3) {
  FUNC_1(VAR_2, 0x8045, 0);
  FUNC_1(VAR_2, 0x804d, 0x1222);
  FUNC_1(VAR_2, 0x805d, 0x0022);
 } else {
  FUNC_1(VAR_2, 0x8045, 0x2444);
  FUNC_1(VAR_2, 0x804d, 0x2444);
  FUNC_1(VAR_2, 0x805d, 0x2444);
 }

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_4 |= VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_4);

 VAR_2->ups_info.green = VAR_3;
}

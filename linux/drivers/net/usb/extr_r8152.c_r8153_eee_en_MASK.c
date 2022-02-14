
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int eee; } ;
struct r8152 {TYPE_1__ ups_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct r8152 *VAR_6, bool VAR_7)
{
 u32 VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_3, VAR_5);
 VAR_9 = FUNC_1(VAR_6, VAR_4);

 if (VAR_7) {
  VAR_8 |= VAR_1 | VAR_2;
  VAR_9 |= VAR_0;
 } else {
  VAR_8 &= ~(VAR_1 | VAR_2);
  VAR_9 &= ~VAR_0;
 }

 FUNC_3(VAR_6, VAR_3, VAR_5, VAR_8);
 FUNC_2(VAR_6, VAR_4, VAR_9);

 VAR_6->ups_info.eee = VAR_7;
}

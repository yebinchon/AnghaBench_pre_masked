
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {int en; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(u8 VAR_2, bool VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 VAR_3 ? (VAR_4 |= VAR_1[VAR_2].en) : (VAR_4 &= ~VAR_1[VAR_2].en);
 FUNC_1(VAR_4, VAR_0);
 return 0;
}

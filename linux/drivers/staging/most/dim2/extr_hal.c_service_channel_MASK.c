
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* dim2; } ;
struct TYPE_3__ {int ACSR0; } ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int*,int*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static inline bool FUNC_4(u8 VAR_5, u8 VAR_6)
{
 u8 const VAR_7 = VAR_6 * 16;
 u32 const VAR_8 = FUNC_1(VAR_0 + VAR_5, 1);
 u32 VAR_9[4] = { 0, 0, 0, 0 };
 u32 VAR_10[4] = { 0, 0, 0, 0 };

 if (((VAR_8 >> (VAR_1 + VAR_7)) & 1) == 0)
  return 0;

 VAR_9[1] =
  FUNC_0(VAR_1 + VAR_7) |
  FUNC_0(VAR_2 + VAR_7) |
  FUNC_0(VAR_3 + VAR_7);
 FUNC_2(VAR_0 + VAR_5, VAR_9, VAR_10);


 FUNC_3(FUNC_0(VAR_5), &VAR_4.dim2->ACSR0);

 return 1;
}

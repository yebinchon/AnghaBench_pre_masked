
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {int addr; int bits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_3(struct bnx2x *VAR_1, u8 VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = FUNC_1(VAR_1, VAR_0[VAR_3].addr);

  if (VAR_2)
   VAR_4 |= VAR_0[VAR_3].bits;
  else
   VAR_4 &= ~VAR_0[VAR_3].bits;

  FUNC_2(VAR_1, VAR_0[VAR_3].addr, VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cas {int lock; scalar_t__ regs; } ;
struct TYPE_2__ {int offsets; } ;


 int FUNC_0 (struct cas*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct cas *VAR_1, u8 *VAR_2, int VAR_3)
{
 u8 *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_1->lock, VAR_6);
 for (VAR_5 = 0, VAR_4 = VAR_2; VAR_5 < VAR_3 ; VAR_5 ++, VAR_4 += sizeof(u32)) {
  u16 VAR_7;
  u32 VAR_8;
  if (VAR_0[VAR_5].offsets < 0) {
   VAR_7 = FUNC_0(VAR_1,
        -VAR_0[VAR_5].offsets);
   VAR_8 = VAR_7;
  } else {
   VAR_8= FUNC_2(VAR_1->regs+VAR_0[VAR_5].offsets);
  }
  FUNC_1(VAR_4, (u8 *)&VAR_8, sizeof(u32));
 }
 FUNC_4(&VAR_1->lock, VAR_6);
}

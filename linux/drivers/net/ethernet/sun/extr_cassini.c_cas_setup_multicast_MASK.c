
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cas {scalar_t__ regs; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cas*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct cas *VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6;

 if (VAR_4->dev->flags & VAR_1) {
  VAR_5 |= VAR_3;

 } else if (VAR_4->dev->flags & VAR_0) {
      for (VAR_6=0; VAR_6 < 16; VAR_6++)
   FUNC_2(0xFFFF, VAR_4->regs + FUNC_0(VAR_6));
  VAR_5 |= VAR_2;

 } else {
  FUNC_1(VAR_4);
  VAR_5 |= VAR_2;
 }

 return VAR_5;
}

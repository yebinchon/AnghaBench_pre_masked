
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct b44 {TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b44*,int ,int ) ;
 int FUNC_1 (struct b44*,int ) ;
 int FUNC_2 (struct b44*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b44 *VAR_3)
{
 FUNC_2(VAR_3, VAR_0, 0);
 if (!(VAR_3->dev->flags & VAR_2)) {
  u32 VAR_4;

  FUNC_0(VAR_3, VAR_3->dev->dev_addr, 0);
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  FUNC_2(VAR_3, VAR_0, VAR_4 | VAR_1);
 }
}

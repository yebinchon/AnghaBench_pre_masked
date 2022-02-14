
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct rvu_block {scalar_t__ addr; int type; } ;
struct rvu {int dev; TYPE_1__* hw; } ;
struct TYPE_2__ {struct rvu_block* block; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct rvu*,struct rvu_block*,int ,int) ;
 int FUNC_2 (struct rvu*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rvu*,struct rvu_block*,int) ;
 int FUNC_5 (struct rvu*,int ,scalar_t__,int) ;
 int FUNC_6 (struct rvu*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct rvu *VAR_2, u16 VAR_3, u8 VAR_4)
{
 struct rvu_block *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = &VAR_2->hw->block[VAR_4];
 VAR_8 = FUNC_3(FUNC_2(VAR_2, VAR_3),
     VAR_5->type);
 if (!VAR_8)
  return;
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_3, VAR_6);
  if (VAR_7 < 0)
   continue;


  if (VAR_5->addr == VAR_0)
   FUNC_5(VAR_2, VAR_3, VAR_5->addr, VAR_7);
  else if (VAR_5->addr == VAR_1)
   FUNC_6(VAR_2, VAR_3, VAR_7);

  VAR_9 = FUNC_4(VAR_2, VAR_5, VAR_7);
  if (VAR_9) {
   FUNC_0(VAR_2->dev, "Failed to reset blkaddr %d LF%d\n",
    VAR_5->addr, VAR_7);
  }
 }
}

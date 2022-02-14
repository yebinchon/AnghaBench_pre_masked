
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct csio_hw {int flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct csio_hw*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct csio_hw*) ;
 int FUNC_6 (struct csio_hw*,int ) ;
 int FUNC_7 (struct csio_hw*,int ,int,int ) ;
 int FUNC_8 (struct csio_hw*,int ,int ) ;

void
FUNC_9(struct csio_hw *VAR_5)
{
 u32 VAR_6 = 0;

 if (FUNC_4(VAR_5->pdev->device & VAR_1))
  VAR_6 = FUNC_1(FUNC_6(VAR_5, VAR_4));
 else
  VAR_6 = FUNC_2(FUNC_6(VAR_5, VAR_4));

 if (!(VAR_5->flags & VAR_0))
  return;

 VAR_5->flags &= ~VAR_0;

 FUNC_8(VAR_5, 0, FUNC_0(VAR_3));
 if (FUNC_3(VAR_5))
  FUNC_7(VAR_5, VAR_2, 1 << VAR_6, 0);


 FUNC_5(VAR_5);

}

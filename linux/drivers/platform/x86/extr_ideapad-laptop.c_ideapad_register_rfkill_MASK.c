
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ideapad_private {int * rfk; TYPE_2__* adev; TYPE_3__* rfk_priv; TYPE_1__* platform_device; } ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ opcode; int name; } ;
struct TYPE_7__ {int dev; struct ideapad_private* priv; } ;
struct TYPE_6__ {int handle; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,unsigned long*) ;
 int FUNC_1 (int ,int *,scalar_t__,int *,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct ideapad_private *VAR_5, int VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 if (VAR_4 &&
     (VAR_2[VAR_6].type == VAR_1)) {

  FUNC_5(VAR_5->adev->handle,
        VAR_2[VAR_6].opcode, 1);
  return 0;
 }
 VAR_5->rfk_priv[VAR_6].dev = VAR_6;
 VAR_5->rfk_priv[VAR_6].priv = VAR_5;

 VAR_5->rfk[VAR_6] = FUNC_1(VAR_2[VAR_6].name,
          &VAR_5->platform_device->dev,
          VAR_2[VAR_6].type,
          &VAR_3,
          &VAR_5->rfk_priv[VAR_6]);
 if (!VAR_5->rfk[VAR_6])
  return -VAR_0;

 if (FUNC_0(VAR_5->adev->handle, VAR_2[VAR_6].opcode-1,
    &VAR_8)) {
  FUNC_3(VAR_5->rfk[VAR_6], 0);
 } else {
  VAR_8 = !VAR_8;
  FUNC_3(VAR_5->rfk[VAR_6], VAR_8);
 }

 VAR_7 = FUNC_4(VAR_5->rfk[VAR_6]);
 if (VAR_7) {
  FUNC_2(VAR_5->rfk[VAR_6]);
  return VAR_7;
 }
 return 0;
}

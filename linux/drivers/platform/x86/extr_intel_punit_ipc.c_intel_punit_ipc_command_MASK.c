
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int lock; int cmd_complete; } ;
typedef int IPC_TYPE ;
typedef TYPE_1__ IPC_DEV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* VAR_7 ;
 int FUNC_8 (int *) ;

int FUNC_9(u32 VAR_8, u32 VAR_9, u32 VAR_10, u32 *VAR_11, u32 *VAR_12)
{
 IPC_DEV *VAR_13 = VAR_7;
 IPC_TYPE VAR_14;
 u32 VAR_15;
 int VAR_16;

 FUNC_6(&VAR_13->lock);

 FUNC_8(&VAR_13->cmd_complete);
 VAR_14 = (VAR_8 & VAR_4) >> VAR_5;

 if (VAR_11) {
  FUNC_5(VAR_13, VAR_14, *VAR_11);
  if (VAR_14 == VAR_3 || VAR_14 == VAR_6)
   FUNC_4(VAR_13, VAR_14, *++VAR_11);
 }

 VAR_15 = VAR_8 & ~VAR_4;
 VAR_15 |= VAR_2 | VAR_10 << VAR_1 | VAR_9 << VAR_0;
 FUNC_3(VAR_13, VAR_14, VAR_15);

 VAR_16 = FUNC_0(VAR_13, VAR_14);
 if (VAR_16)
  goto out;

 if (VAR_12) {
  *VAR_12 = FUNC_2(VAR_13, VAR_14);
  if (VAR_14 == VAR_3 || VAR_14 == VAR_6)
   *++VAR_12 = FUNC_1(VAR_13, VAR_14);
 }

out:
 FUNC_7(&VAR_13->lock);
 return VAR_16;
}

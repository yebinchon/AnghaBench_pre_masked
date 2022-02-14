
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int lock; int cmd_complete; } ;
typedef int IPC_TYPE ;
typedef TYPE_1__ IPC_DEV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int *) ;

int FUNC_5(int VAR_6, int VAR_7, int VAR_8)
{
 IPC_DEV *VAR_9 = VAR_5;
 IPC_TYPE VAR_10;
 u32 VAR_11;
 int VAR_12;

 FUNC_2(&VAR_9->lock);

 FUNC_4(&VAR_9->cmd_complete);
 VAR_10 = (VAR_6 & VAR_3) >> VAR_4;

 VAR_11 = VAR_6 & ~VAR_3;
 VAR_11 |= VAR_2 | VAR_8 << VAR_1 | VAR_7 << VAR_0;
 FUNC_1(VAR_9, VAR_10, VAR_11);
 VAR_12 = FUNC_0(VAR_9, VAR_10);

 FUNC_3(&VAR_9->lock);

 return VAR_12;
}

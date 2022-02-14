
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gcr_mem_base; int gcr_lock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;

int FUNC_5(u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_1.gcr_lock);

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 < 0)
  goto gcr_ipc_unlock;

 VAR_5 = FUNC_1(VAR_1.gcr_mem_base + VAR_2);

 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4 & VAR_3;

 FUNC_4(VAR_5, VAR_1.gcr_mem_base + VAR_2);

 VAR_5 = FUNC_1(VAR_1.gcr_mem_base + VAR_2);


 if ((VAR_5 & VAR_3) != (VAR_4 & VAR_3)) {
  VAR_6 = -VAR_0;
  goto gcr_ipc_unlock;
 }

gcr_ipc_unlock:
 FUNC_3(&VAR_1.gcr_lock);
 return VAR_6;
}

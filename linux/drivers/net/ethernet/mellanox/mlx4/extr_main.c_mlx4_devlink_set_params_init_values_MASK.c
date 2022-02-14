
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vbool; unsigned long vu32; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct devlink*,int ,union devlink_param_value) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct devlink *VAR_9)
{
 union devlink_param_value VAR_10;

 VAR_10.vbool = !!VAR_8;
 FUNC_0(VAR_9,
        VAR_0,
        VAR_10);

 VAR_10.vu32 = 1UL << VAR_7;
 FUNC_0(VAR_9,
        VAR_1,
        VAR_10);

 VAR_10.vbool = VAR_6;
 FUNC_0(VAR_9,
        VAR_4,
        VAR_10);

 VAR_10.vbool = VAR_5;
 FUNC_0(VAR_9,
        VAR_3,
        VAR_10);

 VAR_10.vbool = 0;
 FUNC_0(VAR_9,
        VAR_2,
        VAR_10);
}

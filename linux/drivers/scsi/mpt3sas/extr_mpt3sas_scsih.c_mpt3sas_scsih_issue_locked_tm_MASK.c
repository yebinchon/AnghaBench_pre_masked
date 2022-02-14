
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_2__ {int mutex; } ;
struct MPT3SAS_ADAPTER {TYPE_1__ tm_cmds; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1,
  u64 VAR_2, u8 VAR_3, u16 VAR_4, u16 VAR_5,
  u8 VAR_6, u8 VAR_7)
{
 int VAR_8;

 FUNC_1(&VAR_0->tm_cmds.mutex);
 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7);
 FUNC_2(&VAR_0->tm_cmds.mutex);

 return VAR_8;
}

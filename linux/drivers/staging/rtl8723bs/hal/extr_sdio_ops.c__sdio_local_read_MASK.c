
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intf_hdl {int dummy; } ;
struct TYPE_2__ {struct intf_hdl intf; } ;
struct adapter {TYPE_1__ iopriv; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct intf_hdl*,int ,int ,int *) ;
 int FUNC_3 (struct intf_hdl*,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (struct adapter*,int ,int *) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static s32 FUNC_8(
 struct adapter *VAR_2,
 u32 VAR_3,
 u32 VAR_4,
 u8 *VAR_5
)
{
 struct intf_hdl *VAR_6;
 u8 VAR_7;
 s32 VAR_8;
 u8 *VAR_9;
 u32 VAR_10;


 VAR_6 = &VAR_2->iopriv.intf;

 FUNC_0(VAR_2, VAR_1, VAR_3, &VAR_3);

 FUNC_6(VAR_2, VAR_0, &VAR_7);
 if (!VAR_7)
  return FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);

 VAR_10 = FUNC_1(VAR_4);
 VAR_9 = FUNC_7(VAR_10);
 if (!VAR_9)
  return -1;

 VAR_8 = FUNC_3(VAR_6, VAR_3, VAR_10, VAR_9);
 if (!VAR_8)
  FUNC_5(VAR_5, VAR_9, VAR_4);

 FUNC_4(VAR_9);

 return VAR_8;
}

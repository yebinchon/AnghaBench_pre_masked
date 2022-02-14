
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intf_hdl {int dummy; } ;
struct TYPE_3__ {struct intf_hdl intf; } ;
struct adapter {TYPE_1__ iopriv; } ;
typedef int __le32 ;
struct TYPE_4__ {scalar_t__ bFwCurrentInPSMode; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,int ,int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,int ,int *) ;
 int FUNC_4 (struct intf_hdl*,int ,int,int *) ;
 int FUNC_5 (struct intf_hdl*,int ,int *) ;

__attribute__((used)) static u32 FUNC_6(struct adapter *VAR_2, u32 VAR_3)
{

 u8 VAR_4;
 u32 VAR_5 = 0;
 struct intf_hdl *VAR_6 = &VAR_2->iopriv.intf;
 __le32 VAR_7;

 FUNC_0(VAR_2, VAR_1, VAR_3, &VAR_3);
 FUNC_3(VAR_2, VAR_0, &VAR_4);
 if (!VAR_4 || FUNC_1(VAR_2)->bFwCurrentInPSMode) {
  FUNC_4(VAR_6, VAR_3, 4, (u8 *)&VAR_7);
  VAR_5 = FUNC_2(VAR_7);
 } else {
  VAR_5 = FUNC_5(VAR_6, VAR_3, ((void*)0));
 }
 return VAR_5;
}

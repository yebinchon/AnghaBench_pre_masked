
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
typedef int __le32 ;


 int FUNC_0 (struct adapter*,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intf_hdl*,int ,int,int *) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct intf_hdl *VAR_4 = &VAR_1->iopriv.intf;
 __le32 VAR_5;

 FUNC_0(VAR_1, VAR_0, VAR_2, &VAR_2);
 VAR_5 = FUNC_1(VAR_3);
 FUNC_2(VAR_4, VAR_2, 4, (u8 *)&VAR_5);
}

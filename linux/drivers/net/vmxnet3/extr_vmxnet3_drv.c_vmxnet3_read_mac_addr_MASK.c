
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vmxnet3_adapter {int dummy; } ;


 int FUNC_0 (struct vmxnet3_adapter*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_adapter *VAR_2, u8 *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 *(u32 *)VAR_3 = VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_3[4] = VAR_4 & 0xff;
 VAR_3[5] = (VAR_4 >> 8) & 0xff;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {int portnum; int dev_rst_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct qlcnic_adapter *VAR_2, u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_2->portnum & 0xf;
 VAR_4 |= VAR_3 << 7;
 VAR_4 |= (VAR_1 - VAR_2->dev_rst_time) << 8;

 FUNC_0(VAR_2, VAR_0, VAR_4);
 VAR_2->dev_rst_time = VAR_1;
}

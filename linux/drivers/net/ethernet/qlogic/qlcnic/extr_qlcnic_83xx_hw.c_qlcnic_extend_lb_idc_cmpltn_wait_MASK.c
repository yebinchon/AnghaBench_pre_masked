
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_hardware_context {int extend_lb_time; } ;
struct qlcnic_adapter {int netdev; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct qlcnic_adapter *VAR_1,
          u32 *VAR_2)
{
 struct qlcnic_hardware_context *VAR_3 = VAR_1->ahw;
 int VAR_4;

 FUNC_0(VAR_1->netdev, "Received loopback IDC time extend event for 0x%x seconds\n",
      VAR_3->extend_lb_time);
 VAR_4 = VAR_3->extend_lb_time * 1000;
 *VAR_2 += VAR_4 / VAR_0;
 VAR_3->extend_lb_time = 0;
}

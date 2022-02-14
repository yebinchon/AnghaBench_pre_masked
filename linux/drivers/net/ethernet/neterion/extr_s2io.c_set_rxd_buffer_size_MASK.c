
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {scalar_t__ rxd_mode; struct net_device* dev; } ;
struct net_device {scalar_t__ mtu; } ;
struct RxD_t {int Control_2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct s2io_nic *VAR_4, struct RxD_t *VAR_5,
    int VAR_6)
{
 struct net_device *VAR_7 = VAR_4->dev;
 if (VAR_4->rxd_mode == VAR_2) {
  VAR_5->Control_2 = FUNC_0(VAR_6 - VAR_1);
 } else if (VAR_4->rxd_mode == VAR_3) {
  VAR_5->Control_2 = FUNC_1(VAR_0);
  VAR_5->Control_2 |= FUNC_2(1);
  VAR_5->Control_2 |= FUNC_3(VAR_7->mtu + 4);
 }
}

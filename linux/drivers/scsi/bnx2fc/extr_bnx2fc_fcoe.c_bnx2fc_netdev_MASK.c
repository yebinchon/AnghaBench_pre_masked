
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fcoe_port {scalar_t__ priv; } ;
struct fc_lport {int dummy; } ;
struct bnx2fc_interface {struct net_device* netdev; } ;


 scalar_t__ FUNC_0 (struct fc_lport const*) ;

__attribute__((used)) static inline struct net_device *FUNC_1(const struct fc_lport *VAR_0)
{
 return ((struct bnx2fc_interface *)
  ((struct fcoe_port *)FUNC_0(VAR_0))->priv)->netdev;
}

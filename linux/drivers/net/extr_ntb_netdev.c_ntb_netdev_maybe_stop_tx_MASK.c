
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct ntb_transport_qp*,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ntb_transport_qp*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
        struct ntb_transport_qp *VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_0) ||
     (FUNC_2(VAR_1) >= VAR_2))
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}

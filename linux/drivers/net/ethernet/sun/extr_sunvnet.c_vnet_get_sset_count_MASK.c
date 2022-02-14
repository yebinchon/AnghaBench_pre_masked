
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet {int nports; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, int VAR_4)
{
 struct vnet *VAR_5 = (struct vnet *)FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  return FUNC_0(VAR_2)
   + (VAR_1 * VAR_5->nports);
 default:
  return -VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int dummy; } ;
struct xdp_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xdp_frame* FUNC_0 (struct xdp_buff*) ;
 int FUNC_1 (struct net_device*,int,struct xdp_frame**,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct xdp_buff *VAR_3)
{
 struct xdp_frame *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_2(!VAR_4))
  return -VAR_0;

 return FUNC_1(VAR_2, 1, &VAR_4, VAR_1);
}

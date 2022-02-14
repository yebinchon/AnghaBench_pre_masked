
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int fecp; } ;
struct fs_enet_private {TYPE_1__ fec; } ;
struct fec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, void *VAR_2, int *VAR_3)
{
 struct fs_enet_private *VAR_4 = FUNC_1(VAR_1);

 if (*VAR_3 < sizeof(struct fec))
  return -VAR_0;

 FUNC_0(VAR_2, VAR_4->fec.fecp, sizeof(struct fec));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xenvif {int dev; } ;
struct TYPE_5__ {int type; scalar_t__ size; } ;
struct TYPE_4__ {TYPE_2__ gso; } ;
struct xen_netif_extra_info {TYPE_1__ u; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ gso_size; int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,char*,...) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct xenvif*) ;

__attribute__((used)) static int FUNC_3(struct xenvif *VAR_3,
         struct sk_buff *VAR_4,
         struct xen_netif_extra_info *VAR_5)
{
 if (!VAR_5->u.gso.size) {
  FUNC_0(VAR_3->dev, "GSO size must not be zero.\n");
  FUNC_2(VAR_3);
  return -VAR_0;
 }

 switch (VAR_5->u.gso.type) {
 case 129:
  FUNC_1(VAR_4)->gso_type = VAR_1;
  break;
 case 128:
  FUNC_1(VAR_4)->gso_type = VAR_2;
  break;
 default:
  FUNC_0(VAR_3->dev, "Bad GSO type %d.\n", VAR_5->u.gso.type);
  FUNC_2(VAR_3);
  return -VAR_0;
 }

 FUNC_1(VAR_4)->gso_size = VAR_5->u.gso.size;


 return 0;
}

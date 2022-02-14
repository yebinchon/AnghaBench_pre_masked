
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif {int can_sg; int ip_csum; int ipv6_csum; int gso_mask; scalar_t__ stall_timeout; int drain_timeout; } ;
struct xenbus_device {int otherend; } ;
struct backend_info {struct xenvif* vif; struct xenbus_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct xenbus_device*,int,char*,int ) ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ,char*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct backend_info *VAR_5)
{
 struct xenvif *VAR_6 = VAR_5->vif;
 struct xenbus_device *VAR_7 = VAR_5->dev;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_4, VAR_7->otherend, "request-rx-copy", "%u",
      &VAR_8);
 if (VAR_9 == -VAR_0) {
  VAR_9 = 0;
  VAR_8 = 0;
 }
 if (VAR_9 < 0) {
  FUNC_2(VAR_7, VAR_9, "reading %s/request-rx-copy",
     VAR_7->otherend);
  return VAR_9;
 }
 if (!VAR_8)
  return -VAR_1;

 if (!FUNC_3(VAR_7->otherend, "feature-rx-notify", 0)) {




  VAR_5->vif->drain_timeout = FUNC_1(30);
  VAR_5->vif->stall_timeout = 0;
 }

 VAR_6->can_sg = !!FUNC_3(VAR_7->otherend, "feature-sg", 0);

 VAR_6->gso_mask = 0;

 if (FUNC_3(VAR_7->otherend, "feature-gso-tcpv4", 0))
  VAR_6->gso_mask |= FUNC_0(VAR_2);

 if (FUNC_3(VAR_7->otherend, "feature-gso-tcpv6", 0))
  VAR_6->gso_mask |= FUNC_0(VAR_3);

 VAR_6->ip_csum = !FUNC_3(VAR_7->otherend,
          "feature-no-csum-offload", 0);

 VAR_6->ipv6_csum = !!FUNC_3(VAR_7->otherend,
      "feature-ipv6-csum-offload", 0);

 return 0;
}

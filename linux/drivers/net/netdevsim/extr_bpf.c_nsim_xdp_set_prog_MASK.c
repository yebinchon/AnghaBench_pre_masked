
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_attachment_info {int dummy; } ;
struct netdevsim {int bpf_xdpoffload_accept; int bpf_xdpdrv_accept; } ;
struct netdev_bpf {scalar_t__ command; int extack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct netdevsim*,struct netdev_bpf*) ;
 int FUNC_2 (struct xdp_attachment_info*,struct netdev_bpf*) ;
 int FUNC_3 (struct xdp_attachment_info*,struct netdev_bpf*) ;

__attribute__((used)) static int
FUNC_4(struct netdevsim *VAR_4, struct netdev_bpf *VAR_5,
    struct xdp_attachment_info *VAR_6)
{
 int VAR_7;

 if (!FUNC_2(VAR_6, VAR_5))
  return -VAR_0;

 if (VAR_5->command == VAR_2 && !VAR_4->bpf_xdpdrv_accept) {
  FUNC_0(VAR_5->extack, "driver XDP disabled in DebugFS");
  return -VAR_1;
 }
 if (VAR_5->command == VAR_3 && !VAR_4->bpf_xdpoffload_accept) {
  FUNC_0(VAR_5->extack, "XDP offload disabled in DebugFS");
  return -VAR_1;
 }

 if (VAR_5->command == VAR_3) {
  VAR_7 = FUNC_1(VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 FUNC_3(VAR_6, VAR_5);

 return 0;
}

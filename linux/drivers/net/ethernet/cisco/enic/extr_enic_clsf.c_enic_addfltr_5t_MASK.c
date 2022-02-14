
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {int dst; int src; } ;
struct TYPE_8__ {int dst; int src; } ;
struct TYPE_9__ {TYPE_2__ v4addrs; } ;
struct TYPE_7__ {int ip_proto; } ;
struct flow_keys {TYPE_4__ ports; TYPE_3__ addrs; TYPE_1__ basic; } ;
struct TYPE_11__ {int flags; void* dst_port; void* src_port; void* dst_addr; void* src_addr; int protocol; } ;
struct TYPE_12__ {TYPE_5__ ipv4; } ;
struct filter {TYPE_6__ u; int type; } ;
struct enic {int devcmd_lock; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int*,struct filter*) ;

int FUNC_5(struct enic *VAR_6, struct flow_keys *VAR_7, u16 VAR_8)
{
 int VAR_9;
 struct filter VAR_10;

 switch (VAR_7->basic.ip_proto) {
 case 129:
  VAR_10.u.ipv4.protocol = VAR_4;
  break;
 case 128:
  VAR_10.u.ipv4.protocol = VAR_5;
  break;
 default:
  return -VAR_1;
 }

 VAR_10.type = VAR_3;
 VAR_10.u.ipv4.src_addr = FUNC_0(VAR_7->addrs.v4addrs.src);
 VAR_10.u.ipv4.dst_addr = FUNC_0(VAR_7->addrs.v4addrs.dst);
 VAR_10.u.ipv4.src_port = FUNC_1(VAR_7->ports.src);
 VAR_10.u.ipv4.dst_port = FUNC_1(VAR_7->ports.dst);
 VAR_10.u.ipv4.flags = VAR_2;

 FUNC_2(&VAR_6->devcmd_lock);
 VAR_9 = FUNC_4(VAR_6->vdev, VAR_0, &VAR_8, &VAR_10);
 FUNC_3(&VAR_6->devcmd_lock);
 VAR_9 = (VAR_9 == 0) ? VAR_8 : VAR_9;

 return VAR_9;
}

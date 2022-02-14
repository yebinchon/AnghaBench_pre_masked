
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int serial; scalar_t__ allocated; } ;
struct TYPE_5__ {TYPE_1__ vf_assoc; } ;
struct TYPE_6__ {TYPE_2__ v4_msg; } ;
struct nvsp_message {TYPE_3__ msg; } ;
struct net_device_context {scalar_t__ vf_alloc; int vf_serial; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,int ,char*) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
      const struct nvsp_message *VAR_1)
{
 struct net_device_context *VAR_2 = FUNC_1(VAR_0);

 VAR_2->vf_alloc = VAR_1->msg.v4_msg.vf_assoc.allocated;
 VAR_2->vf_serial = VAR_1->msg.v4_msg.vf_assoc.serial;
 FUNC_0(VAR_0, "VF slot %u %s\n",
      VAR_2->vf_serial,
      VAR_2->vf_alloc ? "added" : "removed");
}

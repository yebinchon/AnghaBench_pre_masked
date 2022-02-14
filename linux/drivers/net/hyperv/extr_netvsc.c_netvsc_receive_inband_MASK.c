
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_type; } ;
struct nvsp_message {TYPE_1__ hdr; } ;
struct net_device {int dummy; } ;




 int FUNC_0 (struct net_device*,struct nvsp_message const*) ;
 int FUNC_1 (struct net_device*,struct nvsp_message const*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
       const struct nvsp_message *VAR_1)
{
 switch (VAR_1->hdr.msg_type) {
 case 128:
  FUNC_0(VAR_0, VAR_1);
  break;

 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct kvaser_usb {int dummy; } ;
struct kvaser_cmd_simple {int dummy; } ;
struct TYPE_3__ {int channel; int tid; } ;
struct TYPE_4__ {TYPE_1__ simple; } ;
struct kvaser_cmd {scalar_t__ len; TYPE_2__ u; int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvaser_cmd*) ;
 struct kvaser_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvaser_usb const*,struct kvaser_cmd*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const struct kvaser_usb *VAR_3,
        u8 VAR_4, int VAR_5)
{
 struct kvaser_cmd *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->id = VAR_4;
 VAR_6->len = VAR_0 + sizeof(struct kvaser_cmd_simple);
 VAR_6->u.simple.channel = VAR_5;
 VAR_6->u.simple.tid = 0xff;

 VAR_7 = FUNC_2(VAR_3, VAR_6, VAR_6->len);

 FUNC_0(VAR_6);
 return VAR_7;
}

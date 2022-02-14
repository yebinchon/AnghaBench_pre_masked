
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_ops {int dummy; } ;
struct TYPE_8__ {int * ops; int function; } ;
struct v4l2_subdev {TYPE_4__ entity; int name; TYPE_2__* dev; int owner; int flags; } ;
struct adv748x_state {TYPE_3__* client; TYPE_2__* dev; } ;
struct TYPE_7__ {int addr; int adapter; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {char* name; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,char*,int,int,char const*) ;
 int FUNC_4 (struct v4l2_subdev*,struct adv748x_state*) ;
 int FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_ops const*) ;

void FUNC_6(struct v4l2_subdev *VAR_3, struct adv748x_state *VAR_4,
    const struct v4l2_subdev_ops *VAR_5, u32 VAR_6,
    const char *VAR_7)
{
 FUNC_5(VAR_3, VAR_5);
 VAR_3->flags |= VAR_0;


 VAR_3->owner = VAR_4->dev->driver->owner;
 VAR_3->dev = VAR_4->dev;

 FUNC_4(VAR_3, VAR_4);


 FUNC_3(VAR_3->name, sizeof(VAR_3->name), "%s %d-%04x %s",
  VAR_4->dev->driver->name,
  FUNC_1(VAR_4->client->adapter),
  VAR_4->client->addr, VAR_7);

 VAR_3->entity.function = VAR_6;
 VAR_3->entity.ops = FUNC_2(FUNC_0(VAR_3)) ?
    &VAR_2 : &VAR_1;
}

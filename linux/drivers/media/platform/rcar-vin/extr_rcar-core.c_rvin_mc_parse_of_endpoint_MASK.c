
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int port; size_t id; } ;
struct v4l2_fwnode_endpoint {TYPE_3__ base; } ;
struct TYPE_6__ {scalar_t__ fwnode; } ;
struct v4l2_async_subdev {TYPE_2__ match; } ;
struct rvin_dev {TYPE_4__* group; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int lock; TYPE_1__* csi; } ;
struct TYPE_5__ {scalar_t__ fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct rvin_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct rvin_dev*,char*,int ,...) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3,
         struct v4l2_fwnode_endpoint *VAR_4,
         struct v4l2_async_subdev *VAR_5)
{
 struct rvin_dev *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = 0;

 if (VAR_4->base.port != 1 || VAR_4->base.id >= VAR_2)
  return -VAR_0;

 if (!FUNC_3(FUNC_4(VAR_5->match.fwnode))) {
  FUNC_5(VAR_6, "OF device %pOF disabled, ignoring\n",
   FUNC_4(VAR_5->match.fwnode));
  return -VAR_1;
 }

 FUNC_1(&VAR_6->group->lock);

 if (VAR_6->group->csi[VAR_4->base.id].fwnode) {
  FUNC_5(VAR_6, "OF device %pOF already handled\n",
   FUNC_4(VAR_5->match.fwnode));
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_6->group->csi[VAR_4->base.id].fwnode = VAR_5->match.fwnode;

 FUNC_5(VAR_6, "Add group OF device %pOF to slot %u\n",
  FUNC_4(VAR_5->match.fwnode), VAR_4->base.id);
out:
 FUNC_2(&VAR_6->group->lock);

 return VAR_7;
}

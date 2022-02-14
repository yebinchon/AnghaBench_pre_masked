
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_async_notifier {int dummy; } ;
struct TYPE_5__ {struct fwnode_handle* fwnode; } ;
struct TYPE_7__ {int match_type; TYPE_1__ match; } ;
struct TYPE_6__ {TYPE_3__ asd; } ;
struct rcar_drif_sdr {TYPE_2__ ep; TYPE_4__* dev; struct v4l2_async_notifier notifier; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_8__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 struct fwnode_handle* FUNC_1 (int ,int *) ;
 struct fwnode_handle* FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct fwnode_handle*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rcar_drif_sdr*,struct fwnode_handle*) ;
 int FUNC_6 (struct v4l2_async_notifier*,TYPE_3__*) ;
 int FUNC_7 (struct v4l2_async_notifier*) ;

__attribute__((used)) static int FUNC_8(struct rcar_drif_sdr *VAR_2)
{
 struct v4l2_async_notifier *VAR_3 = &VAR_2->notifier;
 struct fwnode_handle *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_7(VAR_3);

 VAR_5 = FUNC_1(FUNC_4(VAR_2->dev->of_node),
         ((void*)0));
 if (!VAR_5)
  return 0;

 VAR_4 = FUNC_2(VAR_5);
 if (!VAR_4) {
  FUNC_0(VAR_2->dev, "bad remote port parent\n");
  FUNC_3(VAR_5);
  return -VAR_0;
 }

 VAR_2->ep.asd.match.fwnode = VAR_4;
 VAR_2->ep.asd.match_type = VAR_1;
 VAR_6 = FUNC_6(VAR_3, &VAR_2->ep.asd);
 if (VAR_6) {
  FUNC_3(VAR_4);
  return VAR_6;
 }


 FUNC_5(VAR_2, VAR_5);

 FUNC_3(VAR_4);
 FUNC_3(VAR_5);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subscribed_event {int flags; unsigned int elems; TYPE_1__* fh; int node; int id; } ;
struct v4l2_event {int dummy; } ;
struct v4l2_ctrl {scalar_t__ type; int flags; int ev_subs; } ;
struct TYPE_2__ {int ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_event*,struct v4l2_ctrl*,int ) ;
 int FUNC_1 (int *,int *) ;
 struct v4l2_ctrl* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct v4l2_ctrl*) ;
 int FUNC_4 (struct v4l2_ctrl*) ;
 int FUNC_5 (TYPE_1__*,struct v4l2_event*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subscribed_event *VAR_6, unsigned VAR_7)
{
 struct v4l2_ctrl *VAR_8 = FUNC_2(VAR_6->fh->ctrl_handler, VAR_6->id);

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_3(VAR_8);
 FUNC_1(&VAR_6->node, &VAR_8->ev_subs);
 if (VAR_8->type != VAR_2 &&
     (VAR_6->flags & VAR_5)) {
  struct v4l2_event VAR_9;
  u32 VAR_10 = VAR_3;

  if (!(VAR_8->flags & VAR_1))
   VAR_10 |= VAR_4;
  FUNC_0(&VAR_9, VAR_8, VAR_10);


  VAR_6->elems = VAR_7;
  FUNC_5(VAR_6->fh, &VAR_9);
 }
 FUNC_4(VAR_8);
 return 0;
}

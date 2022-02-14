
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_fh {int dummy; } ;
struct v4l2_ctrl {int has_changed; int flags; TYPE_1__* handler; scalar_t__ call_notify; int is_new; TYPE_2__** cluster; int p_cur; int p_new; } ;
struct TYPE_4__ {scalar_t__ has_volatiles; } ;
struct TYPE_3__ {int notify_priv; int (* notify ) (struct v4l2_ctrl*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct v4l2_ctrl*,int ,int ) ;
 int FUNC_2 (struct v4l2_fh*,struct v4l2_ctrl*,int) ;
 int FUNC_3 (struct v4l2_ctrl*,int ) ;

__attribute__((used)) static void FUNC_4(struct v4l2_fh *VAR_4, struct v4l2_ctrl *VAR_5, u32 VAR_6)
{
 bool VAR_7;

 if (VAR_5 == ((void*)0))
  return;


 VAR_7 = VAR_5->has_changed;
 if (VAR_7)
  FUNC_1(VAR_5, VAR_5->p_new, VAR_5->p_cur);

 if (VAR_6 & VAR_2) {

  VAR_5->flags &=
   ~(VAR_0 | VAR_1);
  if (!FUNC_0(VAR_5->cluster[0])) {
   VAR_5->flags |= VAR_0;
   if (VAR_5->cluster[0]->has_volatiles)
    VAR_5->flags |= VAR_1;
  }
  VAR_4 = ((void*)0);
 }
 if (VAR_7 || VAR_6) {


  if (!VAR_5->is_new)
   VAR_4 = ((void*)0);
  FUNC_2(VAR_4, VAR_5,
   (VAR_7 ? VAR_3 : 0) | VAR_6);
  if (VAR_5->call_notify && VAR_7 && VAR_5->handler->notify)
   VAR_5->handler->notify(VAR_5, VAR_5->handler->notify_priv);
 }
}

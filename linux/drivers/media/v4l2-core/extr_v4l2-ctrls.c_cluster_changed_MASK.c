
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int ncontrols; int flags; int has_changed; unsigned int elems; int p_new; int p_cur; TYPE_1__* type_ops; struct v4l2_ctrl** cluster; } ;
struct TYPE_2__ {int (* equal ) (struct v4l2_ctrl*,unsigned int,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_ctrl*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_ctrl *VAR_2)
{
 bool VAR_3 = 0;
 unsigned VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->ncontrols; VAR_5++) {
  struct v4l2_ctrl *VAR_6 = VAR_2->cluster[VAR_5];
  bool VAR_7 = 0;

  if (VAR_6 == ((void*)0))
   continue;

  if (VAR_6->flags & VAR_0)
   VAR_3 = VAR_7 = 1;





  if (VAR_6->flags & VAR_1) {
   VAR_6->has_changed = 0;
   continue;
  }

  for (VAR_4 = 0; !VAR_7 && VAR_4 < VAR_6->elems; VAR_4++)
   VAR_7 = !VAR_6->type_ops->equal(VAR_6, VAR_4,
    VAR_6->p_cur, VAR_6->p_new);
  VAR_6->has_changed = VAR_7;
  VAR_3 |= VAR_6->has_changed;
 }
 return VAR_3;
}

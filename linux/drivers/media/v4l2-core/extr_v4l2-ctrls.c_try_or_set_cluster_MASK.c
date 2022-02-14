
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fh {int dummy; } ;
struct v4l2_ctrl {int ncontrols; int flags; int has_changed; struct v4l2_ctrl** cluster; scalar_t__ has_volatiles; int is_new; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_ctrl*,int ) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct v4l2_ctrl*) ;
 scalar_t__ FUNC_3 (struct v4l2_ctrl*) ;
 scalar_t__ FUNC_4 (struct v4l2_ctrl*) ;
 int FUNC_5 (struct v4l2_fh*,struct v4l2_ctrl*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct v4l2_fh *VAR_5, struct v4l2_ctrl *VAR_6,
         bool VAR_7, u32 VAR_8)
{
 bool VAR_9;
 int VAR_10;
 int VAR_11;





 for (VAR_11 = 0; VAR_11 < VAR_6->ncontrols; VAR_11++) {
  struct v4l2_ctrl *VAR_12 = VAR_6->cluster[VAR_11];

  if (VAR_12 == ((void*)0))
   continue;

  if (!VAR_12->is_new) {
   FUNC_2(VAR_12);
   continue;
  }


  if (VAR_7 && (VAR_12->flags & VAR_1))
   return -VAR_0;
 }

 VAR_10 = FUNC_0(VAR_6, VAR_4);


 if (VAR_10 || !VAR_7 || !FUNC_1(VAR_6))
  return VAR_10;
 VAR_10 = FUNC_0(VAR_6, VAR_3);
 if (VAR_10)
  return VAR_10;


 VAR_9 = FUNC_3(VAR_6) != FUNC_4(VAR_6);

 for (VAR_11 = 0; VAR_11 < VAR_6->ncontrols; VAR_11++) {







  if (VAR_11 && VAR_9 && FUNC_4(VAR_6) &&
      VAR_6->has_volatiles && VAR_6->cluster[VAR_11])
   VAR_6->cluster[VAR_11]->has_changed = 1;

  FUNC_5(VAR_5, VAR_6->cluster[VAR_11], VAR_8 |
   ((VAR_9 && VAR_11 > 0) ? VAR_2 : 0));
 }
 return 0;
}

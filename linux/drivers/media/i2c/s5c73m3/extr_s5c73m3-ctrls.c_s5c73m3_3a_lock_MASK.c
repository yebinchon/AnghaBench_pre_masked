
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
struct v4l2_ctrl {int val; TYPE_3__ cur; } ;
struct TYPE_5__ {TYPE_1__* auto_wb; } ;
struct s5c73m3 {TYPE_2__ ctrls; } ;
struct TYPE_4__ {scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct s5c73m3*,int) ;
 int FUNC_1 (struct s5c73m3*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_9, struct v4l2_ctrl *VAR_10)
{
 bool VAR_11 = VAR_10->val & VAR_8;
 bool VAR_12 = VAR_10->val & VAR_6;
 bool VAR_13 = VAR_10->val & VAR_7;
 int VAR_14 = 0;

 if ((VAR_10->val ^ VAR_10->cur.val) & VAR_6) {
  VAR_14 = FUNC_1(VAR_9, VAR_0,
    VAR_12 ? VAR_2 : VAR_1);
  if (VAR_14)
   return VAR_14;
 }

 if (((VAR_10->val ^ VAR_10->cur.val) & VAR_8)
     && VAR_9->ctrls.auto_wb->val) {
  VAR_14 = FUNC_1(VAR_9, VAR_3,
   VAR_11 ? VAR_5 : VAR_4);
  if (VAR_14)
   return VAR_14;
 }

 if ((VAR_10->val ^ VAR_10->cur.val) & VAR_7)
  VAR_14 = FUNC_0(VAR_9, !VAR_13);

 return VAR_14;
}

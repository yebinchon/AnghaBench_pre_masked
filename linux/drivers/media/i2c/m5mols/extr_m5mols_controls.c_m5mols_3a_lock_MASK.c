
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
struct v4l2_ctrl {int val; TYPE_3__ cur; } ;
struct TYPE_5__ {int af; } ;
struct m5mols_info {int sd; TYPE_2__ ver; TYPE_1__* auto_wb; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct m5mols_info *VAR_11, struct v4l2_ctrl *VAR_12)
{
 bool VAR_13 = VAR_12->val & VAR_9;
 int VAR_14 = 0;

 if ((VAR_12->val ^ VAR_12->cur.val) & VAR_8) {
  bool VAR_15 = VAR_12->val & VAR_8;

  VAR_14 = FUNC_0(&VAR_11->sd, VAR_0, VAR_15 ?
       VAR_3 : VAR_4);
  if (VAR_14)
   return VAR_14;
 }

 if (((VAR_12->val ^ VAR_12->cur.val) & VAR_10)
     && VAR_11->auto_wb->val) {
  bool VAR_16 = VAR_12->val & VAR_10;

  VAR_14 = FUNC_0(&VAR_11->sd, VAR_2, VAR_16 ?
       VAR_6 : VAR_7);
  if (VAR_14)
   return VAR_14;
 }

 if (!VAR_11->ver.af || !VAR_13)
  return VAR_14;

 if ((VAR_12->val ^ VAR_12->cur.val) & VAR_9)
  VAR_14 = FUNC_0(&VAR_11->sd, VAR_1, VAR_5);

 return VAR_14;
}

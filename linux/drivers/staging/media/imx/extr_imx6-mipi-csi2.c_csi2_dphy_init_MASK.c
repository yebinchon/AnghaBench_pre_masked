
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_ctrl {int* qmenu_int; size_t val; } ;
struct csi2_dev {TYPE_1__* src_sd; } ;
struct TYPE_2__ {int ctrl_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct csi2_dev*,int,int) ;
 int FUNC_2 (int ) ;
 struct v4l2_ctrl* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct csi2_dev *VAR_3)
{
 struct v4l2_ctrl *VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_3->src_sd->ctrl_handler,
         VAR_2);
 if (!VAR_4)
  VAR_5 = VAR_0;
 else
  VAR_5 = FUNC_0(2 * VAR_4->qmenu_int[VAR_4->val],
       VAR_1);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_1(VAR_3, 0x44, VAR_6);

 return 0;
}

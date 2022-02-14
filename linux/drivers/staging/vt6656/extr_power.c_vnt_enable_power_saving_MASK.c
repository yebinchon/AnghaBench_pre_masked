
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vnt_private {int current_aid; scalar_t__ op_mode; TYPE_1__* usb; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct vnt_private*,int ,int ) ;
 int FUNC_3 (struct vnt_private*,int ,int ) ;
 int FUNC_4 (struct vnt_private*,int ,int) ;

void FUNC_5(struct vnt_private *VAR_11, u16 VAR_12)
{
 u16 VAR_13 = VAR_11->current_aid | FUNC_0(14) | FUNC_0(15);


 FUNC_4(VAR_11, VAR_4, VAR_0);

 if (VAR_11->op_mode != VAR_5)

  FUNC_4(VAR_11, VAR_1, VAR_13);





 FUNC_3(VAR_11, VAR_3, VAR_10);


 FUNC_3(VAR_11, VAR_2, VAR_6);




 FUNC_3(VAR_11, VAR_3, VAR_8);

 if (VAR_12 >= 2) {

  FUNC_2(VAR_11, VAR_3, VAR_7);


  FUNC_3(VAR_11, VAR_3, VAR_9);
 } else {

  FUNC_3(VAR_11, VAR_3, VAR_7);
 }

 FUNC_1(&VAR_11->usb->dev, "PS:Power Saving Mode Enable...\n");
}

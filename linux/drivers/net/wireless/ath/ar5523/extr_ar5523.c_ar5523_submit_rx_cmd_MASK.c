
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ar5523 {TYPE_1__* rx_cmd_urb; int rx_cmd_buf; int dev; } ;
struct TYPE_3__ {int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ar5523*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,struct ar5523*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_5->rx_cmd_urb, VAR_5->dev,
     FUNC_0(VAR_5->dev), VAR_5->rx_cmd_buf,
     VAR_0, VAR_4, VAR_5);
 VAR_5->rx_cmd_urb->transfer_flags |= VAR_3;

 VAR_6 = FUNC_3(VAR_5->rx_cmd_urb, VAR_2);
 if (VAR_6) {
  if (VAR_6 != -VAR_1)
   FUNC_1(VAR_5, "error %d when submitting rx urb\n",
       VAR_6);
  return VAR_6;
 }
 return 0;
}

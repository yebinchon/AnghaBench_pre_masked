
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct falcon_board {TYPE_1__* type; int minor; int major; } ;
struct ef4_nic {int net_dev; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 struct falcon_board* FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*,int ,int ,char*,scalar_t__) ;
 int VAR_2 ;

int FUNC_6(struct ef4_nic *VAR_3, u16 VAR_4)
{
 struct falcon_board *VAR_5 = FUNC_4(VAR_3);
 u8 VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 VAR_5->major = FUNC_1(VAR_4);
 VAR_5->minor = FUNC_2(VAR_4);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  if (VAR_1[VAR_7].id == VAR_6)
   VAR_5->type = &VAR_1[VAR_7];

 if (VAR_5->type) {
  return 0;
 } else {
  FUNC_5(VAR_3, VAR_2, VAR_3->net_dev, "unknown board type %d\n",
     VAR_6);
  return -VAR_0;
 }
}

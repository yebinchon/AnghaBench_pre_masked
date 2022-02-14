
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ican3_dev {int num; int ndev; scalar_t__ dpm; TYPE_2__* dpmctrl; int free_page; TYPE_1__* ctrl; } ;
struct TYPE_4__ {int hwreset; } ;
struct TYPE_3__ {int int_disable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ican3_dev*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int *) ;
 unsigned long VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ican3_dev *VAR_6)
{
 unsigned long VAR_7;
 u8 VAR_8, VAR_9;


 FUNC_2(1 << VAR_6->num, &VAR_6->ctrl->int_disable);


 VAR_6->free_page = VAR_0;

 FUNC_0(VAR_6, VAR_3);
 VAR_8 = FUNC_1(VAR_6->dpm + VAR_4);


 FUNC_2(0x00, &VAR_6->dpmctrl->hwreset);


 VAR_7 = VAR_5;
 do {
  FUNC_0(VAR_6, VAR_3);
  VAR_9 = FUNC_1(VAR_6->dpm + VAR_4);
  if (VAR_9 == (VAR_8 ^ 0xff))
   return 0;

  FUNC_3(10);
 } while (FUNC_5(VAR_5, VAR_7 + VAR_2 / 2));

 FUNC_4(VAR_6->ndev, "failed to reset CAN module\n");
 return -VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct nfcmrvl_private {TYPE_1__ fw_dnld; int dev; } ;
struct TYPE_4__ {int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfcmrvl_private* FUNC_0 (int ,struct timer_list*,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct nfcmrvl_private*,int ) ;
 int FUNC_2 (int ,char*) ;
 struct nfcmrvl_private* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct nfcmrvl_private *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2.timer);

 FUNC_2(VAR_5->dev, "FW loading timeout");
 VAR_5->fw_dnld.state = VAR_1;
 FUNC_1(VAR_5, -VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int share; } ;
struct fjes_hw {TYPE_1__ hw_info; } ;
typedef enum ep_partner_status { ____Placeholder_ep_partner_status } ep_partner_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct fjes_hw*,int) ;
 scalar_t__ FUNC_2 (struct fjes_hw*,int) ;

enum ep_partner_status
FUNC_3(struct fjes_hw *VAR_4, int VAR_5)
{
 enum ep_partner_status VAR_6;

 if (FUNC_0(VAR_4->hw_info.share, VAR_5)) {
  if (FUNC_2(VAR_4, VAR_5)) {
   VAR_6 = VAR_3;
  } else {
   if (FUNC_1(VAR_4, VAR_5))
    VAR_6 = VAR_0;
   else
    VAR_6 = VAR_1;
  }
 } else {
  VAR_6 = VAR_2;
 }

 return VAR_6;
}

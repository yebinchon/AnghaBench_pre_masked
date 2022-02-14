
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_ocpstat ) (struct rtsx_pcr*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int *) ;
 int FUNC_1 (struct rtsx_pcr*,int *) ;

int FUNC_2(struct rtsx_pcr *VAR_1, u8 *VAR_2)
{
 if (VAR_1->ops->get_ocpstat)
  return VAR_1->ops->get_ocpstat(VAR_1, VAR_2);
 else
  return FUNC_0(VAR_1, VAR_0, VAR_2);
}

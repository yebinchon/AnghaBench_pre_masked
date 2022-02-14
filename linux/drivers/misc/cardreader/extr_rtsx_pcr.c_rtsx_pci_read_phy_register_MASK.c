
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_phy ) (struct rtsx_pcr*,int ,int *) ;} ;


 int FUNC_0 (struct rtsx_pcr*,int ,int *) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int *) ;

int FUNC_2(struct rtsx_pcr *VAR_0, u8 VAR_1, u16 *VAR_2)
{
 if (VAR_0->ops->read_phy)
  return VAR_0->ops->read_phy(VAR_0, VAR_1, VAR_2);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}

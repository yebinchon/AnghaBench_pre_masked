
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arcom_pcmcia_pdata {int dummy; } ;
struct TYPE_3__ {struct arcom_pcmcia_pdata* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline struct arcom_pcmcia_pdata *FUNC_0(void)
{
 return VAR_0->dev.platform_data;
}

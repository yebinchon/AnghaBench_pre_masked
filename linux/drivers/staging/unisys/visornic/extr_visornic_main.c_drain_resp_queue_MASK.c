
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct visornic_devdata {TYPE_1__* dev; } ;
struct uiscmdrsp {int dummy; } ;
struct TYPE_2__ {int visorchannel; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct uiscmdrsp*) ;

__attribute__((used)) static void FUNC_1(struct uiscmdrsp *VAR_1,
        struct visornic_devdata *VAR_2)
{
 while (!FUNC_0(VAR_2->dev->visorchannel,
       VAR_0,
       VAR_1))
  ;
}

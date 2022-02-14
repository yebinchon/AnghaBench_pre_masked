
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pti_masterchannel {int dummy; } ;
struct TYPE_2__ {int ia_modem; int ia_os; int ia_app; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 struct pti_masterchannel* FUNC_0 (int ,int ,int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct pti_masterchannel *FUNC_3(u8 VAR_8,
          const char *VAR_9)
{
 struct pti_masterchannel *VAR_10;

 FUNC_1(&VAR_6);

 switch (VAR_8) {

 case 0:
  VAR_10 = FUNC_0(VAR_7->ia_app, VAR_1,
       VAR_0, VAR_9);
  break;

 case 1:
  VAR_10 = FUNC_0(VAR_7->ia_os, VAR_3,
       VAR_5, VAR_9);
  break;

 case 2:
  VAR_10 = FUNC_0(VAR_7->ia_modem, VAR_2,
       VAR_4, VAR_9);
  break;
 default:
  VAR_10 = ((void*)0);
 }

 FUNC_2(&VAR_6);
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mwifiex_private {int bss_mode; int adapter; } ;
struct mwifiex_bssdescriptor {scalar_t__ channel; scalar_t__ bss_band; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct mwifiex_private*,int ,int ,int ) ;
 int FUNC_2 (struct mwifiex_private*,struct mwifiex_bssdescriptor*,int) ;

int FUNC_3(struct mwifiex_private *VAR_1,
     struct mwifiex_bssdescriptor *VAR_2)
{
 int VAR_3 = -1;

 if (!VAR_2)
  return -1;

 if ((FUNC_1(VAR_1, (u8) VAR_2->bss_band,
        (u16) VAR_2->channel, 0))) {
  switch (VAR_1->bss_mode) {
  case 128:
  case 129:
   VAR_3 = FUNC_2(VAR_1, VAR_2,
           VAR_1->bss_mode);
   if (VAR_3)
    FUNC_0(VAR_1->adapter, VAR_0,
         "Incompatible network settings\n");
   break;
  default:
   VAR_3 = 0;
  }
 }

 return VAR_3;
}

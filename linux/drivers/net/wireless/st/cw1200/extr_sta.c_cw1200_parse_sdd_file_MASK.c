
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cw1200_common {int conf_listen_interval; int hw_refclk; int bt_present; TYPE_1__* sdd; } ;
typedef int __le16 ;
struct TYPE_2__ {int* data; int size; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct cw1200_common *VAR_0)
{
 const u8 *VAR_1 = VAR_0->sdd->data;
 int VAR_2 = 0;

 while (VAR_1 + 2 <= VAR_0->sdd->data + VAR_0->sdd->size) {
  if (VAR_1 + VAR_1[1] + 2 > VAR_0->sdd->data + VAR_0->sdd->size) {
   FUNC_2("Malformed sdd structure\n");
   return -1;
  }
  switch (VAR_1[0]) {
  case 129: {
   u16 VAR_3;
   if (VAR_1[1] < 4) {
    FUNC_2("SDD_PTA_CFG_ELT_ID malformed\n");
    VAR_2 = -1;
    break;
   }
   VAR_3 = FUNC_0(*((__le16 *)(VAR_1 + 2)));
   if (!VAR_3)
    break;

   VAR_3 = FUNC_0(*((__le16 *)(VAR_1 + 4)));
   VAR_0->conf_listen_interval = (VAR_3 >> 7) & 0x1F;
   FUNC_1("PTA found; Listen Interval %d\n",
     VAR_0->conf_listen_interval);
   break;
  }
  case 128: {
   u16 VAR_4 = FUNC_0(*((__le16 *)(VAR_1 + 2)));
   if (VAR_4 != VAR_0->hw_refclk)
    FUNC_2("SDD file doesn't match configured refclk (%d vs %d)\n",
     VAR_4, VAR_0->hw_refclk);
   break;
  }
  default:
   break;
  }
  VAR_1 += VAR_1[1] + 2;
 }

 if (!VAR_0->bt_present) {
  FUNC_1("PTA element NOT found.\n");
  VAR_0->conf_listen_interval = 0;
 }
 return VAR_2;
}

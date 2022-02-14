
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int nr; } ;
struct bttv {TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_4 (struct bttv *VAR_2)
{
 uint32_t VAR_3 = 0;
 long VAR_4 = 0x0E;

 FUNC_3("%d: Adlink RTV-24 initialisation in progress ...\n",
  VAR_2->c.nr);

 FUNC_1 (0x00c3feff, VAR_1);

 FUNC_1 (0 + VAR_4, VAR_0);
 FUNC_2 (1);
 FUNC_1 (0x10 + VAR_4, VAR_0);
 FUNC_2 (10);
 FUNC_1 (0 + VAR_4, VAR_0);

 VAR_3 = FUNC_0 (VAR_0);

 if ((((VAR_3 >> 18) & 0x01) != 0) || (((VAR_3 >> 19) & 0x01) != 1)) {
  FUNC_3("%d: Adlink RTV-24 initialisation(1) ERROR_CPLD_Check_Failed (read %d)\n",
   VAR_2->c.nr, VAR_3);
 }

 FUNC_1 (0x4400 + VAR_4, VAR_0);
 FUNC_2 (10);
 FUNC_1 (0x4410 + VAR_4, VAR_0);
 FUNC_2 (1);
 FUNC_1 (VAR_4, VAR_0);
 FUNC_2 (1);
 VAR_3 = FUNC_0 (VAR_0);

 if ((((VAR_3 >> 18) & 0x01) != 0) || (((VAR_3 >> 19) & 0x01) != 0)) {
  FUNC_3("%d: Adlink RTV-24 initialisation(2) ERROR_CPLD_Check_Failed (read %d)\n",
   VAR_2->c.nr, VAR_3);

  return;
 }

 FUNC_3("%d: Adlink RTV-24 initialisation complete\n", VAR_2->c.nr);
}

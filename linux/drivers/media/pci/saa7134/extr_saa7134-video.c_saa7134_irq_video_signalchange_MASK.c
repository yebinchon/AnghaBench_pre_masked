
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct saa7134_dev {int nosignal; int automute; TYPE_1__* mops; scalar_t__ ctl_automute; } ;
struct TYPE_2__ {int (* signal_change ) (struct saa7134_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (char*,char*,char*,char const*) ;

void FUNC_7(struct saa7134_dev *VAR_4)
{
 static const char *VAR_5[] = {
  "(no signal)", "NTSC", "PAL", "SECAM" };
 u32 VAR_6,VAR_7;

 VAR_6 = FUNC_3(VAR_0);
 VAR_7 = FUNC_3(VAR_1);
 FUNC_6("DCSDT: pll: %s, sync: %s, norm: %s\n",
  (VAR_6 & 0x40) ? "not locked" : "locked",
  (VAR_7 & 0x40) ? "no" : "yes",
  VAR_5[VAR_6 & 0x03]);
 VAR_4->nosignal = (VAR_6 & 0x40) || (VAR_7 & 0x40) || !(VAR_7 & 0x1);

 if (VAR_4->nosignal) {

  if (VAR_4->ctl_automute)
   VAR_4->automute = 1;
  FUNC_1(VAR_4);
 } else {

  FUNC_0(VAR_4);
 }

 if ((VAR_7 & 0x80) && !VAR_3 && !VAR_4->nosignal)
  FUNC_2(VAR_2, 0x20);
 else
  FUNC_4(VAR_2, 0x20);

 if (VAR_4->mops && VAR_4->mops->signal_change)
  VAR_4->mops->signal_change(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hvsi_priv {unsigned short mctrl; int termno; } ;
struct TYPE_2__ {int len; int type; } ;
struct hvsi_control {TYPE_1__ hdr; void* word; void* mask; int verb; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hvsi_priv*,TYPE_1__*) ;
 int FUNC_3 (char*,int ,char*) ;

int FUNC_4(struct hvsi_priv *VAR_4, int VAR_5)
{
 struct hvsi_control VAR_6;
 unsigned short VAR_7;

 VAR_7 = VAR_4->mctrl;
 if (VAR_5)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;
 if (VAR_7 == VAR_4->mctrl)
  return 0;
 VAR_4->mctrl = VAR_7;

 FUNC_3("HVSI@%x: %s DTR...\n", VAR_4->termno,
   VAR_5 ? "Setting" : "Clearing");

 VAR_6.hdr.type = VAR_3,
 VAR_6.hdr.len = sizeof(struct hvsi_control);
 VAR_6.verb = FUNC_0(VAR_2);
 VAR_6.mask = FUNC_1(VAR_0);
 VAR_6.word = FUNC_1(VAR_5 ? VAR_0 : 0);
 return FUNC_2(VAR_4, &VAR_6.hdr);
}

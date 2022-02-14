
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_priv {TYPE_2__* ieee; } ;
struct TYPE_3__ {int level; int flags; int active_key; } ;
struct TYPE_4__ {TYPE_1__ sec; int host_mc_decrypt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct ipw_priv*,int ,int ) ;
 int FUNC_1 (struct ipw_priv*,int ) ;
 int FUNC_2 (struct ipw_priv*,int) ;
 int FUNC_3 (struct ipw_priv*,int) ;

__attribute__((used)) static void FUNC_4(struct ipw_priv *VAR_5)
{
 switch (VAR_5->ieee->sec.level) {
 case 128:
  if (VAR_5->ieee->sec.flags & VAR_4)
   FUNC_0(VAR_5,
         VAR_0,
         VAR_5->ieee->sec.active_key);

  if (!VAR_5->ieee->host_mc_decrypt)
   FUNC_1(VAR_5, VAR_2);
  break;
 case 129:
  if (VAR_5->ieee->sec.flags & VAR_4)
   FUNC_0(VAR_5,
         VAR_1,
         VAR_5->ieee->sec.active_key);
  break;
 case 130:
  FUNC_1(VAR_5, VAR_3);
  FUNC_3(VAR_5, VAR_5->ieee->sec.level);
  FUNC_2(VAR_5, VAR_5->ieee->sec.level);
  break;
 case 131:
 default:
  break;
 }
}

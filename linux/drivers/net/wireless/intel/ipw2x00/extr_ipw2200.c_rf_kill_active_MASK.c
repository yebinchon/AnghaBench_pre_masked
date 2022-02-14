
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_priv {int status; TYPE_2__* ieee; } ;
struct TYPE_3__ {int wiphy; } ;
struct TYPE_4__ {TYPE_1__ wdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_priv*,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct ipw_priv *VAR_1)
{
 if (0 == (FUNC_0(VAR_1, 0x30) & 0x10000)) {
  VAR_1->status |= VAR_0;
  FUNC_1(VAR_1->ieee->wdev.wiphy, 1);
 } else {
  VAR_1->status &= ~VAR_0;
  FUNC_1(VAR_1->ieee->wdev.wiphy, 0);
 }

 return (VAR_1->status & VAR_0) ? 1 : 0;
}

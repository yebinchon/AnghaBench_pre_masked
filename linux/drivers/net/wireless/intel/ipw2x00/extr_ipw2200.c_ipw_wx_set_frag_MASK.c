
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; int fixed; scalar_t__ disabled; } ;
union iwreq_data {TYPE_2__ frag; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; TYPE_1__* ieee; } ;
struct TYPE_3__ {int fts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ipw_priv*,int) ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
      struct iw_request_info *VAR_5,
      union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw_priv *VAR_8 = FUNC_2(VAR_4);
 FUNC_3(&VAR_8->mutex);
 if (VAR_6->frag.disabled || !VAR_6->frag.fixed)
  VAR_8->ieee->fts = VAR_0;
 else {
  if (VAR_6->frag.value < VAR_3 ||
      VAR_6->frag.value > VAR_2) {
   FUNC_4(&VAR_8->mutex);
   return -VAR_1;
  }

  VAR_8->ieee->fts = VAR_6->frag.value & ~0x1;
 }

 FUNC_1(VAR_8, VAR_6->frag.value);
 FUNC_4(&VAR_8->mutex);
 FUNC_0("SET Frag Threshold -> %d\n", VAR_6->frag.value);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hvc_struct {size_t vtermno; } ;
struct TYPE_2__ {int mctrl; } ;
struct hvc_opal_priv {TYPE_1__ hvsi; } ;


 int VAR_0 ;
 struct hvc_opal_priv** VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hvc_struct *VAR_2)
{
 struct hvc_opal_priv *VAR_3 = VAR_1[VAR_2->vtermno];

 if (!VAR_3)
  return -VAR_0;
 return VAR_3->hvsi.mctrl;
}

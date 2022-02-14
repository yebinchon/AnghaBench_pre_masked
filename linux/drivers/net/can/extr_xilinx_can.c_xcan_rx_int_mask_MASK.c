
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct xcan_priv {TYPE_1__ devtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(const struct xcan_priv *VAR_3)
{



 if (VAR_3->devtype.flags & VAR_0)
  return VAR_2;
 else
  return VAR_1;
}

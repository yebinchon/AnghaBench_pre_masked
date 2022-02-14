
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qm_fd {int status; } ;
struct dpaa_priv {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(const struct dpaa_priv *VAR_4, const struct qm_fd *VAR_5)
{




 if ((VAR_4->net_dev->features & VAR_3) &&
     (FUNC_0(VAR_5->status) & VAR_2))
  return VAR_1;





 return VAR_0;
}

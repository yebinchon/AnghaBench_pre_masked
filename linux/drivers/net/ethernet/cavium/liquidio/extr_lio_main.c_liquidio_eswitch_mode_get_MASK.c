
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct octeon_device {int eswitch_mode; } ;
struct lio_devlink_priv {struct octeon_device* oct; } ;
struct devlink {int dummy; } ;


 struct lio_devlink_priv* FUNC_0 (struct devlink*) ;

__attribute__((used)) static int
FUNC_1(struct devlink *VAR_0, u16 *VAR_1)
{
 struct lio_devlink_priv *VAR_2;
 struct octeon_device *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = VAR_2->oct;

 *VAR_1 = VAR_3->eswitch_mode;

 return 0;
}

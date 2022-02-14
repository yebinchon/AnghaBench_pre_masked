
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_dev_addr {int dummy; } ;
struct TYPE_2__ {int mutex; struct uwb_dev_addr dev_addr; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwb_rc*,struct uwb_dev_addr const*,int ) ;

int FUNC_3(struct uwb_rc *VAR_2,
   const struct uwb_dev_addr *VAR_3)
{
 int VAR_4 = -VAR_0;
 FUNC_0(&VAR_2->uwb_dev.mutex);
 VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_1);
 VAR_2->uwb_dev.dev_addr = *VAR_3;
 FUNC_1(&VAR_2->uwb_dev.mutex);
 return VAR_4;
}

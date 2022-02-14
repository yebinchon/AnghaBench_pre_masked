
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct uwb_rc {int beaconing_forced; TYPE_1__ uwb_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwb_rc*,int ) ;
 int FUNC_3 (struct uwb_rc*) ;

int FUNC_4(struct uwb_rc *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_0->uwb_dev.mutex);

 VAR_0->beaconing_forced = VAR_1;
 VAR_2 = FUNC_2(VAR_0, FUNC_3(VAR_0));

 FUNC_1(&VAR_0->uwb_dev.mutex);
 return VAR_2;
}

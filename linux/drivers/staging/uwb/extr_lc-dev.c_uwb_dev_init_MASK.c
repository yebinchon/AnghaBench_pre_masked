
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; } ;
struct uwb_dev {int streams; int mac_addr; int dev_addr; TYPE_1__ dev; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct uwb_dev *VAR_2)
{
 FUNC_2(&VAR_2->mutex);
 FUNC_1(&VAR_2->dev);
 VAR_2->dev.release = VAR_1;
 FUNC_3(&VAR_2->dev_addr);
 FUNC_4(&VAR_2->mac_addr);
 FUNC_0(VAR_2->streams, VAR_0);
}

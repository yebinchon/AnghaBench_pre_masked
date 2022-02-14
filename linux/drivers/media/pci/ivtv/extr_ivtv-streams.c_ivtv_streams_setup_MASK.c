
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ivtv {TYPE_2__* streams; } ;
struct TYPE_3__ {int * v4l2_dev; } ;
struct TYPE_4__ {TYPE_1__ vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ivtv*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ivtv*) ;

int FUNC_3(struct ivtv *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

  if (FUNC_0(VAR_2, VAR_3))
   break;

  if (VAR_2->streams[VAR_3].vdev.v4l2_dev == ((void*)0))
   continue;


  if (FUNC_1(&VAR_2->streams[VAR_3]))
   break;
 }
 if (VAR_3 == VAR_1)
  return 0;


 FUNC_2(VAR_2);
 return -VAR_0;
}

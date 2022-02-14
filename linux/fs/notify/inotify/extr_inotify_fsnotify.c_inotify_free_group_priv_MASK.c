
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ucounts; int idr; } ;
struct fsnotify_group {TYPE_1__ inotify_data; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,struct fsnotify_group*) ;

__attribute__((used)) static void FUNC_3(struct fsnotify_group *VAR_1)
{

 FUNC_2(&VAR_1->inotify_data.idr, VAR_0, VAR_1);
 FUNC_1(&VAR_1->inotify_data.idr);
 if (VAR_1->inotify_data.ucounts)
  FUNC_0(VAR_1->inotify_data.ucounts);
}

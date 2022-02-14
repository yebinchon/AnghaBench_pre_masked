
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xencons_info {int * intf; } ;
struct TYPE_4__ {int evtchn; } ;
struct TYPE_5__ {TYPE_1__ domU; } ;
struct TYPE_6__ {TYPE_2__ console; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xencons_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct xencons_info* FUNC_3 (int ) ;
 int FUNC_4 () ;
 TYPE_3__* VAR_4 ;
 int FUNC_5 (struct xencons_info*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(void)
{
 struct xencons_info *VAR_6;

 if (!FUNC_4())
  return -VAR_0;

 if (!VAR_4->console.domU.evtchn)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3);
 if (!VAR_6) {
  VAR_6 = FUNC_0(sizeof(struct xencons_info), VAR_2);
  if (!VAR_6)
   return -VAR_1;
 } else if (VAR_6->intf != ((void*)0)) {

  return 0;
 }
 FUNC_1(&VAR_5);
 FUNC_5(VAR_6, VAR_3);
 FUNC_2(&VAR_5);

 return 0;
}

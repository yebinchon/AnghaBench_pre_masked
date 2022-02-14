
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct switchtec_ntb {int link_is_up; TYPE_2__* stdev; int ntb; TYPE_1__* peer_shared; TYPE_3__* self_shared; } ;
struct TYPE_6__ {int link_sta; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct switchtec_ntb*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct switchtec_ntb*,int ,int ) ;
 int FUNC_5 (struct switchtec_ntb*) ;

__attribute__((used)) static void FUNC_6(struct switchtec_ntb *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_3->link_is_up;

 VAR_4 = VAR_3->self_shared->link_sta;
 if (VAR_4) {
  u64 VAR_6 = FUNC_2(&VAR_3->peer_shared->magic);

  if ((VAR_6 & 0xFFFFFFFF) == VAR_2)
   VAR_4 = VAR_6 >> 32;
  else
   VAR_4 = 0;
 }

 VAR_3->link_is_up = VAR_4;
 FUNC_5(VAR_3);

 if (VAR_4 != VAR_5) {
  FUNC_4(VAR_3, VAR_0, VAR_1);
  FUNC_3(&VAR_3->ntb);
  FUNC_1(&VAR_3->stdev->dev, "ntb link %s\n",
    VAR_4 ? "up" : "down");

  if (VAR_4)
   FUNC_0(VAR_3);
 }
}

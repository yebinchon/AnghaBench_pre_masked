
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dev; int mc; } ;
struct TYPE_6__ {int slaves; scalar_t__ dual_emac; } ;
struct cpsw_common {TYPE_3__ data; TYPE_2__* slaves; struct cpsw_ale* ale; } ;
struct cpsw_ale {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ndev; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct net_device*,int *) ;
 scalar_t__ FUNC_1 (struct cpsw_ale*,int ,int ) ;
 int FUNC_2 (struct cpsw_ale*,int,int ,int) ;
 int FUNC_3 (struct cpsw_ale*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 unsigned long VAR_8 ;
 struct cpsw_common* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_9, bool VAR_10)
{
 struct cpsw_common *VAR_11 = FUNC_7(VAR_9);
 struct cpsw_ale *VAR_12 = VAR_11->ale;
 int VAR_13;

 if (VAR_11->data.dual_emac) {
  bool VAR_14 = 0;





  for (VAR_13 = 0; VAR_13 < VAR_11->data.slaves; VAR_13++)
   if (VAR_11->slaves[VAR_13].ndev->flags & VAR_7)
    VAR_14 = 1;

  if (!VAR_10 && VAR_14) {
   VAR_10 = 1;
   FUNC_6(&VAR_9->dev, "promiscuity not disabled as the other interface is still in promiscuity mode\n");
  }

  if (VAR_10) {

   FUNC_2(VAR_12, 0, VAR_2, 1);

   FUNC_5(&VAR_9->dev, "promiscuity enabled\n");
  } else {

   FUNC_2(VAR_12, 0, VAR_2, 0);
   FUNC_5(&VAR_9->dev, "promiscuity disabled\n");
  }
 } else {
  if (VAR_10) {
   unsigned long VAR_15 = VAR_8 + VAR_6;


   for (VAR_13 = 0; VAR_13 <= VAR_11->data.slaves; VAR_13++) {
    FUNC_2(VAR_12, VAR_13,
           VAR_4, 1);
    FUNC_2(VAR_12, VAR_13,
           VAR_5, 1);
   }


   FUNC_2(VAR_12, 0, VAR_0, 1);
   do {
    FUNC_4();
    if (FUNC_1(VAR_12, 0, VAR_0))
     break;
   } while (FUNC_8(VAR_15, VAR_8));
   FUNC_2(VAR_12, 0, VAR_0, 1);


   FUNC_3(VAR_12, VAR_1, -1);
   FUNC_0(&VAR_9->mc, VAR_9, ((void*)0));


   FUNC_2(VAR_12, 0, VAR_3, 1);
   FUNC_5(&VAR_9->dev, "promiscuity enabled\n");
  } else {

   FUNC_2(VAR_12, 0, VAR_3, 0);


   for (VAR_13 = 0; VAR_13 <= VAR_11->data.slaves; VAR_13++) {
    FUNC_2(VAR_12, VAR_13,
           VAR_4, 0);
    FUNC_2(VAR_12, VAR_13,
           VAR_5, 0);
   }
   FUNC_5(&VAR_9->dev, "promiscuity disabled\n");
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ arp_interval; } ;
struct bonding {int dev; int arp_work; int wq; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct bonding*) ;
 scalar_t__ FUNC_1 (struct bonding*) ;
 int FUNC_2 (struct bonding*) ;
 int FUNC_3 (struct bonding*) ;
 int FUNC_4 (struct bonding*) ;
 int FUNC_5 (struct bonding*) ;
 int FUNC_6 (struct bonding*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(struct bonding *VAR_1)
{
 bool VAR_2 = 0;
 bool VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_8(VAR_1->params.arp_interval);

 if (!FUNC_3(VAR_1))
  goto re_arm;

 FUNC_10();

 VAR_2 = FUNC_4(VAR_1);

 if (FUNC_1(VAR_1)) {
  FUNC_11();


  if (!FUNC_12()) {
   VAR_4 = 1;
   VAR_2 = 0;
   goto re_arm;
  }

  FUNC_0(VAR_1);

  FUNC_13();
  FUNC_10();
 }

 VAR_3 = FUNC_2(VAR_1);
 FUNC_11();

re_arm:
 if (VAR_1->params.arp_interval)
  FUNC_9(VAR_1->wq, &VAR_1->arp_work, VAR_4);

 if (VAR_2 || VAR_3) {
  if (!FUNC_12())
   return;

  if (VAR_2)
   FUNC_7(VAR_0,
       VAR_1->dev);
  if (VAR_3) {
   FUNC_6(VAR_1);
   FUNC_5(VAR_1);
  }

  FUNC_13();
 }
}

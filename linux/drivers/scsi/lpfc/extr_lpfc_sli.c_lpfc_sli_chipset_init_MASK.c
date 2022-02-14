
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {scalar_t__ HAregaddr; scalar_t__ HCregaddr; void* link_state; scalar_t__ MBslimaddr; int HSregaddr; TYPE_1__* pport; } ;
struct TYPE_2__ {int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

int
FUNC_6(struct lpfc_hba *VAR_9)
{
 uint32_t VAR_10, VAR_11 = 0;


 if (FUNC_1(VAR_9->HSregaddr, &VAR_10))
  return -VAR_0;


 VAR_11 = 0;
 while ((VAR_10 & (VAR_3 | VAR_4)) != (VAR_3 | VAR_4)) {
  if (VAR_11++ >= 200) {


   FUNC_0(VAR_9, VAR_5, VAR_6,
     "0436 Adapter failed to init, "
     "timeout, status reg x%x, "
     "FW Data: A8 x%x AC x%x\n", VAR_10,
     FUNC_4(VAR_9->MBslimaddr + 0xa8),
     FUNC_4(VAR_9->MBslimaddr + 0xac));
   VAR_9->link_state = VAR_7;
   return -VAR_1;
  }


  if (VAR_10 & VAR_2) {



   FUNC_0(VAR_9, VAR_5, VAR_6,
     "0437 Adapter failed to init, "
     "chipset, status reg x%x, "
     "FW Data: A8 x%x AC x%x\n", VAR_10,
     FUNC_4(VAR_9->MBslimaddr + 0xa8),
     FUNC_4(VAR_9->MBslimaddr + 0xac));
   VAR_9->link_state = VAR_7;
   return -VAR_0;
  }

  if (VAR_11 <= 10)
   FUNC_3(10);
  else if (VAR_11 <= 100)
   FUNC_3(100);
  else
   FUNC_3(1000);

  if (VAR_11 == 150) {

   VAR_9->pport->port_state = VAR_8;
   FUNC_2(VAR_9);
  }

  if (FUNC_1(VAR_9->HSregaddr, &VAR_10))
   return -VAR_0;
 }


 if (VAR_10 & VAR_2) {


  FUNC_0(VAR_9, VAR_5, VAR_6,
    "0438 Adapter failed to init, chipset, "
    "status reg x%x, "
    "FW Data: A8 x%x AC x%x\n", VAR_10,
    FUNC_4(VAR_9->MBslimaddr + 0xa8),
    FUNC_4(VAR_9->MBslimaddr + 0xac));
  VAR_9->link_state = VAR_7;
  return -VAR_0;
 }


 FUNC_5(0, VAR_9->HCregaddr);
 FUNC_4(VAR_9->HCregaddr);


 FUNC_5(0xffffffff, VAR_9->HAregaddr);
 FUNC_4(VAR_9->HAregaddr);
 return 0;
}

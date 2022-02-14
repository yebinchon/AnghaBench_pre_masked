
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ei_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ dmaing; scalar_t__ txing; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long VAR_6 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ei_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ei_device*,int ,struct net_device*,char*,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 unsigned long VAR_8 = VAR_6;
 struct ei_device *VAR_9 = FUNC_2(VAR_7);

 FUNC_3(VAR_9, VAR_5, VAR_7, "resetting the 8390 t=%ld...\n",
    VAR_6);

 FUNC_4(FUNC_0(VAR_2 + VAR_3), VAR_2 + VAR_3);

 VAR_4.txing = 0;
 VAR_4.dmaing = 0;


 while ((FUNC_0(VAR_2+VAR_0) & VAR_1) == 0)
  if (VAR_6 - VAR_8 > 2) {
   FUNC_1(VAR_7, "ne2k_pci_reset_8390() did not complete.\n");
   break;
  }
 FUNC_4(VAR_1, VAR_2 + VAR_0);
}

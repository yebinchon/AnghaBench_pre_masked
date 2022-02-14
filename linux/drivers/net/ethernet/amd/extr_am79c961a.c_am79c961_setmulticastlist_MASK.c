
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int base_addr; } ;
struct dev_priv {int chip_lock; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct net_device*,int*) ;
 struct dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8 (struct net_device *VAR_6)
{
 struct dev_priv *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;
 u16 VAR_9[4], VAR_10 = FUNC_1(VAR_6, VAR_9);
 int VAR_11, VAR_12;

 FUNC_5(&VAR_7->chip_lock, VAR_8);

 VAR_12 = FUNC_4(VAR_6->base_addr, VAR_0) & VAR_1;

 if (!VAR_12) {



  FUNC_7(VAR_6->base_addr, VAR_2, VAR_3);




  while ((FUNC_4(VAR_6->base_addr, VAR_2) & VAR_3) == 0) {
   FUNC_6(&VAR_7->chip_lock, VAR_8);
   FUNC_3();
   FUNC_5(&VAR_7->chip_lock, VAR_8);
  }
 }




 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++)
  FUNC_7(VAR_6->base_addr, VAR_11 + VAR_4, VAR_9[VAR_11]);




 FUNC_7(VAR_6->base_addr, VAR_5, VAR_10);

 if (!VAR_12) {



  FUNC_7(VAR_6->base_addr, VAR_2, 0);
 }

 FUNC_6(&VAR_7->chip_lock, VAR_8);
}

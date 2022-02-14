
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct octeon_ethernet {int port_periodic_work; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct net_device** VAR_7 ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct net_device*) ;
 struct octeon_ethernet* FUNC_11 (struct net_device*) ;
 int VAR_10 ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_11)
{
 int VAR_12;

 FUNC_6();

 FUNC_0(&VAR_8);
 FUNC_1(&VAR_9);

 FUNC_3();
 FUNC_4();

 FUNC_8();


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  if (VAR_7[VAR_12]) {
   struct net_device *VAR_13 = VAR_7[VAR_12];
   struct octeon_ethernet *VAR_14 = FUNC_11(VAR_13);

   FUNC_1(&VAR_14->port_periodic_work);

   FUNC_5(VAR_13);
   FUNC_12(VAR_13);
   FUNC_10(VAR_13);
   VAR_7[VAR_12] = ((void*)0);
  }
 }

 FUNC_9();

 FUNC_7();


 FUNC_2(VAR_2, VAR_3,
         VAR_10);
 FUNC_2(VAR_4, VAR_5,
         VAR_10);
 if (VAR_0 != VAR_2)
  FUNC_2(VAR_0,
          VAR_1, 128);
 return 0;
}

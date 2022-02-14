
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_over_errors; } ;
struct net_device {long base_addr; TYPE_1__ stats; } ;
struct ei_device {int dummy; } ;
struct axnet_dev {int duplex_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct axnet_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 struct ei_device* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ei_device*,int ,struct net_device*,char*) ;
 int FUNC_6 (int,scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_15)
{
 struct axnet_dev *VAR_16 = FUNC_0(VAR_15);
 long VAR_17 = VAR_15->base_addr;
 unsigned char VAR_18, VAR_19 = 0;
 struct ei_device *VAR_20 = FUNC_4(VAR_15);





 VAR_18 = FUNC_2(VAR_17+VAR_0) & VAR_5;
 FUNC_6(VAR_1+VAR_2+VAR_4, VAR_17+VAR_0);

 FUNC_5(VAR_20, VAR_14, VAR_15, "Receiver overrun\n");
 VAR_15->stats.rx_over_errors++;






 FUNC_3(2);




 FUNC_6(0x00, VAR_17+VAR_10);
 FUNC_6(0x00, VAR_17+VAR_9);






 if (VAR_18)
 {
  unsigned char VAR_21 = FUNC_2(VAR_17+VAR_8) & (VAR_12+VAR_13);
  if (!VAR_21)
   VAR_19 = 1;
 }





 FUNC_6(VAR_7, VAR_17 + VAR_11);
 FUNC_6(VAR_1 + VAR_2 + VAR_3, VAR_17 + VAR_0);




 FUNC_1(VAR_15);




 FUNC_6(VAR_6 | VAR_16->duplex_flag, VAR_17 + VAR_11);
 if (VAR_19)
      FUNC_6(VAR_1 + VAR_2 + VAR_3 + VAR_5, VAR_17 + VAR_0);
}

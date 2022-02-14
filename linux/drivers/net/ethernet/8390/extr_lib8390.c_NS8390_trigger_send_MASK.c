
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned long base_addr; } ;
struct ei_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 struct ei_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_8, unsigned int VAR_9,
        int VAR_10)
{
 unsigned long VAR_11 = VAR_8->base_addr;
 struct ei_device *VAR_12 __attribute((unused)) = FUNC_2(VAR_8);

 FUNC_1(VAR_1+VAR_2, VAR_11+VAR_0);

 if (FUNC_0(VAR_11 + VAR_0) & VAR_4) {
  FUNC_3(VAR_8, "trigger_send() called with the transmitter busy\n");
  return;
 }
 FUNC_1(VAR_9 & 0xff, VAR_11 + VAR_6);
 FUNC_1(VAR_9 >> 8, VAR_11 + VAR_5);
 FUNC_1(VAR_10, VAR_11 + VAR_7);
 FUNC_1(VAR_1+VAR_4+VAR_3, VAR_11+VAR_0);
}

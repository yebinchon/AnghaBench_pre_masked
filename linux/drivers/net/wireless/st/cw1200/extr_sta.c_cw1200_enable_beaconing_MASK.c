
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_beacon_transmit {int enable_beaconing; } ;
struct cw1200_common {int dummy; } ;


 int FUNC_0 (struct cw1200_common*,struct wsm_beacon_transmit*) ;

__attribute__((used)) static int FUNC_1(struct cw1200_common *VAR_0,
       bool VAR_1)
{
 struct wsm_beacon_transmit VAR_2 = {
  .enable_beaconing = VAR_1,
 };

 return FUNC_0(VAR_0, &VAR_2);
}

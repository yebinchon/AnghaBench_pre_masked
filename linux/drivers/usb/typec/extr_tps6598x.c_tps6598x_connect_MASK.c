
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct typec_partner_desc {int usb_pd; int * identity; int accessory; } ;
struct tps6598x {int partner; int port; int partner_identity; } ;
typedef enum typec_pwr_opmode { ____Placeholder_typec_pwr_opmode } typec_pwr_opmode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct tps6598x*,int ,int *) ;
 int FUNC_7 (struct tps6598x*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct typec_partner_desc*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct tps6598x *VAR_3, u32 VAR_4)
{
 struct typec_partner_desc VAR_5;
 enum typec_pwr_opmode VAR_6;
 u16 VAR_7;
 int VAR_8;

 if (VAR_3->partner)
  return 0;

 VAR_8 = FUNC_6(VAR_3, VAR_0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = FUNC_2(VAR_7);

 VAR_5.usb_pd = VAR_6 == VAR_2;
 VAR_5.accessory = VAR_1;
 VAR_5.identity = ((void*)0);

 if (VAR_5.usb_pd) {
  VAR_8 = FUNC_7(VAR_3);
  if (VAR_8)
   return VAR_8;
  VAR_5.identity = &VAR_3->partner_identity;
 }

 FUNC_11(VAR_3->port, VAR_6);
 FUNC_12(VAR_3->port, FUNC_4(VAR_4));
 FUNC_13(VAR_3->port, FUNC_5(VAR_4));
 FUNC_10(VAR_3->port, FUNC_3(VAR_4));

 VAR_3->partner = FUNC_9(VAR_3->port, &VAR_5);
 if (FUNC_0(VAR_3->partner))
  return FUNC_1(VAR_3->partner);

 if (VAR_5.identity)
  FUNC_8(VAR_3->partner);

 return 0;
}

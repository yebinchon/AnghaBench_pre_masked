
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6598x_rx_identity_reg {int identity; } ;
struct tps6598x {int partner_identity; } ;
typedef int id ;


 int VAR_0 ;
 int FUNC_0 (struct tps6598x*,int ,struct tps6598x_rx_identity_reg*,int) ;

__attribute__((used)) static int FUNC_1(struct tps6598x *VAR_1)
{
 struct tps6598x_rx_identity_reg VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0,
      &VAR_2, sizeof(VAR_2));
 if (VAR_3)
  return VAR_3;

 VAR_1->partner_identity = VAR_2.identity;

 return 0;
}

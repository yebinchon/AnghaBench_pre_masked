
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int num_iqs; int num_oqs; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 struct lio* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct lio*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, int VAR_5)
{
 struct lio *VAR_6 = FUNC_1(VAR_4);
 struct octeon_device *VAR_7 = VAR_6->oct_dev;

 switch (VAR_5) {
 case 128:
  return (FUNC_0(VAR_3) +
   FUNC_0(VAR_2) * VAR_7->num_iqs +
   FUNC_0(VAR_1) * VAR_7->num_oqs);
 case 129:
  return FUNC_2(VAR_6);
 default:
  return -VAR_0;
 }
}

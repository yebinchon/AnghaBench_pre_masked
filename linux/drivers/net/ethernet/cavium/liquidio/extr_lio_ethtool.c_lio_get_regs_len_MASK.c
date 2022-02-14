
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int chip_id; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_3);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;

 switch (VAR_5->chip_id) {
 case 129:
  return VAR_1;
 case 128:
  return VAR_2;
 default:
  return VAR_0;
 }
}

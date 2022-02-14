
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int chip_id; } ;
struct lio {int netdev; struct octeon_device* oct_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (struct lio*,int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct lio *VAR_3)
{
 struct octeon_device *VAR_4 = VAR_3->oct_dev;

 switch (VAR_4->chip_id) {
 case 131:
 case 130:
  return FUNC_0(VAR_2);
 case 128:
 case 129:
  return -VAR_0;
 default:
  FUNC_1(VAR_3, VAR_1, VAR_3->netdev, "Unknown Chip !!\n");
  return -VAR_0;
 }
}

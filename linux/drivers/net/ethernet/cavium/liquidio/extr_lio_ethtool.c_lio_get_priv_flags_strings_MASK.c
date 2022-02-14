
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct octeon_device {int chip_id; } ;
struct lio {int netdev; struct octeon_device* oct_dev; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (struct lio*,int ,int ,char*) ;
 char** VAR_2 ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_3(struct lio *VAR_3, u8 *VAR_4)
{
 struct octeon_device *VAR_5 = VAR_3->oct_dev;
 int VAR_6;

 switch (VAR_5->chip_id) {
 case 131:
 case 130:
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   FUNC_2(VAR_4, "%s", VAR_2[VAR_6]);
   VAR_4 += VAR_0;
  }
  break;
 case 128:
 case 129:
  break;
 default:
  FUNC_1(VAR_3, VAR_1, VAR_3->netdev, "Unknown Chip !!\n");
  break;
 }
}

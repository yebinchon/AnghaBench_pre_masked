
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; scalar_t__ snapshot_needs_reset; } ;
struct gspca_dev {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sd*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 if (!VAR_3->snapshot_needs_reset)
  return;




 VAR_3->snapshot_needs_reset = 0;

 switch (VAR_3->bridge) {
 case 132:
 case 131:
  FUNC_0(VAR_3, VAR_1, 0x02);
  FUNC_0(VAR_3, VAR_1, 0x00);
  break;
 case 130:
 case 129:
  FUNC_0(VAR_3, VAR_1, 0x02);
  FUNC_0(VAR_3, VAR_1, 0x01);
  break;
 case 128:
  FUNC_0(VAR_3, VAR_0, 0x40);
  FUNC_0(VAR_3, VAR_0, 0x00);
  break;
 }
}

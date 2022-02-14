
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bus_type; } ;
struct ov5640_dev {TYPE_1__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ov5640_dev*) ;
 int FUNC_1 (struct ov5640_dev*) ;
 int FUNC_2 (struct ov5640_dev*) ;
 int FUNC_3 (struct ov5640_dev*,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct ov5640_dev *VAR_4, bool VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6)
   goto power_off;


  if (VAR_4->ep.bus_type != VAR_3)
   return 0;
  VAR_6 = FUNC_3(VAR_4,
           VAR_0, 0x40);
  if (VAR_6)
   goto power_off;
  VAR_6 = FUNC_3(VAR_4,
           VAR_1, 0x24);
  if (VAR_6)
   goto power_off;
  VAR_6 = FUNC_3(VAR_4,
           VAR_2, 0x70);
  if (VAR_6)
   goto power_off;


  FUNC_4(500, 1000);

 } else {
  if (VAR_4->ep.bus_type == VAR_3) {

   FUNC_3(VAR_4,
      VAR_0, 0x58);
   FUNC_3(VAR_4,
      VAR_1, 0x04);
   FUNC_3(VAR_4,
      VAR_2, 0x00);
  }

  FUNC_1(VAR_4);
 }

 return 0;

power_off:
 FUNC_1(VAR_4);
 return VAR_6;
}

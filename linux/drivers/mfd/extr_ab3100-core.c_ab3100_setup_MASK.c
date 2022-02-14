
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ab3100 {int chip_id; int dev; } ;
struct TYPE_3__ {int setting; int abreg; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct ab3100*,int ,int ) ;
 int FUNC_2 (struct ab3100*,int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct ab3100 *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = FUNC_1(VAR_1,
       VAR_0[VAR_3].abreg,
       VAR_0[VAR_3].setting);
  if (VAR_2)
   goto exit_no_setup;
 }






 if (VAR_1->chip_id == 0xc4) {
  FUNC_3(VAR_1->dev,
    "AB3100 P1E variant detected forcing chip to 32KHz\n");
  VAR_2 = FUNC_2(VAR_1,
   0x02, 0x08);
 }

 exit_no_setup:
 return VAR_2;
}

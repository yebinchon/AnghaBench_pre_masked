
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;
struct cmd {int member_0; int const member_1; } ;


 int FUNC_0 (struct cmd const*) ;
 int VAR_0 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_3 (struct gspca_dev*,int,int const) ;
 int FUNC_4 (struct gspca_dev*,struct cmd const*,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_1)
{
 static const struct cmd VAR_2[] = {
  {0x0100, 130},
  {0x0000, 136},
  {0x0100, 137},
  {0x0004, 129},
  {0x0001, 128},
  {0x0008, 135},
  {0x0001, 134},
  {0x0004, 132},
  {0x0040, 133},
  {0x0000, 137},
  {0x0100, 137},
 };
 static const struct cmd VAR_3[] = {
  {0x0000, 137},
  {0x0301, 0x31AE},
  {0x0805, 0x3064},
  {0x0071, 0x3170},
  {0x10DE, 131},
  {0x0000, 136},
  {0x0010, 133},
  {0x0100, 136},
 };

 FUNC_2(VAR_1, VAR_0, "Encrypted begin, w = %u\n\n",
    VAR_1->pixfmt.width);
 FUNC_4(VAR_1, VAR_2, FUNC_0(VAR_2));
 FUNC_1(VAR_1);
 FUNC_4(VAR_1, VAR_3, FUNC_0(VAR_3));
 FUNC_3(VAR_1, 0x0100, 137);
 FUNC_3(VAR_1, 0x0000, 137);

 FUNC_2(VAR_1, VAR_0, "Encrypted end\n\n");
}

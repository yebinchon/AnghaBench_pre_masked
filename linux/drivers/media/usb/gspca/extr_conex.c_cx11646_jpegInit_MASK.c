
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev*VAR_1)
{
 int VAR_2;
 int VAR_3;

 FUNC_2(VAR_1, 0x00c0, 0x01);
 FUNC_2(VAR_1, 0x00c3, 0x00);
 FUNC_2(VAR_1, 0x00c0, 0x00);
 FUNC_0(VAR_1, 0x0001, 1);
 VAR_3 = 8;
 for (VAR_2 = 0; VAR_2 < 79; VAR_2++) {
  if (VAR_2 == 78)
   VAR_3 = 6;
  FUNC_1(VAR_1, 0x0008, VAR_0[VAR_2], VAR_3);
 }
 FUNC_0(VAR_1, 0x0002, 1);
 FUNC_2(VAR_1, 0x0055, 0x14);
}

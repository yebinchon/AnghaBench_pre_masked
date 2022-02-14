
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int,int,int,int,int,int ) ;
 int FUNC_3 (struct gspca_dev*,int,int,int,int,int,int *) ;
 int * VAR_2 ;
 int FUNC_4 (struct gspca_dev*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_4)
{
 FUNC_4(VAR_4, VAR_3,
   FUNC_0(VAR_3));

 FUNC_3(VAR_4, 0x40, 3, 0x0000, 0x0200, 12, VAR_2);

 FUNC_1(VAR_4);

 FUNC_2(VAR_4, 0xc0, 2, 0x0000, 0x0006, 1, VAR_1);

 FUNC_3(VAR_4, 0x40, 1, 0x00ef, 0x0006, 0, ((void*)0));

 FUNC_2(VAR_4, 0xc0, 2, 0x0000, 0x0000, 1, VAR_0);

 FUNC_3(VAR_4, 0x40, 1, 0x0051, 0x0000, 0, ((void*)0));


 return 0;
}

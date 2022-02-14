
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int reg08; int jpeg_hdr; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 FUNC_0(VAR_3->jpeg_hdr, VAR_1[VAR_3->reg08 >> 1]);
 FUNC_1(VAR_2, VAR_3->reg08, VAR_0);
}

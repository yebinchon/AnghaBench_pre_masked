
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,int) ;
 int FUNC_1 (struct gspca_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;

 if (VAR_4->bridge == VAR_0)
  FUNC_0(VAR_3, VAR_2, 0x03);
 FUNC_1(VAR_3, 0);
 FUNC_0(VAR_3, VAR_1, 0x00);
}

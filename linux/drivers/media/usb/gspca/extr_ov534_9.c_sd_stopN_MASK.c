
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 if (((struct sd *)VAR_1)->sensor == VAR_0) {
  FUNC_0(VAR_1, 0xe0, 0x01);

  return;
 }
 FUNC_0(VAR_1, 0xe0, 0x01);
 FUNC_1(VAR_1, 0);
 FUNC_0(VAR_1, 0xe0, 0x00);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {scalar_t__ sensor_page; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, u8 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 if (VAR_1 != VAR_2->sensor_page) {
  FUNC_0(VAR_0, 0xf0, VAR_1);
  VAR_2->sensor_page = VAR_1;
 }
}

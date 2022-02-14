
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_w_data {int len; int data; int flags; int reg; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0,
 const struct sensor_w_data *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_3].reg, VAR_1[VAR_3].flags,
       VAR_1[VAR_3].data, VAR_1[VAR_3].len);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}

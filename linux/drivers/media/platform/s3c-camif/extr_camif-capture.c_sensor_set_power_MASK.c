
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_sensor {int power_count; int sd; } ;
struct camif_dev {struct cam_sensor sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct camif_dev *VAR_3, int VAR_4)
{
 struct cam_sensor *VAR_5 = &VAR_3->sensor;
 int VAR_6 = 0;

 if (VAR_3->sensor.power_count == !VAR_4)
  VAR_6 = FUNC_1(VAR_5->sd, VAR_1, VAR_2, VAR_4);
 if (VAR_6 == -VAR_0)
  VAR_6 = 0;
 if (!VAR_6)
  VAR_5->power_count += VAR_4 ? 1 : -1;

 FUNC_0("on: %d, power_count: %d, err: %d\n",
   VAR_4, VAR_5->power_count, VAR_6);

 return VAR_6;
}

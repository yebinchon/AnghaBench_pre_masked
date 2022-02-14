
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_sensor {int stream_count; int sd; } ;
struct camif_dev {struct cam_sensor sensor; } ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct camif_dev *VAR_2, int VAR_3)
{
 struct cam_sensor *VAR_4 = &VAR_2->sensor;
 int VAR_5 = 0;

 if (VAR_2->sensor.stream_count == !VAR_3)
  VAR_5 = FUNC_1(VAR_4->sd, VAR_1, VAR_0, VAR_3);
 if (!VAR_5)
  VAR_4->stream_count += VAR_3 ? 1 : -1;

 FUNC_0("on: %d, stream_count: %d, err: %d\n",
   VAR_3, VAR_4->stream_count, VAR_5);

 return VAR_5;
}

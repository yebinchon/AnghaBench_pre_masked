
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dev; } ;
struct v4l2_sliced_vbi_cap {int service_set; int ** service_lines; } ;
struct TYPE_2__ {int ini_line; int end_line; int vbi_type; } ;
struct i2c_vbi_ram_value {TYPE_1__ type; } ;


 int FUNC_0 (struct i2c_vbi_ram_value*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ,char*) ;
 int FUNC_2 (struct v4l2_sliced_vbi_cap*,int ,int) ;
 struct i2c_vbi_ram_value* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
    struct v4l2_sliced_vbi_cap *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1(VAR_2->dev, 1, VAR_0, "g_sliced_vbi_cap\n");
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  const struct i2c_vbi_ram_value *VAR_6 = &VAR_1[VAR_5];

  if (!VAR_6->type.vbi_type)
   continue;

  for (VAR_4 = VAR_6->type.ini_line;
       VAR_4 <= VAR_6->type.end_line;
       VAR_4++) {
   VAR_3->service_lines[0][VAR_4] |= VAR_6->type.vbi_type;
  }
  VAR_3->service_set |= VAR_6->type.vbi_type;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct smiapp_sensor {int * limits; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int what; int addr; } ;
struct TYPE_3__ {int sd; } ;


 unsigned int FUNC_0 (size_t const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct smiapp_sensor*,size_t const*,unsigned int) ;
 TYPE_2__* VAR_2 ;
 struct i2c_client* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct smiapp_sensor *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(&VAR_3->src->sd);
 static u32 const VAR_5[] = {
  132,
  136,
  128,
  134,
  130,
  138,
  140,
 };
 static u32 const VAR_6[] = {
  133,
  137,
  129,
  135,
  131,
  139,
  141,
 };
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_3->limits[VAR_1] ==
     VAR_0) {
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++)
   VAR_3->limits[VAR_5[VAR_7]] =
    VAR_3->limits[VAR_6[VAR_7]];

  return 0;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_5, FUNC_0(VAR_5));
 if (VAR_8 < 0)
  return VAR_8;





 if (VAR_3->limits[132]
     && VAR_3->limits[128]
     && VAR_3->limits[130])
  return 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++) {
  FUNC_1(&VAR_4->dev,
   "replace limit 0x%8.8x \"%s\" = %d, 0x%x\n",
   VAR_2[VAR_5[VAR_7]].addr,
   VAR_2[VAR_5[VAR_7]].what,
   VAR_3->limits[VAR_6[VAR_7]],
   VAR_3->limits[VAR_6[VAR_7]]);
  VAR_3->limits[VAR_5[VAR_7]] =
   VAR_3->limits[VAR_6[VAR_7]];
 }

 return 0;
}

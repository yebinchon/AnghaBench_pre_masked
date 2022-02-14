
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smiapp_sensor {unsigned int mbus_frame_fmts; unsigned int default_mbus_frame_fmts; int * internal_csi_format; int * csi_format; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int sd; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 unsigned int FUNC_4 (struct smiapp_sensor*) ;
 int FUNC_5 (int *) ;
 struct i2c_client* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct smiapp_sensor *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_6(&VAR_2->src->sd);
 unsigned int VAR_4 =
  FUNC_5(VAR_2->csi_format) & ~3;
 unsigned int VAR_5 =
  FUNC_5(VAR_2->internal_csi_format) & ~3;
 unsigned int VAR_6 = FUNC_4(VAR_2);

 VAR_2->mbus_frame_fmts =
  VAR_2->default_mbus_frame_fmts << VAR_6;
 VAR_2->csi_format =
  &VAR_1[VAR_4 + VAR_6];
 VAR_2->internal_csi_format =
  &VAR_1[VAR_5
      + VAR_6];

 FUNC_1(FUNC_3(VAR_5, VAR_4) + VAR_6
        >= FUNC_0(VAR_1));

 FUNC_2(&VAR_3->dev, "new pixel order %s\n",
  VAR_0[VAR_6]);
}

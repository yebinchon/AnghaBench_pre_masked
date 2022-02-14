
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ asic_id; } ;
struct TYPE_4__ {TYPE_1__ version; } ;
struct camera_data {int mmapped; TYPE_2__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (struct camera_data*,int ,int ,int ) ;
 int FUNC_3 (struct camera_data*) ;
 int FUNC_4 (struct camera_data*) ;
 int FUNC_5 (struct camera_data*) ;
 int FUNC_6 (struct camera_data*) ;

int FUNC_7(struct camera_data *VAR_5)
{
 FUNC_0("Start\n");

 VAR_5->mmapped = 0;


 FUNC_4(VAR_5);
 FUNC_3(VAR_5);
 if (VAR_5->params.version.asic_id != VAR_0) {
  FUNC_1("Device IO error (asicID has incorrect value of 0x%X\n",
      VAR_5->params.version.asic_id);
  return -VAR_3;
 }


 FUNC_2(VAR_5, VAR_2,
    VAR_4, 0);
 FUNC_2(VAR_5, VAR_1,
    VAR_4, 0);


 FUNC_6(VAR_5);

 FUNC_5(VAR_5);

 FUNC_0("End\n");

 return 0;
}

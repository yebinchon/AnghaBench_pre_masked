
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_slaves_pport {int slaves; } ;
struct TYPE_4__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__* persist; } ;
struct TYPE_3__ {scalar_t__ num_vfs; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 struct mlx4_slaves_pport FUNC_6 (struct mlx4_dev*,int) ;
 int FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (struct mlx4_dev*,char*,...) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct mlx4_dev *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 struct mlx4_slaves_pport VAR_8;
 struct mlx4_slaves_pport VAR_9;
 FUNC_0(VAR_4, VAR_2);

 VAR_8 = FUNC_6(VAR_5, 1);
 VAR_9 = FUNC_6(VAR_5, 2);
 FUNC_1(VAR_4,
     VAR_8, VAR_9,
     VAR_5->persist->num_vfs + 1);


 if (FUNC_2(VAR_4, VAR_5->persist->num_vfs + 1) > 1) {
  FUNC_9(VAR_5, "HA mode unsupported for dual ported VFs\n");
  return -VAR_0;
 }




 VAR_7 = FUNC_2(VAR_8, VAR_5->persist->num_vfs + 1) +
  FUNC_2(VAR_9, VAR_5->persist->num_vfs + 1) - 2;


 if (VAR_7 > VAR_1) {
  FUNC_9(VAR_5, "HA mode is not supported for %d VFs (max %d are allowed)\n",
     VAR_7, VAR_1);
  return -VAR_0;
 }

 if (VAR_5->caps.steering_mode != VAR_3) {
  FUNC_9(VAR_5, "HA mode unsupported for NON DMFS steering\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6)
  goto err1;
 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  goto err2;

 return 0;
err2:
 (void)FUNC_8(VAR_5);
err1:
 (void)FUNC_7(VAR_5);
 return VAR_6;
}

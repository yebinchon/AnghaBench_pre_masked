
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct m5mols_info {int isp_ready; int irq_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,int,int) ;
 int VAR_9 ;
 int FUNC_2 (struct v4l2_subdev*,int) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int VAR_10 ;
 int FUNC_4 (struct v4l2_subdev*,int ) ;
 int FUNC_5 (struct v4l2_subdev*,int ,int) ;
 int FUNC_6 (struct v4l2_subdev*,int ,int ) ;
 struct m5mols_info* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_11)
{
 struct m5mols_info *VAR_12 = FUNC_7(VAR_11);
 int VAR_13;

 FUNC_0(&VAR_12->irq_done, 0);

 VAR_13 = FUNC_1(VAR_11, VAR_0, VAR_7,
          VAR_1 | 0xff, -1);
 if (!VAR_13)
  VAR_13 = FUNC_6(VAR_11, VAR_0, VAR_8);
 if (!VAR_13)
  VAR_13 = FUNC_5(VAR_11, VAR_6, 2000);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12->isp_ready = 1;

 VAR_13 = FUNC_3(VAR_11);
 if (!VAR_13)
  VAR_13 = FUNC_4(VAR_11, VAR_10);
 if (VAR_13)
  return VAR_13;

 FUNC_8(1, VAR_9, VAR_11, "Success ARM Booting\n");

 VAR_13 = FUNC_6(VAR_11, VAR_2, VAR_3);
 if (!VAR_13)
  VAR_13 = FUNC_2(VAR_11,
    VAR_4 | VAR_5);

 return VAR_13;
}

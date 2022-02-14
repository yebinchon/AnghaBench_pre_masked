
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_info {int irq_done; int irq_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int,int,int) ;
 int FUNC_2 (int ) ;
 struct m5mols_info* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct v4l2_subdev *VAR_3, u8 VAR_4, u32 VAR_5)
{
 struct m5mols_info *VAR_6 = FUNC_3(VAR_3);

 int VAR_7 = FUNC_4(VAR_6->irq_waitq,
    FUNC_0(&VAR_6->irq_done, -1, 0),
    FUNC_2(VAR_5));
 if (VAR_7 <= 0)
  return VAR_7 ? VAR_7 : -VAR_0;

 return FUNC_1(VAR_3, VAR_2, VAR_4,
    VAR_1 | VAR_4, -1);
}

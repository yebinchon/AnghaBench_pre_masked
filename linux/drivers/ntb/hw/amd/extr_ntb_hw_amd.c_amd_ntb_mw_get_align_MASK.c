
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int pdev; } ;
struct amd_ntb_dev {TYPE_1__ ntb; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amd_ntb_dev*,int) ;
 struct amd_ntb_dev* FUNC_1 (struct ntb_dev*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct ntb_dev *VAR_3, int VAR_4, int VAR_5,
    resource_size_t *VAR_6,
    resource_size_t *VAR_7,
    resource_size_t *VAR_8)
{
 struct amd_ntb_dev *VAR_9 = FUNC_1(VAR_3);
 int VAR_10;

 if (VAR_4 != VAR_1)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_9, VAR_5);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_6)
  *VAR_6 = VAR_2;

 if (VAR_7)
  *VAR_7 = 1;

 if (VAR_8)
  *VAR_8 = FUNC_2(VAR_9->ntb.pdev, VAR_10);

 return 0;
}

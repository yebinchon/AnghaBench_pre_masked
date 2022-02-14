
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int pdev; } ;
struct amd_ntb_dev {TYPE_1__ ntb; } ;
typedef int resource_size_t ;
typedef int phys_addr_t ;


 int FUNC_0 (struct amd_ntb_dev*,int) ;
 struct amd_ntb_dev* FUNC_1 (struct ntb_dev*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct ntb_dev *VAR_0, int VAR_1,
        phys_addr_t *VAR_2, resource_size_t *VAR_3)
{
 struct amd_ntb_dev *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2)
  *VAR_2 = FUNC_3(VAR_4->ntb.pdev, VAR_5);

 if (VAR_3)
  *VAR_3 = FUNC_2(VAR_4->ntb.pdev, VAR_5);

 return 0;
}

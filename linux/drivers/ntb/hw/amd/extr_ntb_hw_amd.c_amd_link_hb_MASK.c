
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct amd_ntb_dev {int hb_timer; int ntb; } ;


 int VAR_0 ;
 int FUNC_0 (struct amd_ntb_dev*) ;
 scalar_t__ FUNC_1 (struct amd_ntb_dev*) ;
 struct amd_ntb_dev* FUNC_2 (struct work_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_1)
{
 struct amd_ntb_dev *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_2))
  FUNC_3(&VAR_2->ntb);

 if (!FUNC_0(VAR_2))
  FUNC_4(&VAR_2->hb_timer, VAR_0);
}

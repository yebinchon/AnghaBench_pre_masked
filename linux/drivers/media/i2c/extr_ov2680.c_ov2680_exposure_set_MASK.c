
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ov2680_ctrls {TYPE_1__* exposure; } ;
struct ov2680_dev {struct ov2680_ctrls ctrls; } ;
struct TYPE_2__ {scalar_t__ val; int is_new; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ov2680_dev*,int ,int ,int ) ;
 int FUNC_2 (struct ov2680_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ov2680_dev *VAR_2, bool VAR_3)
{
 struct ov2680_ctrls *VAR_4 = &VAR_2->ctrls;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, FUNC_0(0),
        VAR_3 ? 0 : FUNC_0(0));
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_3 || !VAR_4->exposure->is_new)
  return 0;

 VAR_5 = (u32)VAR_4->exposure->val;
 VAR_5 <<= 4;

 return FUNC_2(VAR_2, VAR_0, VAR_5);
}

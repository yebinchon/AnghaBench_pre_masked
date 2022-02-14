
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_vf_info {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_vf_info *VAR_2)
{
 int VAR_3 = -VAR_0;
 u32 VAR_4 = 10000;

 do {
  if (!FUNC_1(VAR_1, &VAR_2->state)) {
   VAR_3 = 0;
   break;
  }
  FUNC_0(1);
 } while (--VAR_4);

 return VAR_3;
}

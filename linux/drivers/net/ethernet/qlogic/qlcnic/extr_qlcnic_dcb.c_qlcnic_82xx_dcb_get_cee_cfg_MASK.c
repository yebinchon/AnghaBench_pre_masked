
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_dcb_mbx_params {int prio_tc_map; int * type; } ;
struct qlcnic_dcb {int adapter; struct qlcnic_dcb_mbx_params* param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qlcnic_dcb*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_dcb *VAR_4)
{
 struct qlcnic_dcb_mbx_params *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->param;
 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_1(VAR_4, (char *)&VAR_5->type[0],
      VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, (char *)&VAR_5->type[1],
      VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, (char *)&VAR_5->type[2],
      VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_5->prio_tc_map = VAR_0;

 FUNC_0(VAR_4->adapter);

 return VAR_6;
}

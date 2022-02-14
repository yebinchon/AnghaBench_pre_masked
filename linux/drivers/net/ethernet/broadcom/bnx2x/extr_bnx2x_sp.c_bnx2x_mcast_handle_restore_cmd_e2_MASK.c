
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bnx2x_mcast_config_data {scalar_t__ bin; int * member_0; } ;
typedef scalar_t__ u8 ;
struct bnx2x_mcast_obj {int max_cmd_len; int (* set_one_rule ) (struct bnx2x*,struct bnx2x_mcast_obj*,int,union bnx2x_mcast_config_data*,int ) ;} ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct bnx2x_mcast_obj*,int) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_mcast_obj*,int,union bnx2x_mcast_config_data*,int ) ;

__attribute__((used)) static inline int FUNC_3(
 struct bnx2x *VAR_2, struct bnx2x_mcast_obj *VAR_3 , int VAR_4,
 int *VAR_5)
{
 int VAR_6, VAR_7 = *VAR_5;
 union bnx2x_mcast_config_data VAR_8 = {((void*)0)};


 for (VAR_6 = FUNC_1(VAR_3, VAR_4); VAR_6 >= 0;
     VAR_6 = FUNC_1(VAR_3, VAR_6 + 1)) {

  VAR_8.bin = (u8)VAR_6;
  VAR_3->set_one_rule(VAR_2, VAR_3, VAR_7, &VAR_8,
    VAR_0);

  VAR_7++;

  FUNC_0(VAR_1, "About to configure a bin %d\n", VAR_6);




  if (VAR_7 >= VAR_3->max_cmd_len)
   break;
 }

 *VAR_5 = VAR_7;

 return VAR_6;
}

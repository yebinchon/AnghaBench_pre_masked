
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_mqprio_qopt {int num_tc; int hw; } ;
struct net_device {int dummy; } ;
struct bnxt {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int VAR_3 ;
 int FUNC_1 (void*,int *,int ,struct bnxt*,struct bnxt*,int) ;
 struct bnxt* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, enum tc_setup_type VAR_5,
    void *VAR_6)
{
 struct bnxt *VAR_7 = FUNC_2(VAR_4);

 switch (VAR_5) {
 case 129:
  return FUNC_1(VAR_6,
        &VAR_2,
        VAR_3,
        VAR_7, VAR_7, 1);
 case 128: {
  struct tc_mqprio_qopt *VAR_8 = VAR_6;

  VAR_8->hw = VAR_1;

  return FUNC_0(VAR_4, VAR_8->num_tc);
 }
 default:
  return -VAR_0;
 }
}

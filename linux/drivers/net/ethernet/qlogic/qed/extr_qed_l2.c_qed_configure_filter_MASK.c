
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int accept_flags; int mcast; int ucast; } ;
struct qed_filter_params {int type; TYPE_1__ filter; } ;
struct qed_dev {int dummy; } ;
typedef enum qed_filter_rx_mode_type { ____Placeholder_qed_filter_rx_mode_type } qed_filter_rx_mode_type ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int VAR_0 ;



 int FUNC_1 (struct qed_dev*,int *) ;
 int FUNC_2 (struct qed_dev*,int) ;
 int FUNC_3 (struct qed_dev*,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_1,
    struct qed_filter_params *VAR_2)
{
 enum qed_filter_rx_mode_type VAR_3;

 switch (VAR_2->type) {
 case 128:
  return FUNC_3(VAR_1, &VAR_2->filter.ucast);
 case 130:
  return FUNC_1(VAR_1, &VAR_2->filter.mcast);
 case 129:
  VAR_3 = VAR_2->filter.accept_flags;
  return FUNC_2(VAR_1, VAR_3);
 default:
  FUNC_0(VAR_1, "Unknown filter type %d\n", (int)VAR_2->type);
  return -VAR_0;
 }
}

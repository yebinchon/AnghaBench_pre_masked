
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_filter_mcast_params {int type; int num; int * mac; } ;
struct qed_filter_mcast {int num_mc_addrs; int * mac; int opcode; } ;
struct qed_dev {int dummy; } ;
typedef int mcast ;


 int FUNC_0 (struct qed_dev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qed_filter_mcast*,int ,int) ;
 int FUNC_3 (struct qed_dev*,struct qed_filter_mcast*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_dev *VAR_3,
          struct qed_filter_mcast_params *VAR_4)
{
 struct qed_filter_mcast VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 switch (VAR_4->type) {
 case 129:
  VAR_5.opcode = VAR_0;
  break;
 case 128:
  VAR_5.opcode = VAR_1;
  break;
 default:
  FUNC_0(VAR_3, "Unknown multicast filter type %d\n",
     VAR_4->type);
 }

 VAR_5.num_mc_addrs = VAR_4->num;
 for (VAR_6 = 0; VAR_6 < VAR_5.num_mc_addrs; VAR_6++)
  FUNC_1(VAR_5.mac[VAR_6], VAR_4->mac[VAR_6]);

 return FUNC_3(VAR_3, &VAR_5, VAR_2, ((void*)0));
}

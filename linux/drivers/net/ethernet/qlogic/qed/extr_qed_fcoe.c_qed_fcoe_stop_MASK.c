
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_dev {int flags; int connections; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct qed_ptt* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct qed_ptt*) ;
 int FUNC_5 (int ,struct qed_ptt*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct qed_dev *VAR_4)
{
 struct qed_ptt *VAR_5;
 int VAR_6;

 if (!(VAR_4->flags & VAR_2)) {
  FUNC_0(VAR_4, "fcoe already stopped\n");
  return 0;
 }

 if (!FUNC_2(VAR_4->connections)) {
  FUNC_0(VAR_4,
     "Can't stop fcoe - not all connections were returned\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_3(FUNC_1(VAR_4));
 if (!VAR_5)
  return -VAR_0;


 VAR_6 = FUNC_5(FUNC_1(VAR_4), VAR_5,
       VAR_3, ((void*)0));
 VAR_4->flags &= ~VAR_2;
 FUNC_4(FUNC_1(VAR_4), VAR_5);

 return VAR_6;
}

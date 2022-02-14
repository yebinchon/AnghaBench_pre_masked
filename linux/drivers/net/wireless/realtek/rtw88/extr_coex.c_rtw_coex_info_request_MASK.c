
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtw_coex {int mutex; int queue; int wait; } ;
struct rtw_dev {struct rtw_coex coex; } ;
struct rtw_coex_info_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*,char*) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_coex_info_req*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct rtw_dev *VAR_1,
          struct rtw_coex_info_req *VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_1->coex;
 struct sk_buff *VAR_4 = ((void*)0);

 FUNC_0(&VAR_3->mutex);

 FUNC_3(VAR_1, VAR_2);

 if (!FUNC_6(VAR_3->wait, !FUNC_5(&VAR_3->queue),
    VAR_0)) {
  FUNC_2(VAR_1, "coex request time out\n");
  goto out;
 }

 VAR_4 = FUNC_4(&VAR_3->queue);
 if (!VAR_4) {
  FUNC_2(VAR_1, "failed to get coex info response\n");
  goto out;
 }

out:
 FUNC_1(&VAR_3->mutex);
 return VAR_4;
}

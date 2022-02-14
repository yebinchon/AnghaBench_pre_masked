
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_target_request {struct sbp_login_descriptor* login; } ;
struct sbp_session {int node_id; int generation; int speed; int lock; int card; } ;
struct sbp_login_descriptor {struct sbp_session* sess; } ;
struct fw_card {int dummy; } ;


 struct fw_card* FUNC_0 (int ) ;
 int FUNC_1 (struct fw_card*) ;
 int FUNC_2 (struct fw_card*,int,int,int,int,unsigned long long,void*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sbp_target_request *VAR_0,
  int VAR_1, unsigned long long VAR_2, void *VAR_3,
  size_t VAR_4)
{
 struct sbp_login_descriptor *VAR_5 = VAR_0->login;
 struct sbp_session *VAR_6 = VAR_5->sess;
 struct fw_card *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_3(&VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6->card);
 VAR_8 = VAR_6->node_id;
 VAR_9 = VAR_6->generation;
 VAR_10 = VAR_6->speed;
 FUNC_4(&VAR_6->lock);

 VAR_11 = FUNC_2(VAR_7, VAR_1, VAR_8, VAR_9, VAR_10,
   VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_7);

 return VAR_11;
}

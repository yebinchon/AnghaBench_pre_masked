
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int port; int enabled; struct per_user_data* user; } ;
struct per_user_data {int name; } ;
struct evtchn_close {int port; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,struct evtchn_close*) ;
 int FUNC_2 (struct per_user_data*,struct user_evtchn*) ;
 int FUNC_3 (int,int ,int ,int ,struct user_evtchn*) ;
 int FUNC_4 (struct per_user_data*,struct user_evtchn*) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct per_user_data*) ;
 struct user_evtchn* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct per_user_data *VAR_4, int VAR_5)
{
 struct user_evtchn *VAR_6;
 struct evtchn_close VAR_7;
 int VAR_8 = 0;
 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->user = VAR_4;
 VAR_6->port = VAR_5;
 VAR_6->enabled = 1;

 VAR_8 = FUNC_2(VAR_4, VAR_6);
 if (VAR_8 < 0)
  goto err;

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8 < 0)
  goto err;

 VAR_8 = FUNC_3(VAR_5, VAR_3, 0,
           VAR_4->name, VAR_6);
 if (VAR_8 < 0)
  goto err;

 VAR_8 = FUNC_5(VAR_5);
 return VAR_8;

err:

 VAR_7.port = VAR_5;
 if (FUNC_1(VAR_1, &VAR_7) != 0)
  FUNC_0();
 FUNC_4(VAR_4, VAR_6);
 return VAR_8;
}

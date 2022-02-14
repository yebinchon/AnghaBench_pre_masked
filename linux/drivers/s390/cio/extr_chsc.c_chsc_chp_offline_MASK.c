
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int cssid; int id; } ;
struct chp_link {struct chp_id chpid; } ;
struct channel_path {int lock; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct chp_id) ;
 int FUNC_2 (struct channel_path*) ;
 struct channel_path* FUNC_3 (struct chp_id) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,struct chp_link*) ;
 int FUNC_6 (struct chp_link*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int FUNC_9 (char*,char*,int,int) ;

void FUNC_10(struct chp_id VAR_1)
{
 struct channel_path *VAR_2 = FUNC_3(VAR_1);
 struct chp_link VAR_3;
 char VAR_4[15];

 FUNC_9(VAR_4, "chpr%x.%02x", VAR_1.cssid, VAR_1.id);
 FUNC_0(2, VAR_4);

 if (FUNC_1(VAR_1) <= 0)
  return;
 FUNC_6(&VAR_3, 0, sizeof(struct chp_link));
 VAR_3.chpid = VAR_1;

 FUNC_4();

 FUNC_7(&VAR_2->lock);
 FUNC_2(VAR_2);
 FUNC_8(&VAR_2->lock);

 FUNC_5(VAR_0, ((void*)0), &VAR_3);
}

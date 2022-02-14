
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int wq; int qlock; int powerq; int qcache; } ;
struct anybuss_client {struct anybuss_host* host; } ;
struct ab_task {int dummy; } ;


 int VAR_0 ;
 struct ab_task* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ab_task*,int ,int *,int *) ;
 int FUNC_2 (struct ab_task*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct anybuss_client *VAR_3, bool VAR_4)
{
 struct anybuss_host *VAR_5 = VAR_3->host;
 struct ab_task *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5->qcache, VAR_4 ?
    VAR_2 : VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_1(VAR_6, VAR_5->powerq, &VAR_5->qlock, &VAR_5->wq);
 FUNC_2(VAR_6);
 return VAR_7;
}

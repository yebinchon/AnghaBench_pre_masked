
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct anybuss_host {int wq; int qlock; int powerq; int qcache; } ;
struct anybuss_client {struct anybuss_host* host; } ;
struct TYPE_2__ {int buf; } ;
struct ab_task {TYPE_1__ area_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ab_task*,int ,int *,int *) ;
 int FUNC_1 (struct ab_task*) ;
 int FUNC_2 (int ,size_t,int ,int ) ;
 struct ab_task* FUNC_3 (int ,int ,int ,size_t) ;
 int FUNC_4 (void*,int ,size_t) ;

int FUNC_5(struct anybuss_client *VAR_5, u16 VAR_6,
   void *VAR_7, size_t VAR_8)
{
 struct anybuss_host *VAR_9 = VAR_5->host;
 struct ab_task *VAR_10;
 int VAR_11;

 if (VAR_8 == 0)
  return 0;
 if (!FUNC_2(VAR_6, VAR_8, VAR_2,
      VAR_4))
  return -VAR_0;
 VAR_10 = FUNC_3(VAR_9->qcache, VAR_3, VAR_6, VAR_8);
 if (!VAR_10)
  return -VAR_1;
 VAR_11 = FUNC_0(VAR_10, VAR_9->powerq, &VAR_9->qlock, &VAR_9->wq);
 if (VAR_11)
  goto out;
 FUNC_4(VAR_7, VAR_10->area_pd.buf, VAR_8);
out:
 FUNC_1(VAR_10);
 return VAR_11;
}

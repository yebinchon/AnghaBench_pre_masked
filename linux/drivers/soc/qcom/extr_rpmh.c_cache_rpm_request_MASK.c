
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_cmd {int data; int addr; } ;
struct rpmh_ctrlr {int dirty; int cache_lock; int cache; } ;
struct cache_req {int sleep_val; int wake_val; int list; int addr; } ;
typedef enum rpmh_state { ____Placeholder_rpmh_state } rpmh_state ;


 int VAR_0 ;
 struct cache_req* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;



 int VAR_2 ;
 struct cache_req* FUNC_2 (struct rpmh_ctrlr*,int ) ;
 struct cache_req* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static struct cache_req *FUNC_7(struct rpmh_ctrlr *VAR_3,
        enum rpmh_state VAR_4,
        struct tcs_cmd *VAR_5)
{
 struct cache_req *VAR_6;
 unsigned long VAR_7;

 FUNC_5(&VAR_3->cache_lock, VAR_7);
 VAR_6 = FUNC_2(VAR_3, VAR_5->addr);
 if (VAR_6)
  goto existing;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_6 = FUNC_0(-VAR_0);
  goto unlock;
 }

 VAR_6->addr = VAR_5->addr;
 VAR_6->sleep_val = VAR_6->wake_val = VAR_2;
 FUNC_1(&VAR_6->list);
 FUNC_4(&VAR_6->list, &VAR_3->cache);

existing:
 switch (VAR_4) {
 case 130:
  if (VAR_6->sleep_val != VAR_2)
   VAR_6->wake_val = VAR_5->data;
  break;
 case 128:
  VAR_6->wake_val = VAR_5->data;
  break;
 case 129:
  VAR_6->sleep_val = VAR_5->data;
  break;
 default:
  break;
 }

 VAR_3->dirty = 1;
unlock:
 FUNC_6(&VAR_3->cache_lock, VAR_7);

 return VAR_6;
}

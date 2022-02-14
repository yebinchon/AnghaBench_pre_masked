
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsm_handle {int sm_count; int sm_addrbuf; int sm_name; } ;
struct nlm_reboot {int mon; int len; int priv; } ;
struct net {int dummy; } ;
struct lockd_net {int nsm_handles; } ;


 int FUNC_0 (char*,int ,int ,...) ;
 int VAR_0 ;
 struct lockd_net* FUNC_1 (struct net const*,int ) ;
 int VAR_1 ;
 struct nsm_handle* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

struct nsm_handle *FUNC_8(const struct net *VAR_2,
    const struct nlm_reboot *VAR_3)
{
 struct nsm_handle *VAR_4;
 struct lockd_net *VAR_5 = FUNC_1(VAR_2, VAR_0);

 FUNC_5(&VAR_1);

 VAR_4 = FUNC_2(&VAR_5->nsm_handles, &VAR_3->priv);
 if (FUNC_7(VAR_4 == ((void*)0))) {
  FUNC_6(&VAR_1);
  FUNC_0("lockd: never saw rebooted peer '%.*s' before\n",
    VAR_3->len, VAR_3->mon);
  return VAR_4;
 }

 FUNC_3(&VAR_4->sm_count);
 FUNC_6(&VAR_1);

 FUNC_0("lockd: host %s (%s) rebooted, cnt %d\n",
   VAR_4->sm_name, VAR_4->sm_addrbuf,
   FUNC_4(&VAR_4->sm_count));
 return VAR_4;
}

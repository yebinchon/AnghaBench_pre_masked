
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsm_res {scalar_t__ status; scalar_t__ state; } ;
struct nsm_handle {scalar_t__ sm_name; int sm_monitored; scalar_t__ sm_mon_name; scalar_t__ sm_addrbuf; } ;
struct nlm_host {struct nsm_handle* h_nsmhandle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct nsm_handle*,int ,struct nsm_res*,struct nlm_host const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(const struct nlm_host *VAR_4)
{
 struct nsm_handle *VAR_5 = VAR_4->h_nsmhandle;
 struct nsm_res VAR_6;
 int VAR_7;

 FUNC_0("lockd: nsm_monitor(%s)\n", VAR_5->sm_name);

 if (VAR_5->sm_monitored)
  return 0;





 VAR_5->sm_mon_name = VAR_3 ? VAR_5->sm_name : VAR_5->sm_addrbuf;

 VAR_7 = FUNC_1(VAR_5, VAR_1, &VAR_6, VAR_4);
 if (FUNC_3(VAR_6.status != 0))
  VAR_7 = -VAR_0;
 if (FUNC_3(VAR_7 < 0)) {
  FUNC_2("lockd: cannot monitor %s\n", VAR_5->sm_name);
  return VAR_7;
 }

 VAR_5->sm_monitored = 1;
 if (FUNC_3(VAR_2 != VAR_6.state)) {
  VAR_2 = VAR_6.state;
  FUNC_0("lockd: NSM state changed to %d\n", VAR_2);
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_raw_obj {int (* wait_comp ) (struct bnx2x*,struct bnx2x_raw_obj*) ;int (* clear_pending ) (struct bnx2x_raw_obj*) ;int (* set_pending ) (struct bnx2x_raw_obj*) ;} ;
struct bnx2x_rss_config_obj {int (* config_rss ) (struct bnx2x*,struct bnx2x_config_rss_params*) ;struct bnx2x_raw_obj raw; } ;
struct bnx2x_config_rss_params {int ramrod_flags; struct bnx2x_rss_config_obj* rss_obj; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x_raw_obj*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_config_rss_params*) ;
 int FUNC_3 (struct bnx2x_raw_obj*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_raw_obj*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct bnx2x *VAR_3,
       struct bnx2x_config_rss_params *VAR_4)
{
 int VAR_5;
 struct bnx2x_rss_config_obj *VAR_6 = VAR_4->rss_obj;
 struct bnx2x_raw_obj *VAR_7 = &VAR_6->raw;


 if (FUNC_5(VAR_2, &VAR_4->ramrod_flags)) {
  FUNC_0(VAR_0, "Not configuring RSS ramrod_flags=%lx\n",
     VAR_4->ramrod_flags);
  return 0;
 }

 VAR_7->set_pending(VAR_7);

 VAR_5 = VAR_6->config_rss(VAR_3, VAR_4);
 if (VAR_5 < 0) {
  VAR_7->clear_pending(VAR_7);
  return VAR_5;
 }

 if (FUNC_5(VAR_1, &VAR_4->ramrod_flags))
  VAR_5 = VAR_7->wait_comp(VAR_3, VAR_7);

 return VAR_5;
}

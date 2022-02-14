
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wilc_vif {int dummy; } ;
struct wid {int size; void* type; int * val; int id; } ;
struct cfg_param_attr {int flag; int rts_threshold; int frag_threshold; int long_retry_limit; int short_retry_limit; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_1(struct wilc_vif *VAR_10, struct cfg_param_attr *VAR_11)
{
 struct wid VAR_12[4];
 int VAR_13 = 0;

 if (VAR_11->flag & VAR_7) {
  VAR_12[VAR_13].id = VAR_4;
  VAR_12[VAR_13].val = (s8 *)&VAR_11->short_retry_limit;
  VAR_12[VAR_13].type = VAR_3;
  VAR_12[VAR_13].size = sizeof(u16);
  VAR_13++;
 }
 if (VAR_11->flag & VAR_6) {
  VAR_12[VAR_13].id = VAR_1;
  VAR_12[VAR_13].val = (s8 *)&VAR_11->long_retry_limit;
  VAR_12[VAR_13].type = VAR_3;
  VAR_12[VAR_13].size = sizeof(u16);
  VAR_13++;
 }
 if (VAR_11->flag & VAR_5) {
  VAR_12[VAR_13].id = VAR_0;
  VAR_12[VAR_13].val = (s8 *)&VAR_11->frag_threshold;
  VAR_12[VAR_13].type = VAR_3;
  VAR_12[VAR_13].size = sizeof(u16);
  VAR_13++;
 }
 if (VAR_11->flag & VAR_8) {
  VAR_12[VAR_13].id = VAR_2;
  VAR_12[VAR_13].val = (s8 *)&VAR_11->rts_threshold;
  VAR_12[VAR_13].type = VAR_3;
  VAR_12[VAR_13].size = sizeof(u16);
  VAR_13++;
 }

 return FUNC_0(VAR_10, VAR_9, VAR_12, VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_intel {int dummy; } ;
struct sdw_cdns_streams {int num_ch_out; int num_out; int out; int num_ch_in; int num_in; int in; int num_ch_bd; int num_bd; int bd; } ;


 int FUNC_0 (struct sdw_intel*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct sdw_intel *VAR_0,
          struct sdw_cdns_streams *VAR_1, bool VAR_2)
{
 FUNC_0(VAR_0, VAR_1->bd, VAR_1->num_bd,
    &VAR_1->num_ch_bd, VAR_2);

 FUNC_0(VAR_0, VAR_1->in, VAR_1->num_in,
    &VAR_1->num_ch_in, VAR_2);

 FUNC_0(VAR_0, VAR_1->out, VAR_1->num_out,
    &VAR_1->num_ch_out, VAR_2);

 return 0;
}

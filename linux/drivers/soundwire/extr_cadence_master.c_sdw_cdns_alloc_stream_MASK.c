
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdw_cdns_streams {int bd; int num_bd; int out; int num_out; int in; int num_in; } ;
struct sdw_cdns_port {struct sdw_cdns_pdi* pdi; } ;
struct sdw_cdns_pdi {scalar_t__ ch_count; scalar_t__ dir; scalar_t__ h_ch_num; scalar_t__ l_ch_num; } ;
struct sdw_cdns {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sdw_cdns_pdi* FUNC_0 (struct sdw_cdns*,int ,int ) ;

int FUNC_1(struct sdw_cdns *VAR_2,
     struct sdw_cdns_streams *VAR_3,
     struct sdw_cdns_port *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct sdw_cdns_pdi *VAR_7 = ((void*)0);

 if (VAR_6 == VAR_1)
  VAR_7 = FUNC_0(VAR_2, VAR_3->num_in, VAR_3->in);
 else
  VAR_7 = FUNC_0(VAR_2, VAR_3->num_out, VAR_3->out);


 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_2, VAR_3->num_bd, VAR_3->bd);

 if (!VAR_7)
  return -VAR_0;

 VAR_4->pdi = VAR_7;
 VAR_7->l_ch_num = 0;
 VAR_7->h_ch_num = VAR_5 - 1;
 VAR_7->dir = VAR_6;
 VAR_7->ch_count = VAR_5;

 return 0;
}

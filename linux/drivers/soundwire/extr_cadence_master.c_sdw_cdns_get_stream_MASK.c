
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdw_cdns_streams {int num_bd; int bd; int num_out; int out; int num_in; int in; } ;
struct sdw_cdns {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sdw_cdns*,int ,int ,scalar_t__) ;

int FUNC_1(struct sdw_cdns *VAR_1,
   struct sdw_cdns_streams *VAR_2,
   u32 VAR_3, u32 VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 == VAR_0)
  VAR_5 = FUNC_0(VAR_1, VAR_2->in, VAR_2->num_in, VAR_3);
 else
  VAR_5 = FUNC_0(VAR_1, VAR_2->out, VAR_2->num_out, VAR_3);


 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_1, VAR_2->bd, VAR_2->num_bd, VAR_3);

 return VAR_5;
}

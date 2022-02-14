
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_enable_ch {int ch_mask; int enable; int port_num; } ;
struct sdw_cdns {int dummy; } ;
struct sdw_bus {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sdw_cdns* FUNC_2 (struct sdw_bus*) ;
 int FUNC_3 (struct sdw_cdns*,int,int) ;

__attribute__((used)) static int FUNC_4(struct sdw_bus *VAR_0,
       struct sdw_enable_ch *VAR_1, unsigned int VAR_2)
{
 struct sdw_cdns *VAR_3 = FUNC_2(VAR_0);
 int VAR_4, VAR_5;

 if (VAR_2)
  VAR_4 = FUNC_1(VAR_1->port_num);
 else
  VAR_4 = FUNC_0(VAR_1->port_num);

 VAR_5 = VAR_1->ch_mask * VAR_1->enable;
 FUNC_3(VAR_3, VAR_4, VAR_5);

 return 0;
}

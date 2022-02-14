
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_port_params {int bps; int flow_mode; int data_mode; int num; } ;
struct sdw_cdns {int dummy; } ;
struct sdw_bus {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct sdw_cdns* FUNC_3 (struct sdw_bus*) ;
 int FUNC_4 (struct sdw_cdns*,int) ;
 int FUNC_5 (struct sdw_cdns*,int,int) ;

__attribute__((used)) static int FUNC_6(struct sdw_bus *VAR_3,
       struct sdw_port_params *VAR_4, unsigned int VAR_5)
{
 struct sdw_cdns *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = 0, VAR_8;

 if (VAR_5)
  VAR_8 = FUNC_1(VAR_4->num);
 else
  VAR_8 = FUNC_0(VAR_4->num);

 VAR_7 = FUNC_4(VAR_6, VAR_8);

 VAR_7 |= ((VAR_4->bps - 1) <<
    FUNC_2(VAR_2));
 VAR_7 |= (VAR_4->flow_mode <<
    FUNC_2(VAR_1));
 VAR_7 |= (VAR_4->data_mode <<
    FUNC_2(VAR_0));

 FUNC_5(VAR_6, VAR_8, VAR_7);

 return 0;
}

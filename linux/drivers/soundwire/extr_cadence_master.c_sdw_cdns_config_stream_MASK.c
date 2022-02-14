
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sdw_cdns_port {int num; } ;
struct sdw_cdns_pdi {int num; } ;
struct sdw_cdns {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sdw_cdns*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct sdw_cdns*,int ,scalar_t__) ;

void FUNC_4(struct sdw_cdns *VAR_5,
       struct sdw_cdns_port *VAR_6,
       u32 VAR_7, u32 VAR_8, struct sdw_cdns_pdi *VAR_9)
{
 u32 VAR_10, VAR_11 = 0;

 if (VAR_8 == VAR_4)
  VAR_11 = VAR_2;

 VAR_10 = VAR_1 + VAR_6->num * VAR_3;
 FUNC_2(VAR_5, VAR_10, VAR_2, VAR_11);

 VAR_11 = VAR_6->num;
 VAR_11 |= ((1 << VAR_7) - 1) << FUNC_1(VAR_0);
 FUNC_3(VAR_5, FUNC_0(VAR_9->num), VAR_11);
}

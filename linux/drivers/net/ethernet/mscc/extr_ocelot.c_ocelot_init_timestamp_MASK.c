
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_filter; } ;
struct ocelot {TYPE_1__ hwtstamp_config; int ptp_clock; int dev; int ptp_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (struct ocelot*,int,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct ocelot *VAR_7)
{
 VAR_7->ptp_info = VAR_6;
 VAR_7->ptp_clock = FUNC_4(&VAR_7->ptp_info, VAR_7->dev);
 if (FUNC_0(VAR_7->ptp_clock))
  return FUNC_1(VAR_7->ptp_clock);

 if (!VAR_7->ptp_clock)
  return 0;

 FUNC_3(VAR_7, FUNC_2(30), VAR_5);
 FUNC_3(VAR_7, 0xffffffff, VAR_1);
 FUNC_3(VAR_7, 0xffffffff, VAR_0);

 FUNC_3(VAR_7, VAR_4, VAR_3);




 VAR_7->hwtstamp_config.rx_filter = VAR_2;

 return 0;
}

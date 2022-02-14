
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct devbus_write_params {int ale_wr; int wr_low; int wr_high; } ;
struct devbus_read_params {int turn_off; int acc_first; int acc_next; int bus_width; int badr_skew; } ;
struct devbus {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct devbus *VAR_27,
       struct device_node *VAR_28,
       struct devbus_read_params *VAR_29,
       struct devbus_write_params *VAR_30)
{
 u32 VAR_31;
 VAR_31 = (VAR_29->turn_off & VAR_17) << VAR_18 |
  (VAR_29->acc_first & VAR_2) << VAR_3 |
  (VAR_29->acc_next & VAR_6) << VAR_7 |
  (VAR_30->ale_wr & VAR_10) << VAR_11 |
  (VAR_30->wr_low & VAR_25) << VAR_26 |
  (VAR_30->wr_high & VAR_21) << VAR_22 |
  VAR_29->bus_width << VAR_13 |
  ((VAR_29->turn_off & VAR_16) ? VAR_15 : 0) |
  ((VAR_29->acc_first & VAR_1) ? VAR_0 : 0) |
  ((VAR_29->acc_next & VAR_5) ? VAR_4 : 0) |
  ((VAR_30->ale_wr & VAR_9) ? VAR_8 : 0) |
  ((VAR_30->wr_low & VAR_24) ? VAR_23 : 0) |
  ((VAR_30->wr_high & VAR_20) ? VAR_19 : 0) |
  (VAR_29->badr_skew << VAR_12) |
  VAR_14;

 FUNC_0(VAR_31, VAR_27->base);
}

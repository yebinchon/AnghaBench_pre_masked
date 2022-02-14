
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct ksz_port_info {scalar_t__ advertised; scalar_t__ partner; int tx_rate; int duplex; scalar_t__ state; } ;
struct ksz_port {int first_port; int port_cnt; struct ksz_port_info* linked; struct ksz_hw* hw; } ;
struct ksz_hw {TYPE_1__* port_mib; scalar_t__ ksz_switch; struct ksz_port_info* port_info; } ;
struct TYPE_2__ {int link_down; scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ksz_hw*,struct ksz_port*,int,int) ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*,int,int ,int*) ;
 int FUNC_3 (struct ksz_hw*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct ksz_hw*,int,int) ;
 int FUNC_5 (struct ksz_hw*,struct ksz_port*,struct ksz_port_info*,int) ;
 int FUNC_6 (struct ksz_hw*,int,int ,int*) ;

__attribute__((used)) static void FUNC_7(struct ksz_port *VAR_11)
{
 uint VAR_12;
 struct ksz_port_info *VAR_13;
 struct ksz_port_info *VAR_14 = ((void*)0);
 struct ksz_hw *VAR_15 = VAR_11->hw;
 u16 VAR_16;
 u16 VAR_17;
 u8 VAR_18;
 u8 VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22 = 0;

 VAR_12 = FUNC_1(VAR_15);

 for (VAR_20 = 0, VAR_21 = VAR_11->first_port; VAR_20 < VAR_11->port_cnt; VAR_20++, VAR_21++) {
  VAR_13 = &VAR_15->port_info[VAR_21];
  FUNC_6(VAR_15, VAR_21, VAR_2, &VAR_16);
  FUNC_6(VAR_15, VAR_21, VAR_3, &VAR_17);





  VAR_19 = VAR_17 & (VAR_4 |
   VAR_6);
  VAR_18 = (u8) VAR_16;


  if (VAR_18 == VAR_13->advertised && VAR_19 == VAR_13->partner)
   continue;

  VAR_13->advertised = VAR_18;
  VAR_13->partner = VAR_19;
  if (VAR_17 & VAR_6) {


   if (!VAR_14)
    VAR_14 = VAR_13;

   VAR_13->tx_rate = 10 * VAR_8;
   if (VAR_17 & VAR_7)
    VAR_13->tx_rate = 100 * VAR_8;

   VAR_13->duplex = 1;
   if (VAR_17 & VAR_5)
    VAR_13->duplex = 2;

   if (VAR_9 != VAR_13->state) {
    FUNC_2(VAR_15, VAR_21, VAR_0,
     &VAR_16);
    FUNC_2(VAR_15, VAR_21, VAR_1,
     &VAR_17);
    FUNC_0(VAR_15, VAR_11, VAR_16, VAR_17);
    if (VAR_15->ksz_switch) {
     FUNC_4(VAR_15, VAR_21,
      (1 == VAR_13->duplex));
    }
    VAR_22 |= 1 << VAR_20;
    FUNC_5(VAR_15, VAR_11, VAR_13, VAR_17);
   }
   VAR_13->state = VAR_9;
  } else {
   if (VAR_10 != VAR_13->state) {
    VAR_22 |= 1 << VAR_20;


    VAR_15->port_mib[VAR_21].link_down = 1;
   }
   VAR_13->state = VAR_10;
  }
  VAR_15->port_mib[VAR_21].state = (u8) VAR_13->state;
 }

 if (VAR_14 && VAR_10 == VAR_11->linked->state)
  VAR_11->linked = VAR_14;

 FUNC_3(VAR_15, VAR_12);
}

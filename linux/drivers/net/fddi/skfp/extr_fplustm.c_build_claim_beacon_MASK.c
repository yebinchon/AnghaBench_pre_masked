
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_int ;
struct TYPE_4__ {scalar_t__ rx1_fifo_start; scalar_t__ rbc_ram_start; } ;
struct fddi_mac_sf {scalar_t__ mac_info; void* mac_dest; void* mac_source; void* mac_fc; } ;
struct TYPE_5__ {TYPE_1__ fifo; struct fddi_mac_sf mac_sfb; } ;
struct TYPE_6__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_3__ hw; } ;
struct fddi_mac {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct s_smc*,int,struct fddi_mac*,scalar_t__,int) ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct s_smc *VAR_16, u_long VAR_17)
{
 u_int VAR_18 ;
 int VAR_19 ;
 struct fddi_mac_sf *VAR_20 ;




 VAR_19 = 17 ;
 VAR_18 = VAR_13 | ((((u_int)VAR_19-1)&3)<<27) ;
 VAR_20 = &VAR_16->hw.fp.mac_sfb ;
 VAR_20->mac_fc = VAR_6 ;

 VAR_20->mac_source = VAR_20->mac_dest = VAR_12 ;

 FUNC_3((char *)VAR_20->mac_info,(int)VAR_17) ;

 FUNC_1(VAR_16,VAR_18,(struct fddi_mac *)VAR_20,
  VAR_16->hw.fp.fifo.rbc_ram_start + VAR_2,VAR_19) ;

 FUNC_2(FUNC_0(VAR_10),VAR_16->hw.fp.fifo.rbc_ram_start + VAR_2) ;




 VAR_19 = 17 ;
 VAR_18 = VAR_13 | ((((u_int)VAR_19-1)&3)<<27) ;
 VAR_20->mac_fc = VAR_5 ;
 VAR_20->mac_source = VAR_12 ;
 VAR_20->mac_dest = VAR_15 ;
 FUNC_3((char *) VAR_20->mac_info,((int)VAR_1<<24) + 0 ) ;

 FUNC_1(VAR_16,VAR_18,(struct fddi_mac *)VAR_20,
  VAR_16->hw.fp.fifo.rbc_ram_start + VAR_0,VAR_19) ;

 FUNC_2(FUNC_0(VAR_9),VAR_16->hw.fp.fifo.rbc_ram_start + VAR_0) ;





 VAR_19 = 23 ;
 VAR_18 = VAR_13 | ((((u_int)VAR_19-1)&3)<<27) ;
 VAR_20->mac_fc = VAR_5 ;
 VAR_20->mac_source = VAR_12 ;
 VAR_20->mac_dest = VAR_14 ;
 FUNC_3((char *) VAR_20->mac_info,((int)VAR_4<<24) + 0 ) ;
 FUNC_3((char *) VAR_20->mac_info+4,0) ;
 FUNC_3((char *) VAR_20->mac_info+8,0) ;

 FUNC_1(VAR_16,VAR_18,(struct fddi_mac *)VAR_20,
  VAR_16->hw.fp.fifo.rbc_ram_start + VAR_3,VAR_19) ;


 FUNC_2(FUNC_0(VAR_7),VAR_16->hw.fp.fifo.rx1_fifo_start-1) ;

 FUNC_2(FUNC_0(VAR_11),0) ;
 FUNC_2(FUNC_0(VAR_8),0) ;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ptp_clock_event {int timestamp; int index; int type; } ;
struct phy_txts {int ns_lo; int ns_hi; int sec_lo; int sec_hi; } ;
struct TYPE_4__ {int ns_lo; int ns_hi; int sec_lo; int sec_hi; } ;
struct dp83640_private {TYPE_1__* clock; TYPE_2__ edata; } ;
typedef int ext_status ;
struct TYPE_3__ {int ptp_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,struct ptp_clock_event*) ;

__attribute__((used)) static int FUNC_3(struct dp83640_private *VAR_8,
         void *VAR_9, int VAR_10, u16 VAR_11)
{
 struct phy_txts *VAR_12;
 struct ptp_clock_event VAR_13;
 int VAR_14, VAR_15;
 int VAR_16 = (VAR_11 >> VAR_3) & VAR_2;
 u16 VAR_17 = 0;


 if (VAR_11 & VAR_5)
  VAR_15 = (VAR_16 + 2) * sizeof(u16);
 else
  VAR_15 = (VAR_16 + 1) * sizeof(u16);


 if (VAR_10 < VAR_15)
  return VAR_10;

 if (VAR_11 & VAR_5) {
  VAR_17 = *(u16 *) VAR_9;
  VAR_9 += sizeof(VAR_17);
 }

 VAR_12 = VAR_9;

 switch (VAR_16) {
 case 3:
  VAR_8->edata.sec_hi = VAR_12->sec_hi;

 case 2:
  VAR_8->edata.sec_lo = VAR_12->sec_lo;

 case 1:
  VAR_8->edata.ns_hi = VAR_12->ns_hi;

 case 0:
  VAR_8->edata.ns_lo = VAR_12->ns_lo;
 }

 if (!VAR_17) {
  VAR_14 = ((VAR_11 >> VAR_1) & VAR_0) - VAR_4;
  VAR_17 = FUNC_0(VAR_14);
 }

 VAR_13.type = VAR_7;
 VAR_13.timestamp = FUNC_1(&VAR_8->edata);


 VAR_13.timestamp -= 35;

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  if (VAR_17 & FUNC_0(VAR_14)) {
   VAR_13.index = VAR_14;
   FUNC_2(VAR_8->clock->ptp_clock, &VAR_13);
  }
 }

 return VAR_15;
}

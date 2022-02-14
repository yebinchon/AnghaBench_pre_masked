
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int phase; } ;
struct TYPE_5__ {TYPE_1__ SCp; } ;


 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;



 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (int ,TYPE_2__*,char*) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_31)
{
 int VAR_32=0;
 unsigned int VAR_33 = FUNC_0(VAR_14);
 unsigned int VAR_34 = FUNC_0(VAR_15);

 VAR_4 = VAR_16;
 VAR_16=VAR_30;

 if(VAR_34 & VAR_8) {
  VAR_16=VAR_24;
  FUNC_1(VAR_9,0);
  FUNC_1(VAR_15,VAR_8);
 } else if (VAR_33 & VAR_11 && VAR_4 == VAR_17) {
  VAR_16=VAR_25;
 } else if(VAR_33 & VAR_12 && VAR_1 && (VAR_1->SCp.phase & VAR_27)) {
  VAR_16=VAR_26;
 } else if(VAR_34 & VAR_13) {
  VAR_16=VAR_28;
 } else if(VAR_34 & VAR_0) {
  VAR_16=VAR_17;
  FUNC_1(VAR_15,VAR_0);
 } else if(VAR_34 & VAR_7) {
  VAR_16=VAR_23;
  FUNC_1(VAR_15,VAR_7);
 } else if(VAR_34 & VAR_6) {
  switch(FUNC_0(VAR_10) & VAR_5) {
  case 130: VAR_16=VAR_21; break;
  case 129: VAR_16=VAR_22; break;
  case 131: VAR_16=VAR_20; break;
  case 132: VAR_16=VAR_19; break;
  case 128: VAR_16=VAR_29; break;
  case 133: VAR_16=VAR_18; break;
  }
  VAR_32=1;
 }

 if((VAR_33 & VAR_11) && VAR_16!=VAR_25 && !VAR_32) {
  FUNC_2(VAR_2, VAR_1, "reselection missed?");
 }

 if(VAR_16!=VAR_4) {
  VAR_3=VAR_4;
 }

 return VAR_32;
}

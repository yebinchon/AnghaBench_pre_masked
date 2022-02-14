
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct AdapterCtlBlk {TYPE_1__* active_dcb; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ active_srb; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ) ;
 int FUNC_2 (struct AdapterCtlBlk*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct AdapterCtlBlk*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct AdapterCtlBlk*,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_10, void *VAR_11)
{
 struct AdapterCtlBlk *VAR_12 = VAR_11;
 u16 VAR_13;
 u8 VAR_14;
 irqreturn_t VAR_15 = VAR_4;




 VAR_13 = FUNC_0(VAR_12, VAR_9);
 VAR_14 = FUNC_1(VAR_12, VAR_8);
 if (VAR_13 & VAR_6) {

  FUNC_3(VAR_12, VAR_13);
  VAR_15 = VAR_3;
 }
 else if (VAR_14 & 0x20) {

  FUNC_4(VAR_5, "Interrupt from DMA engine: 0x%02x!\n", VAR_14);
  FUNC_4(VAR_5, "Ignoring DMA error (probably a bad thing) ...\n");
  VAR_12 = ((void*)0);

  VAR_15 = VAR_3;
 }

 return VAR_15;
}

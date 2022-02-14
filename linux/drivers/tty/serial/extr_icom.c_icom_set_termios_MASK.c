
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct ktermios {unsigned int c_cflag; unsigned int c_iflag; } ;
struct TYPE_11__ {int read_status_mask; int ignore_status_mask; TYPE_2__* dram; scalar_t__ xmitRestart_pci; scalar_t__* xmitRestart; scalar_t__ put_length; scalar_t__ next_rcv; scalar_t__ statStg_pci; TYPE_4__* statStg; } ;
struct TYPE_10__ {TYPE_3__* rcv; TYPE_1__* xmit; } ;
struct TYPE_9__ {unsigned short WorkingLength; scalar_t__ leLength; scalar_t__ flags; } ;
struct TYPE_8__ {int CmdReg; int XmitStatusAddr; int RcvStatusAddr; int ier; int FlagFillIdleTimer; int HDLCConfigReg; int async_config2; int async_config3; int PrevCmdReg; } ;
struct TYPE_7__ {scalar_t__ flags; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;




 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 char VAR_19 ;
 TYPE_5__* VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_0 (int ) ;
 int* VAR_35 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_5__*,char*,int ) ;
 int FUNC_5 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_6 (struct uart_port*,unsigned int,int) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_36,
        struct ktermios *VAR_37,
        struct ktermios *VAR_38)
{
 int VAR_39;
 unsigned VAR_40, VAR_41;
 char VAR_42;
 char VAR_43 = 0;
 char VAR_44;
 int VAR_45;
 int VAR_46, VAR_47;
 unsigned long VAR_48;
 unsigned long VAR_49;

 FUNC_2(&VAR_36->lock, VAR_49);
 FUNC_4(VAR_20, "CHANGE_SPEED", 0);

 VAR_40 = VAR_37->c_cflag;
 VAR_41 = VAR_37->c_iflag;

 VAR_42 = VAR_17;


 switch (VAR_40 & VAR_7) {
 case 131:
  VAR_42 |= VAR_13;
  break;
 case 130:
  VAR_42 |= VAR_14;
  break;
 case 129:
  VAR_42 |= VAR_15;
  break;
 case 128:
  VAR_42 |= VAR_16;
  break;
 default:
  break;
 }
 if (VAR_40 & VAR_8) {

  VAR_42 |= VAR_12;
 }
 if (VAR_40 & VAR_26) {

  VAR_42 |= VAR_18;
  FUNC_4(VAR_20, "PARENB", 0);
 }
 if (VAR_40 & VAR_28) {

  VAR_42 |= VAR_19;
  FUNC_4(VAR_20, "PARODD", 0);
 }


 VAR_39 = FUNC_5(VAR_36, VAR_37, VAR_38,
      VAR_35[0],
      VAR_35[VAR_0]);
 if (!VAR_39)
  VAR_39 = 9600;

 for (VAR_45 = 0; VAR_45 < VAR_0; VAR_45++) {
  if (VAR_35[VAR_45] == VAR_39) {
   VAR_43 = VAR_45;
   break;
  }
 }

 FUNC_6(VAR_36, VAR_40, VAR_39);


 VAR_44 = FUNC_1(&(VAR_20->dram->HDLCConfigReg));
 if (VAR_40 & VAR_6)
  VAR_44 |= VAR_10;
 else
  VAR_44 &= ~VAR_10;
 FUNC_7(VAR_44, &(VAR_20->dram->HDLCConfigReg));




 VAR_20->read_status_mask = VAR_32 | VAR_34;
 if (VAR_41 & VAR_23)
  VAR_20->read_status_mask |=
      VAR_31 | VAR_33;

 if ((VAR_41 & VAR_1) || (VAR_41 & VAR_27))
  VAR_20->read_status_mask |= VAR_30;




 VAR_20->ignore_status_mask = 0;
 if (VAR_41 & VAR_22)
  VAR_20->ignore_status_mask |=
      VAR_33 | VAR_31;
 if (VAR_41 & VAR_21) {
  VAR_20->ignore_status_mask |= VAR_30;




  if (VAR_41 & VAR_22)
   VAR_20->ignore_status_mask |= VAR_32;
 }




 if ((VAR_40 & VAR_5) == 0)
  VAR_20->ignore_status_mask |= VAR_34;


 FUNC_7(VAR_2, &VAR_20->dram->CmdReg);

 for (VAR_45 = 0; VAR_45 < 10; VAR_45++) {
  if (FUNC_1(&VAR_20->dram->PrevCmdReg) == 0x00) {
   break;
  }
 }


 for (VAR_46 = 0; VAR_46 < VAR_24; VAR_46++) {
  VAR_20->statStg->rcv[VAR_46].flags = 0;
  VAR_20->statStg->rcv[VAR_46].leLength = 0;
  VAR_20->statStg->rcv[VAR_46].WorkingLength =
      (unsigned short int) FUNC_0(VAR_29);
 }

 for (VAR_47 = 0; VAR_47 < VAR_25; VAR_47++) {
  VAR_20->statStg->xmit[VAR_47].flags = 0;
 }



 FUNC_7(VAR_43, &(VAR_20->dram->async_config3));
 FUNC_7(VAR_42, &(VAR_20->dram->async_config2));
 VAR_44 = FUNC_1(&(VAR_20->dram->HDLCConfigReg));
 VAR_44 |= VAR_11 | VAR_9;
 FUNC_7(VAR_44, &(VAR_20->dram->HDLCConfigReg));
 FUNC_7(0x04, &(VAR_20->dram->FlagFillIdleTimer));
 FUNC_7(0xFF, &(VAR_20->dram->ier));


 FUNC_7(VAR_3, &VAR_20->dram->CmdReg);

 for (VAR_45 = 0; VAR_45 < 10; VAR_45++) {
  if (FUNC_1(&VAR_20->dram->CmdReg) == 0x00) {
   break;
  }
 }


 VAR_48 =
     (unsigned long) &VAR_20->statStg->rcv[0] -
     (unsigned long) VAR_20->statStg;
 FUNC_8(VAR_20->statStg_pci + VAR_48,
        &VAR_20->dram->RcvStatusAddr);
 VAR_20->next_rcv = 0;
 VAR_20->put_length = 0;
 *VAR_20->xmitRestart = 0;
 FUNC_8(VAR_20->xmitRestart_pci,
        &VAR_20->dram->XmitStatusAddr);
 FUNC_4(VAR_20, "XR_ENAB", 0);
 FUNC_7(VAR_4, &VAR_20->dram->CmdReg);

 FUNC_3(&VAR_36->lock, VAR_49);
}

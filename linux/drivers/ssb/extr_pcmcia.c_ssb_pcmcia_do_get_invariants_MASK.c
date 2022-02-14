
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int TupleDataLen; int* TupleData; } ;
typedef TYPE_2__ tuple_t ;
struct TYPE_4__ {int a0; int a1; int a2; int a3; } ;
struct ssb_sprom {int board_rev; int pa0b0; int pa0b1; int pa0b2; int itssi_a; int itssi_bg; int maxpwr_a; int maxpwr_bg; int country_code; int ant_available_a; int ant_available_bg; int boardflags_lo; int gpio0; int gpio1; int gpio2; int gpio3; TYPE_1__ antenna_gain; } ;
struct ssb_boardinfo {int vendor; } ;
struct ssb_init_invariants {struct ssb_boardinfo boardinfo; struct ssb_sprom sprom; } ;
struct pcmcia_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_2,
     tuple_t *VAR_3,
     void *VAR_4)
{
 struct ssb_init_invariants *VAR_5 = VAR_4;
 struct ssb_sprom *VAR_6 = &VAR_5->sprom;
 struct ssb_boardinfo *VAR_7 = &VAR_5->boardinfo;
 const char *VAR_8;

 FUNC_0(VAR_3->TupleDataLen < 1, "VEN tpl < 1");
 switch (VAR_3->TupleData[0]) {
 case 131:
  FUNC_0((VAR_3->TupleDataLen != 5) &&
         (VAR_3->TupleDataLen != 7),
         "id tpl size");
  VAR_7->vendor = VAR_3->TupleData[1] |
   ((u16)VAR_3->TupleData[2] << 8);
  break;
 case 133:
  FUNC_0(VAR_3->TupleDataLen != 2,
   "boardrev tpl size");
  VAR_6->board_rev = VAR_3->TupleData[1];
  break;
 case 128:
  FUNC_0((VAR_3->TupleDataLen != 9) &&
   (VAR_3->TupleDataLen != 10),
   "pa tpl size");
  VAR_6->pa0b0 = VAR_3->TupleData[1] |
   ((u16)VAR_3->TupleData[2] << 8);
  VAR_6->pa0b1 = VAR_3->TupleData[3] |
   ((u16)VAR_3->TupleData[4] << 8);
  VAR_6->pa0b2 = VAR_3->TupleData[5] |
   ((u16)VAR_3->TupleData[6] << 8);
  VAR_6->itssi_a = VAR_3->TupleData[7];
  VAR_6->itssi_bg = VAR_3->TupleData[7];
  VAR_6->maxpwr_a = VAR_3->TupleData[8];
  VAR_6->maxpwr_bg = VAR_3->TupleData[8];
  break;
 case 129:

  break;
 case 132:
  FUNC_0(VAR_3->TupleDataLen != 2,
   "ccode tpl size");
  VAR_6->country_code = VAR_3->TupleData[1];
  break;
 case 136:
  FUNC_0(VAR_3->TupleDataLen != 2,
   "ant tpl size");
  VAR_6->ant_available_a = VAR_3->TupleData[1];
  VAR_6->ant_available_bg = VAR_3->TupleData[1];
  break;
 case 135:
  FUNC_0(VAR_3->TupleDataLen != 2,
   "antg tpl size");
  VAR_6->antenna_gain.a0 = VAR_3->TupleData[1];
  VAR_6->antenna_gain.a1 = VAR_3->TupleData[1];
  VAR_6->antenna_gain.a2 = VAR_3->TupleData[1];
  VAR_6->antenna_gain.a3 = VAR_3->TupleData[1];
  break;
 case 134:
  FUNC_0((VAR_3->TupleDataLen != 3) &&
   (VAR_3->TupleDataLen != 5),
   "bfl tpl size");
  VAR_6->boardflags_lo = VAR_3->TupleData[1] |
   ((u16)VAR_3->TupleData[2] << 8);
  break;
 case 130:
  FUNC_0(VAR_3->TupleDataLen != 5,
   "leds tpl size");
  VAR_6->gpio0 = VAR_3->TupleData[1];
  VAR_6->gpio1 = VAR_3->TupleData[2];
  VAR_6->gpio2 = VAR_3->TupleData[3];
  VAR_6->gpio3 = VAR_3->TupleData[4];
  break;
 }
 return -VAR_1;

error:
 FUNC_1("PCMCIA: Failed to fetch device invariants: %s\n",
        VAR_8);
 return -VAR_0;
}

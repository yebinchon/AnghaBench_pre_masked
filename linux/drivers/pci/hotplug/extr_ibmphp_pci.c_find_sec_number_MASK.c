
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bus_node {int rangePFMem; int rangeMem; int rangeIO; } ;
struct bus_info {int slot_max; int slot_min; } ;


 int FUNC_0 (char*) ;
 struct bus_node* FUNC_1 (int) ;
 struct bus_info* FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(u8 VAR_0, u8 VAR_1)
{
 int VAR_2, VAR_3;
 u8 VAR_4;
 struct bus_info *VAR_5;
 struct bus_node *VAR_6;

 VAR_5 = FUNC_2(VAR_0);
 if (!VAR_5) {
  FUNC_0("cannot get slot range of the bus from the BIOS\n");
  return 0xff;
 }
 VAR_3 = VAR_5->slot_max;
 VAR_2 = VAR_5->slot_min;
 if ((VAR_1 > VAR_3) || (VAR_1 < VAR_2)) {
  FUNC_0("got the wrong range\n");
  return 0xff;
 }
 VAR_4 = (u8) (VAR_1 - (u8) VAR_2);
 VAR_4 += VAR_0 + 0x01;
 VAR_6 = FUNC_1(VAR_4);




 if ((!VAR_6) || (!(VAR_6->rangeIO) && !(VAR_6->rangeMem) && !(VAR_6->rangePFMem)))
  return VAR_4;
 return 0xff;
}

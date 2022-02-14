
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int revision; int regs; void* version_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct dwc3 *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->regs, VAR_0);


 if ((VAR_6 & VAR_1) == 0x55330000) {

  VAR_5->revision = VAR_6;
 } else if ((VAR_6 & VAR_1) == 0x33310000) {

  VAR_5->revision = FUNC_0(VAR_5->regs, VAR_3);
  VAR_5->revision |= VAR_2;
  VAR_5->version_type = FUNC_0(VAR_5->regs, VAR_4);
 } else {
  return 0;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {int connected; scalar_t__ revision; int test_mode; int regs; scalar_t__ setup_packet_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dwc3 *VAR_5)
{
 u32 VAR_6;

 VAR_5->connected = 1;
 if (VAR_5->revision < VAR_4) {
  if (VAR_5->setup_packet_pending)
   FUNC_1(VAR_5);
 }

 FUNC_3(VAR_5);

 VAR_6 = FUNC_2(VAR_5->regs, VAR_2);
 VAR_6 &= ~VAR_3;
 FUNC_4(VAR_5->regs, VAR_2, VAR_6);
 VAR_5->test_mode = 0;
 FUNC_0(VAR_5);


 VAR_6 = FUNC_2(VAR_5->regs, VAR_0);
 VAR_6 &= ~(VAR_1);
 FUNC_4(VAR_5->regs, VAR_0, VAR_6);
}

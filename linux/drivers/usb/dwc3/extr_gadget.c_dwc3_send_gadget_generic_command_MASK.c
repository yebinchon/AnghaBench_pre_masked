
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct dwc3 {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int,int) ;

int FUNC_4(struct dwc3 *VAR_5, unsigned VAR_6, u32 VAR_7)
{
 u32 VAR_8 = 500;
 int VAR_9 = 0;
 int VAR_10 = 0;
 u32 VAR_11;

 FUNC_2(VAR_5->regs, VAR_1, VAR_7);
 FUNC_2(VAR_5->regs, VAR_0, VAR_6 | VAR_2);

 do {
  VAR_11 = FUNC_1(VAR_5->regs, VAR_0);
  if (!(VAR_11 & VAR_2)) {
   VAR_9 = FUNC_0(VAR_11);
   if (VAR_9)
    VAR_10 = -VAR_3;
   break;
  }
 } while (--VAR_8);

 if (!VAR_8) {
  VAR_10 = -VAR_4;
  VAR_9 = -VAR_4;
 }

 FUNC_3(VAR_6, VAR_7, VAR_9);

 return VAR_10;
}

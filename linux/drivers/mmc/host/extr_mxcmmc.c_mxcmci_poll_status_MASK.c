
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxcmci_host {int clock; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct mxcmci_host*,int ) ;
 int FUNC_2 (struct mxcmci_host*,int ) ;
 int FUNC_3 (struct mxcmci_host*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct mxcmci_host *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 unsigned long VAR_8 = VAR_4 + VAR_0;

 do {
  VAR_7 = FUNC_1(VAR_5, VAR_1);
  if (VAR_7 & VAR_2)
   return VAR_7;
  if (FUNC_4(VAR_4, VAR_8)) {
   FUNC_3(VAR_5);
   FUNC_2(VAR_5, VAR_5->clock);
   return VAR_3;
  }
  if (VAR_7 & VAR_6)
   return 0;
  FUNC_0();
 } while (1);
}

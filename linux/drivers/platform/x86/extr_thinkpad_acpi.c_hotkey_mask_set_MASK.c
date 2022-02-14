
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ hotkey_mask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,char*,char*,int,int) ;
 int VAR_2 ;
 int const VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (char*,int const,int const) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_4(u32 VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 const u32 VAR_10 = VAR_7 & ~VAR_4;

 if (VAR_5.hotkey_mask) {
  for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
   if (!FUNC_0(VAR_2,
     ((void*)0), "MHKM", "vdd", VAR_8 + 1,
     !!(VAR_7 & (1 << VAR_8)))) {
    VAR_9 = -VAR_0;
    break;
   }
  }
 }
 if (!FUNC_1() && !VAR_9 && (VAR_10 & ~VAR_3)) {
  FUNC_3("asked for hotkey mask 0x%08x, but firmware forced it to 0x%08x\n",
     VAR_10, VAR_3);
 }

 if (VAR_6 != VAR_1)
  FUNC_2();

 return VAR_9;
}

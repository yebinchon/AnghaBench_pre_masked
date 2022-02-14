
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int name; scalar_t__ regs; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(adapter_t *VAR_5, int VAR_6, int VAR_7,
         int VAR_8, int VAR_9, u32 VAR_10)
{
 int VAR_11, VAR_12 = VAR_3;

 FUNC_8(FUNC_5(VAR_10) |
        FUNC_3(VAR_9) |
        FUNC_1(VAR_8) | FUNC_2(VAR_7) |
        FUNC_0(VAR_6) |
        FUNC_4(VAR_4),
        VAR_5->regs + VAR_0);
 FUNC_8(0, VAR_5->regs + VAR_1);

 do {
  VAR_11 = FUNC_7(VAR_5->regs + VAR_1) & VAR_2;
 } while (VAR_11 && --VAR_12);

 if (VAR_11)
  FUNC_6("%s: TRICN write timed out\n", VAR_5->name);

 return VAR_11;
}

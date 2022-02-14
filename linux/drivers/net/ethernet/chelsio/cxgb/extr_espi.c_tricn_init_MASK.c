
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ regs; int name; } ;
typedef TYPE_1__ adapter_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int,int,int ,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(adapter_t *VAR_5)
{
 int VAR_6, VAR_7 = 1;

 if (!(FUNC_1(VAR_5->regs + VAR_0) & VAR_3)) {
  FUNC_0("%s: ESPI clock not ready\n", VAR_5->name);
  return -1;
 }

 FUNC_3(VAR_1, VAR_5->regs + VAR_0);

 if (VAR_7) {
  FUNC_2(VAR_5, 0, 0, 0, VAR_4, 0x81);
  FUNC_2(VAR_5, 0, 1, 0, VAR_4, 0x81);
  FUNC_2(VAR_5, 0, 2, 0, VAR_4, 0x81);
 }
 for (VAR_6 = 1; VAR_6 <= 8; VAR_6++)
  FUNC_2(VAR_5, 0, 0, VAR_6, VAR_4, 0xf1);
 for (VAR_6 = 1; VAR_6 <= 2; VAR_6++)
  FUNC_2(VAR_5, 0, 1, VAR_6, VAR_4, 0xf1);
 for (VAR_6 = 1; VAR_6 <= 3; VAR_6++)
  FUNC_2(VAR_5, 0, 2, VAR_6, VAR_4, 0xe1);
 FUNC_2(VAR_5, 0, 2, 4, VAR_4, 0xf1);
 FUNC_2(VAR_5, 0, 2, 5, VAR_4, 0xe1);
 FUNC_2(VAR_5, 0, 2, 6, VAR_4, 0xf1);
 FUNC_2(VAR_5, 0, 2, 7, VAR_4, 0x80);
 FUNC_2(VAR_5, 0, 2, 8, VAR_4, 0xf1);

 FUNC_3(VAR_1 | VAR_2,
        VAR_5->regs + VAR_0);

 return 0;
}

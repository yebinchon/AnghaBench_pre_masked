
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned short base; } ;
typedef TYPE_1__ ppa_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (unsigned short) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned short,int) ;

__attribute__((used)) static int FUNC_7(ppa_struct *VAR_2)
{
 int VAR_3;
 unsigned short VAR_4 = VAR_2->base;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2, VAR_0);

 VAR_3 = 2;

 FUNC_6(VAR_4, 0xe);
 if ((FUNC_4(VAR_4) & 0x08) == 0x08)
  VAR_3--;

 FUNC_6(VAR_4, 0xc);
 if ((FUNC_4(VAR_4) & 0x08) == 0x00)
  VAR_3--;

 if (!VAR_3)
  FUNC_3(VAR_4);
 FUNC_5(1000);
 FUNC_2(VAR_2);
 FUNC_5(1000);

 if (VAR_3)
  return -VAR_1;

 return FUNC_0(VAR_2);
}

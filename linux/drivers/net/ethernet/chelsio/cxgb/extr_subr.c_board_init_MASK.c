
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {int board; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(adapter_t *VAR_1, const struct board_info *VAR_2)
{
 switch (VAR_2->board) {
 case 137:
 case 129:
 case 128:
 case 130:
  FUNC_1(VAR_1, 0xf);
  FUNC_2(VAR_1, VAR_0, 0x800);
  break;
 case 134:
  FUNC_1(VAR_1, 0xf);
  FUNC_2(VAR_1, VAR_0, 0x1800);




  FUNC_0(VAR_1);
  break;
 }
 return 0;
}

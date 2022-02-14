
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_device {int dummy; } ;




 int FUNC_0 (struct sym_device*,int ) ;
 int FUNC_1 (struct sym_device*,int ,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct sym_device *VAR_2, u_char VAR_3, u_char *VAR_4,
     int VAR_5)
{
 FUNC_2(5);
 switch (VAR_5) {
 case 129:
  *VAR_4 |= VAR_3;
  break;
 case 131:
  *VAR_4 &= 0xfe;
  break;
 case 128:
  *VAR_4 |= 0x02;
  break;
 case 130:
  *VAR_4 &= 0xfd;
  break;

 }
 FUNC_1(VAR_2, VAR_0, *VAR_4);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(5);
}

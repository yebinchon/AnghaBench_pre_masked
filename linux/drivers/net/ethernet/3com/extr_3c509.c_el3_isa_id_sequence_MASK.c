
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct el3_private {scalar_t__ type; } ;
typedef int __be16 ;
struct TYPE_3__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 struct el3_private* FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(__be16 *VAR_7)
{
 short VAR_8 = 0xff;
 int VAR_9;






 FUNC_4(0x00, VAR_5);
 FUNC_4(0x00, VAR_5);
 for (VAR_9 = 0; VAR_9 < 255; VAR_9++) {
  FUNC_4(VAR_8, VAR_5);
  VAR_8 <<= 1;
  VAR_8 = VAR_8 & 0x100 ? VAR_8 ^ 0xcf : VAR_8;
 }

 if (VAR_1 == 0)
  FUNC_4(0xd0, VAR_5);
 else
  FUNC_4(0xd8, VAR_5);
 if (FUNC_2(7) != 0x6d50)
  return 1;



 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  VAR_7[VAR_9] = FUNC_1(FUNC_2(VAR_9));
 return 0;

}

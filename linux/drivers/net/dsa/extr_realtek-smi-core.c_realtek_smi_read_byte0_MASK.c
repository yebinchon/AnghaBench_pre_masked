
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct realtek_smi {int dummy; } ;


 int FUNC_0 (struct realtek_smi*,int,int*) ;
 int FUNC_1 (struct realtek_smi*,int,int) ;

__attribute__((used)) static int FUNC_2(struct realtek_smi *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;


 FUNC_0(VAR_0, 8, &VAR_2);
 *VAR_1 = (VAR_2 & 0xff);


 FUNC_1(VAR_0, 0x00, 1);

 return 0;
}

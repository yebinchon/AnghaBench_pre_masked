
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sd {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct sd*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_0)
{
 u8 VAR_1;
 int VAR_2 = 0;

 FUNC_0("Dumping all vv6410 sensor registers\n");
 for (VAR_1 = 0; VAR_1 < 0xff && !VAR_2; VAR_1++) {
  u16 VAR_3;
  VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_3);
  FUNC_0("Register 0x%x contained 0x%x\n", VAR_1, VAR_3);
 }
 return (VAR_2 < 0) ? VAR_2 : 0;
}

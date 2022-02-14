
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sd {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct sd*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_2)
{
 u16 VAR_3, VAR_4;

 FUNC_0("Dumping sensor registers:\n");

 for (VAR_3 = VAR_0; VAR_3 <= VAR_1; VAR_3++) {
  FUNC_1(VAR_2, VAR_3, &VAR_4);
  FUNC_0("reg 0x%02x = 0x%02x\n", VAR_3, VAR_4);
 }
 return 0;
}

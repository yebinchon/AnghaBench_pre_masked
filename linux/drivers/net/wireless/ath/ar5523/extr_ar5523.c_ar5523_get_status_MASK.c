
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int which_be ;
typedef int u32 ;
struct ar5523 {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar5523*,int ,int *,int,void*,int,int ) ;
 int FUNC_1 (struct ar5523*,char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ar5523 *VAR_2, u32 VAR_3, void *VAR_4,
        int VAR_5)
{
 int VAR_6;
 __be32 VAR_7;

 VAR_7 = FUNC_2(VAR_3);
 VAR_6 = FUNC_0(VAR_2, VAR_1,
     &VAR_7, sizeof(VAR_7), VAR_4, VAR_5, VAR_0);
 if (VAR_6 != 0)
  FUNC_1(VAR_2, "could not read EEPROM offset 0x%02x\n", VAR_3);
 return VAR_6;
}

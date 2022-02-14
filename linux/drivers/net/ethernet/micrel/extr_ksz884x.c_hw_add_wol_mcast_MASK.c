
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_hw {int * override_addr; } ;


 int FUNC_0 (struct ksz_hw*,int,int,int const*,int,int*) ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_0)
{
 static const u8 VAR_1[] = { 0x3F };
 u8 VAR_2[] = { 0x33, 0x33, 0xFF, 0x00, 0x00, 0x00 };

 FUNC_1(&VAR_2[3], &VAR_0->override_addr[3], 3);
 FUNC_0(VAR_0, 1, 1, VAR_1, 6, VAR_2);
}

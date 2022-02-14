
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ksz_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ksz_hw*,int) ;
 int FUNC_1 (struct ksz_hw*,int) ;
 int FUNC_2 (struct ksz_hw*) ;
 int FUNC_3 (struct ksz_hw*,int ,int ) ;

__attribute__((used)) static u16 FUNC_4(struct ksz_hw *VAR_3, u8 VAR_4)
{
 u16 VAR_5;

 FUNC_1(VAR_3, VAR_1 | VAR_2);

 FUNC_3(VAR_3, VAR_0, VAR_4);
 VAR_5 = FUNC_2(VAR_3);

 FUNC_0(VAR_3, VAR_1 | VAR_2);

 return VAR_5;
}

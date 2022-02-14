
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alx_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct alx_hw*) ;

__attribute__((used)) static u32 FUNC_2(struct alx_hw *VAR_10)
{
 u32 VAR_11 = VAR_9 |
   VAR_8 |
   VAR_7 |
   VAR_6;

 if (FUNC_1(VAR_10))
  VAR_11 |= VAR_5;

 FUNC_0(VAR_9 != VAR_4);
 FUNC_0(VAR_8 != VAR_3);
 FUNC_0(VAR_7 != VAR_2);
 FUNC_0(VAR_6 != VAR_1);
 FUNC_0(VAR_5 != VAR_0);

 return VAR_11;
}

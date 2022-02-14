
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int dummy; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct atl1c_hw*,int) ;

__attribute__((used)) static int FUNC_3(struct atl1c_hw *VAR_11)
{
 u32 VAR_12;

 FUNC_0(VAR_11, VAR_7, &VAR_12);
 VAR_12 &= ~VAR_9;
 FUNC_1(VAR_11, VAR_7, VAR_12);

 FUNC_0(VAR_11, VAR_8, &VAR_12);
 VAR_12 &= ~VAR_10;
 FUNC_1(VAR_11, VAR_8, VAR_12);

 FUNC_2(VAR_11, VAR_1 | VAR_3);

 FUNC_0(VAR_11, VAR_6, &VAR_12);
 VAR_12 &= ~(VAR_5 | VAR_4);
 FUNC_1(VAR_11, VAR_6, VAR_12);

 return (int)FUNC_2(VAR_11,
  VAR_2 | VAR_0);
}

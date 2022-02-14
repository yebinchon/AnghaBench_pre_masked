
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* w1_slave_found_callback ) (struct w1_master*,int) ;
typedef int u8 ;
typedef int u64 ;
struct w1_master {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct w1_master *VAR_2,
  u8 VAR_3, w1_slave_found_callback VAR_4)
{
 u64 VAR_5, VAR_6, VAR_7, VAR_8;

 if (VAR_0)
  VAR_5 = VAR_0;
 else
  VAR_5 = 0x1;

 VAR_6 = FUNC_0(VAR_5);




 VAR_7 = FUNC_1((u8 *)&VAR_6, 7);
 VAR_8 = (VAR_7 << 56) | VAR_5;

 VAR_4(VAR_2, VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct seq_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, u8 VAR_2,
      u8 VAR_3, struct seq_file *VAR_4)
{
 u16 VAR_5, VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 u64 VAR_9[2] = {};

 VAR_8 = VAR_3 + VAR_2;
 VAR_7 = FUNC_0(VAR_8);

 FUNC_3(VAR_9, VAR_1, VAR_7);




 VAR_5 = VAR_0 - VAR_8;

 VAR_6 = VAR_0 - VAR_3;

 FUNC_2(VAR_9, VAR_5, VAR_6);
 FUNC_1(VAR_4, VAR_9);
}

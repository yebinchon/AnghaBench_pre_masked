
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;
struct btc_coexist {int dummy; } ;





 int FUNC_0 (struct btc_coexist*,struct seq_file*) ;
 int FUNC_1 (struct btc_coexist*,struct seq_file*) ;
 int FUNC_2 (struct btc_coexist*,struct seq_file*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, u8 VAR_1,
       struct seq_file *VAR_2)
{
 struct btc_coexist *VAR_3 = (struct btc_coexist *)VAR_0;

 switch (VAR_1) {
 case 129:
  FUNC_1(VAR_3, VAR_2);
  break;
 case 130:
  FUNC_0(VAR_3, VAR_2);
  break;
 case 128:
  FUNC_2(VAR_3, VAR_2);
  break;
 default:
  break;
 }
}

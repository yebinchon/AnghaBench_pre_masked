
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ab8500_gpadc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ab8500_gpadc*,int ,int) ;
 struct ab8500_gpadc* FUNC_1 (char*) ;
 int FUNC_2 (struct ab8500_gpadc*,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct seq_file*,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_5, void *VAR_6)
{
 int VAR_7;
 int VAR_8;
 struct ab8500_gpadc *VAR_9;

 VAR_9 = FUNC_1("ab8500-gpadc.0");
 VAR_7 = FUNC_2(VAR_9, VAR_0,
  VAR_1, VAR_3, VAR_4, VAR_2);
 VAR_8 = FUNC_0(VAR_9, VAR_0,
  VAR_7);

 FUNC_3(VAR_5, "%d,0x%X\n", VAR_8, VAR_7);

 return 0;
}

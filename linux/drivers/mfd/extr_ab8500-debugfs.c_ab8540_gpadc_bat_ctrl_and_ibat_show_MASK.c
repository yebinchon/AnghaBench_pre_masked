
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ab8500_gpadc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ab8500_gpadc*,int ,int) ;
 int FUNC_1 (struct ab8500_gpadc*,int ,int ,int ,int ,int ,int*) ;
 struct ab8500_gpadc* FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct seq_file*,char*,int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_7, void *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 struct ab8500_gpadc *VAR_13;

 VAR_13 = FUNC_2("ab8500-gpadc.0");
 VAR_9 = FUNC_1(VAR_13, VAR_1,
  VAR_3, VAR_5, VAR_6, VAR_4, &VAR_11);

 VAR_10 = FUNC_0(VAR_13, VAR_0,
  VAR_9);
 VAR_12 = FUNC_0(VAR_13, VAR_2,
  VAR_11);

 FUNC_3(VAR_7,
     "%d,0x%X\n"
     "%d,0x%X\n",
     VAR_10, VAR_9,
     VAR_12, VAR_11);

 return 0;
}

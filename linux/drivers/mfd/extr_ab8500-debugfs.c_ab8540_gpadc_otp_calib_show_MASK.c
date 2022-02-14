
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct seq_file {int dummy; } ;
struct ab8500_gpadc {int dummy; } ;


 struct ab8500_gpadc* FUNC_0 (char*) ;
 int FUNC_1 (struct ab8500_gpadc*,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct ab8500_gpadc *VAR_2;
 u16 VAR_3, VAR_4, VAR_5, VAR_6;
 u16 VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_2 = FUNC_0("ab8500-gpadc.0");
 FUNC_1(VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6,
   &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 FUNC_2(VAR_0,
     "VMAIN_L:0x%X\n"
     "VMAIN_H:0x%X\n"
     "BTEMP_L:0x%X\n"
     "BTEMP_H:0x%X\n"
     "VBAT_L:0x%X\n"
     "VBAT_H:0x%X\n"
     "IBAT_L:0x%X\n"
     "IBAT_H:0x%X\n",
     VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10);

 return 0;
}

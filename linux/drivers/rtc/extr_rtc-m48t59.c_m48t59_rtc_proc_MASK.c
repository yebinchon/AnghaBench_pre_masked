
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;
struct m48t59_private {int lock; } ;
struct m48t59_plat_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct m48t59_private* FUNC_1 (struct device*) ;
 struct m48t59_plat_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct seq_file*,char*,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct seq_file *VAR_3)
{
 struct m48t59_plat_data *VAR_4 = FUNC_2(VAR_2);
 struct m48t59_private *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6;
 u8 VAR_7;

 FUNC_4(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_0(VAR_0);
 FUNC_5(&VAR_5->lock, VAR_6);

 FUNC_3(VAR_3, "battery\t\t: %s\n",
   (VAR_7 & VAR_1) ? "low" : "normal");
 return 0;
}

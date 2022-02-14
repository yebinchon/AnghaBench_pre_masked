
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_3 (struct pinctrl_dev*,unsigned int,unsigned long*) ;
 int FUNC_4 (struct seq_file*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct pinctrl_dev *VAR_15,
       struct seq_file *VAR_16, unsigned VAR_17)
{
 unsigned long VAR_18;
 int VAR_19, VAR_20 = 0;

 FUNC_3(VAR_15, VAR_17, &VAR_18);

 FUNC_0(VAR_11);
 FUNC_0(VAR_13);
 FUNC_0(VAR_12);
 FUNC_0(VAR_3);
 FUNC_0(VAR_2);
 FUNC_1(VAR_4, FUNC_2(VAR_9),
        VAR_6);
 FUNC_1(VAR_4, FUNC_2(VAR_10),
        VAR_7);
 FUNC_1(VAR_4, FUNC_2(VAR_8),
        VAR_5);
 FUNC_0(VAR_14);
 FUNC_0(VAR_0);
 if (VAR_18 & VAR_0) {
  VAR_19 = VAR_18 >> VAR_1;
  FUNC_4(VAR_16, "(%d)", VAR_19);
 }

 return;
}

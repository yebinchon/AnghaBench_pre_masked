
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (char*,struct beiscsi_hba*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(void *VAR_2, int VAR_3, char *VAR_4)
{
 struct beiscsi_hba *VAR_5 = VAR_2;
 char *VAR_6 = VAR_4;
 int VAR_7 = -VAR_1;

 switch (VAR_3) {
 case 130:
  VAR_7 = FUNC_1(VAR_6, "%d\n", VAR_0);
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_6, "0\n");
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_6, VAR_5);
  break;
 }
 return VAR_7;
}

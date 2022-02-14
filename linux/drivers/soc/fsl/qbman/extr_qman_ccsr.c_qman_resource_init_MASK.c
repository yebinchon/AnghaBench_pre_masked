
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;

 switch (VAR_8 >> 8) {
 case 1:
  VAR_10 = 15;
  VAR_11 = 256;
  break;
 case 2:
  VAR_10 = 3;
  VAR_11 = 64;
  break;
 case 3:
  VAR_10 = 15;
  VAR_11 = 256;
  break;
 default:
  return -VAR_1;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_4 | VAR_0,
      VAR_10, -1);
 if (VAR_12) {
  FUNC_1(VAR_9, "Failed to seed pool channels (%d)\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_2(VAR_3, VAR_0, VAR_11, -1);
 if (VAR_12) {
  FUNC_1(VAR_9, "Failed to seed CGRID range (%d)\n", VAR_12);
  return VAR_12;
 }


 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  VAR_6 |= FUNC_0(VAR_13);

 VAR_12 = FUNC_2(VAR_5, VAR_2 | VAR_0,
      FUNC_3() - VAR_2, -1);
 if (VAR_12) {
  FUNC_1(VAR_9, "Failed to seed FQID range (%d)\n", VAR_12);
  return VAR_12;
 }

 return 0;
}

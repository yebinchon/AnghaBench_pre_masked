
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (struct s5p_mfc_dev*,int ) ;
 int FUNC_2 (struct s5p_mfc_dev*,int,int ) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_dev *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;


 FUNC_2(VAR_4, 0x1, VAR_2);
 VAR_6 = VAR_3 + FUNC_3(VAR_1);

 do {
  if (FUNC_4(VAR_3, VAR_6)) {
   FUNC_0("Timeout while resetting MFC.\n");
   return -VAR_0;
  }
  VAR_5 = FUNC_1(VAR_4, VAR_2);
 } while ((VAR_5 & 0x2) == 0);
 return 0;
}

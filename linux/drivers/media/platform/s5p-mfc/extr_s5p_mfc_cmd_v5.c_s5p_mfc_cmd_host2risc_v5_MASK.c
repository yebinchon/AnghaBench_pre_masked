
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_cmd_args {int* arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct s5p_mfc_dev*,int ) ;
 int FUNC_2 (struct s5p_mfc_dev*,int,int ) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_dev *VAR_9, int VAR_10,
    struct s5p_mfc_cmd_args *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;

 VAR_13 = VAR_8 + FUNC_3(VAR_1);

 do {
  if (FUNC_4(VAR_8, VAR_13)) {
   FUNC_0("Timeout while waiting for hardware\n");
   return -VAR_0;
  }
  VAR_12 = FUNC_1(VAR_9, VAR_7);
 } while (VAR_12 != VAR_2);
 FUNC_2(VAR_9, VAR_11->arg[0], VAR_3);
 FUNC_2(VAR_9, VAR_11->arg[1], VAR_4);
 FUNC_2(VAR_9, VAR_11->arg[2], VAR_5);
 FUNC_2(VAR_9, VAR_11->arg[3], VAR_6);

 FUNC_2(VAR_9, VAR_10, VAR_7);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_cmd_args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct s5p_mfc_dev*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct s5p_mfc_dev *VAR_3, int VAR_4,
    struct s5p_mfc_cmd_args *VAR_5)
{
 FUNC_0(2, "Issue the command: %d\n", VAR_4);


 FUNC_1(VAR_3, 0x0, VAR_2);


 FUNC_1(VAR_3, VAR_4, VAR_0);
 FUNC_1(VAR_3, 0x1, VAR_1);

 return 0;
}

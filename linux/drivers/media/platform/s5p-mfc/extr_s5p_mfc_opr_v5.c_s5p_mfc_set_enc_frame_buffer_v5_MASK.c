
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {struct s5p_mfc_dev* dev; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct s5p_mfc_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct s5p_mfc_ctx *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4)
{
 struct s5p_mfc_dev *VAR_5 = VAR_2->dev;

 FUNC_1(VAR_5, FUNC_0(VAR_3), VAR_1);
 FUNC_1(VAR_5, FUNC_0(VAR_4), VAR_0);
}

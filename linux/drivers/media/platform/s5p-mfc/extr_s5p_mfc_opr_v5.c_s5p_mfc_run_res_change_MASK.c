
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int curr_ctx; } ;
struct s5p_mfc_ctx {int num; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5p_mfc_ctx*,int ) ;
 int FUNC_1 (struct s5p_mfc_ctx*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct s5p_mfc_ctx *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = VAR_1->dev;

 FUNC_1(VAR_1, 0, 0, 0);
 VAR_2->curr_ctx = VAR_1->num;
 FUNC_0(VAR_1, VAR_0);
}

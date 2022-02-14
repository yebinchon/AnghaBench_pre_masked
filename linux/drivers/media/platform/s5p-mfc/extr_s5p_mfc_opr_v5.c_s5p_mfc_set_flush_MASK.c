
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {struct s5p_mfc_dev* dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct s5p_mfc_dev*,int ) ;
 int FUNC_1 (struct s5p_mfc_dev*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct s5p_mfc_ctx *VAR_3, int VAR_4)
{
 struct s5p_mfc_dev *VAR_5 = VAR_3->dev;
 unsigned int VAR_6;

 if (VAR_4)
  VAR_6 = FUNC_0(VAR_5, VAR_2) | (
   VAR_0 << VAR_1);
 else
  VAR_6 = FUNC_0(VAR_5, VAR_2) &
   ~(VAR_0 << VAR_1);
 FUNC_1(VAR_5, VAR_6, VAR_2);
}

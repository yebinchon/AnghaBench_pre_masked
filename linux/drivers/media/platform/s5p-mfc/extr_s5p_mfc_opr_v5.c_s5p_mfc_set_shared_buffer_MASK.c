
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {int dummy; } ;
struct TYPE_2__ {int ofs; } ;
struct s5p_mfc_ctx {TYPE_1__ shm; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5p_mfc_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct s5p_mfc_ctx *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = VAR_1->dev;
 FUNC_0(VAR_2, VAR_1->shm.ofs, VAR_0);
}

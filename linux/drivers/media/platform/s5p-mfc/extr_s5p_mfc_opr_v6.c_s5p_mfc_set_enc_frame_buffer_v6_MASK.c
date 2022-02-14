
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_regs {int e_source_second_plane_addr; int e_source_first_plane_addr; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {struct s5p_mfc_dev* dev; } ;


 int FUNC_0 (int,char*,unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct s5p_mfc_ctx *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 struct s5p_mfc_dev *VAR_3 = VAR_0->dev;
 const struct s5p_mfc_regs *VAR_4 = VAR_3->mfc_regs;

 FUNC_1(VAR_1, VAR_4->e_source_first_plane_addr);
 FUNC_1(VAR_2, VAR_4->e_source_second_plane_addr);

 FUNC_0(2, "enc src y buf addr: 0x%08lx\n", VAR_1);
 FUNC_0(2, "enc src c buf addr: 0x%08lx\n", VAR_2);
}

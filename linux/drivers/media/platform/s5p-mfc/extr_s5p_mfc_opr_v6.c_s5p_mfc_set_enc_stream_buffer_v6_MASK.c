
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_regs {int e_stream_buffer_size; int e_stream_buffer_addr; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {struct s5p_mfc_dev* dev; } ;


 int FUNC_0 (int,char*,unsigned long,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct s5p_mfc_ctx *VAR_0,
  unsigned long VAR_1, unsigned int VAR_2)
{
 struct s5p_mfc_dev *VAR_3 = VAR_0->dev;
 const struct s5p_mfc_regs *VAR_4 = VAR_3->mfc_regs;

 FUNC_1(VAR_1, VAR_4->e_stream_buffer_addr);
 FUNC_1(VAR_2, VAR_4->e_stream_buffer_size);

 FUNC_0(2, "stream buf addr: 0x%08lx, size: 0x%x\n",
    VAR_1, VAR_2);

 return 0;
}

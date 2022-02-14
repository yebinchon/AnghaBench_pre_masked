
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_regs {int d_cpb_buffer_offset; int d_cpb_buffer_size; int d_cpb_buffer_addr; int d_stream_data_size; } ;
struct s5p_mfc_dev {TYPE_1__* variant; struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {int inst_no; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_buf_size {unsigned int cpb; } ;
struct TYPE_2__ {struct s5p_mfc_buf_size* buf_size; } ;


 int FUNC_0 (int,char*,int ,int,unsigned int,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct s5p_mfc_ctx *VAR_0,
   int VAR_1, unsigned int VAR_2,
   unsigned int VAR_3)
{
 struct s5p_mfc_dev *VAR_4 = VAR_0->dev;
 const struct s5p_mfc_regs *VAR_5 = VAR_4->mfc_regs;
 struct s5p_mfc_buf_size *VAR_6 = VAR_4->variant->buf_size;

 FUNC_1();
 FUNC_0(2, "inst_no: %d, buf_addr: 0x%08x,\n"
  "buf_size: 0x%08x (%d)\n",
  VAR_0->inst_no, VAR_1, VAR_3, VAR_3);
 FUNC_3(VAR_3, VAR_5->d_stream_data_size);
 FUNC_3(VAR_1, VAR_5->d_cpb_buffer_addr);
 FUNC_3(VAR_6->cpb, VAR_5->d_cpb_buffer_size);
 FUNC_3(VAR_2, VAR_5->d_cpb_buffer_offset);

 FUNC_2();
 return 0;
}

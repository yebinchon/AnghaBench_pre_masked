
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_regs {int e_mslice_size_bits; int e_mslice_size_mb; int e_mslice_mode; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct TYPE_2__ {int mb; int bits; } ;
struct s5p_mfc_ctx {int slice_mode; TYPE_1__ slice_size; struct s5p_mfc_dev* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct s5p_mfc_ctx *VAR_2)
{
 struct s5p_mfc_dev *VAR_3 = VAR_2->dev;
 const struct s5p_mfc_regs *VAR_4 = VAR_3->mfc_regs;



 FUNC_0(VAR_2->slice_mode, VAR_4->e_mslice_mode);
 if (VAR_2->slice_mode == VAR_1) {
  FUNC_0(VAR_2->slice_size.mb, VAR_4->e_mslice_size_mb);
 } else if (VAR_2->slice_mode ==
   VAR_0) {
  FUNC_0(VAR_2->slice_size.bits, VAR_4->e_mslice_size_bits);
 } else {
  FUNC_0(0x0, VAR_4->e_mslice_size_mb);
  FUNC_0(0x0, VAR_4->e_mslice_size_bits);
 }

 return 0;
}

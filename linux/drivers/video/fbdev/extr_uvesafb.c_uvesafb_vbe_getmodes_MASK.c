
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct vbe_mode_ib {int mode_id; int mode_attr; int bits_per_pixel; int depth; int red_len; int green_len; int blue_len; } ;
struct TYPE_4__ {int mode_list_ptr; } ;
struct uvesafb_par {scalar_t__ vbe_modes_cnt; struct vbe_mode_ib* vbe_modes; TYPE_1__ vbe_ib; } ;
struct TYPE_5__ {int eax; scalar_t__ ecx; } ;
struct TYPE_6__ {int flags; int buf_len; TYPE_2__ regs; } ;
struct uvesafb_ktask {struct vbe_mode_ib* buf; TYPE_3__ t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vbe_mode_ib* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (char*,int,scalar_t__,int) ;
 int FUNC_2 (struct uvesafb_ktask*) ;
 int FUNC_3 (struct uvesafb_ktask*) ;

__attribute__((used)) static int FUNC_4(struct uvesafb_ktask *VAR_6,
    struct uvesafb_par *VAR_7)
{
 int VAR_8 = 0, VAR_9;
 u16 *VAR_10;

 VAR_7->vbe_modes_cnt = 0;


 VAR_10 = (u16 *) (((u8 *)&VAR_7->vbe_ib) + VAR_7->vbe_ib.mode_list_ptr);
 while (*VAR_10 != 0xffff) {
  VAR_7->vbe_modes_cnt++;
  VAR_10++;
 }

 VAR_7->vbe_modes = FUNC_0(VAR_7->vbe_modes_cnt,
     sizeof(struct vbe_mode_ib),
     VAR_2);
 if (!VAR_7->vbe_modes)
  return -VAR_1;


 VAR_10 = (u16 *) (((u8 *)&VAR_7->vbe_ib) + VAR_7->vbe_ib.mode_list_ptr);
 while (*VAR_10 != 0xffff) {
  struct vbe_mode_ib *VAR_11;

  FUNC_3(VAR_6);
  VAR_6->t.regs.eax = 0x4f01;
  VAR_6->t.regs.ecx = (u32) *VAR_10;
  VAR_6->t.flags = VAR_4 | VAR_3;
  VAR_6->t.buf_len = sizeof(struct vbe_mode_ib);
  VAR_6->buf = VAR_7->vbe_modes + VAR_8;

  VAR_9 = FUNC_2(VAR_6);
  if (VAR_9 || (VAR_6->t.regs.eax & 0xffff) != 0x004f) {
   FUNC_1("Getting mode info block for mode 0x%x failed (eax=0x%x, err=%d)\n",
    *VAR_10, (u32)VAR_6->t.regs.eax, VAR_9);
   VAR_10++;
   VAR_7->vbe_modes_cnt--;
   continue;
  }

  VAR_11 = VAR_6->buf;
  VAR_11->mode_id = *VAR_10;






  if ((VAR_11->mode_attr & VAR_5) == VAR_5 &&
     VAR_11->bits_per_pixel >= 8)
   VAR_8++;
  else
   VAR_7->vbe_modes_cnt--;

  VAR_10++;
  VAR_11->depth = VAR_11->red_len + VAR_11->green_len + VAR_11->blue_len;





  if (VAR_11->depth == 0 || (VAR_11->depth == 24 &&
     VAR_11->bits_per_pixel == 32))
   VAR_11->depth = VAR_11->bits_per_pixel;
 }

 if (VAR_7->vbe_modes_cnt > 0)
  return 0;
 else
  return -VAR_0;
}

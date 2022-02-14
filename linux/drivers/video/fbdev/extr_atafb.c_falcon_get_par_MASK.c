
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct falcon_hw {int st_shift; int f_shift; int sync; int xoffset; int ste_mode; int mono; int vss; int vde; int vdb; int vbe; int vbb; int vft; int hss; int hde; int hdb; int hbe; int hbb; int hht; int vid_mode; int vid_control; int line_offset; int line_width; } ;
struct TYPE_5__ {struct falcon_hw falcon; } ;
struct atafb_par {int screen_base; TYPE_1__ hw; } ;
struct TYPE_8__ {int off_next; int scn_width; } ;
struct TYPE_7__ {int syncmode; int bas_hi; int bas_md; int bas_lo; } ;
struct TYPE_6__ {int st_shift; int f_shift; int xoffset; int vss; int vde; int vdb; int vbe; int vbb; int vft; int hss; int hde; int hdb; int hbe; int hbb; int hht; int mode; int control; } ;


 int FUNC_0 (unsigned long) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct atafb_par *VAR_3)
{
 unsigned long VAR_4;
 struct falcon_hw *VAR_5 = &VAR_3->hw.falcon;

 VAR_5->line_width = VAR_0;
 VAR_5->line_offset = VAR_0;
 VAR_5->st_shift = VAR_2.st_shift & 0x300;
 VAR_5->f_shift = VAR_2.f_shift;
 VAR_5->vid_control = VAR_2.control;
 VAR_5->vid_mode = VAR_2.mode;
 VAR_5->sync = VAR_1.syncmode & 0x1;
 VAR_5->xoffset = VAR_2.xoffset & 0xf;
 VAR_5->hht = VAR_2.hht;
 VAR_5->hbb = VAR_2.hbb;
 VAR_5->hbe = VAR_2.hbe;
 VAR_5->hdb = VAR_2.hdb;
 VAR_5->hde = VAR_2.hde;
 VAR_5->hss = VAR_2.hss;
 VAR_5->vft = VAR_2.vft;
 VAR_5->vbb = VAR_2.vbb;
 VAR_5->vbe = VAR_2.vbe;
 VAR_5->vdb = VAR_2.vdb;
 VAR_5->vde = VAR_2.vde;
 VAR_5->vss = VAR_2.vss;

 VAR_4 = (VAR_1.bas_hi & 0xff) << 16 |
        (VAR_1.bas_md & 0xff) << 8 |
        (VAR_1.bas_lo & 0xff);
 VAR_3->screen_base = FUNC_0(VAR_4);


 VAR_5->ste_mode = (VAR_5->f_shift & 0x510) == 0 && VAR_5->st_shift == 0x100;
 VAR_5->mono = (VAR_5->f_shift & 0x400) ||
            ((VAR_5->f_shift & 0x510) == 0 && VAR_5->st_shift == 0x200);
}

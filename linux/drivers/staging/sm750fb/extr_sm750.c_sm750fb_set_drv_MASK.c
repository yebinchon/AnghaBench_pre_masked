
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int de_wait; } ;
struct sm750_dev {int vidmem_size; int fb_count; scalar_t__ revid; int dataflow; int pvMem; TYPE_1__ accel; int hwCursor; } ;
struct lynxfb_crtc {int vidmem_size; int line_pad; int xpanstep; int ypanstep; int oScreen; int vScreen; void* channel; scalar_t__ ywrapstep; } ;
struct lynxfb_output {void* paths; int proc_setBLANK; } ;
struct lynxfb_par {int index; struct lynxfb_crtc crtc; struct lynxfb_output output; struct sm750_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 void* VAR_7 ;


 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;



__attribute__((used)) static int FUNC_1(struct lynxfb_par *VAR_12)
{
 int VAR_13;
 struct sm750_dev *VAR_14;
 struct lynxfb_output *VAR_15;
 struct lynxfb_crtc *VAR_16;

 VAR_13 = 0;

 VAR_14 = VAR_12->dev;
 VAR_15 = &VAR_12->output;
 VAR_16 = &VAR_12->crtc;

 VAR_16->vidmem_size = VAR_14->vidmem_size;
 if (VAR_14->fb_count > 1)
  VAR_16->vidmem_size >>= 1;


 VAR_14->hwCursor = VAR_2;

 VAR_16->line_pad = 16;
 VAR_16->xpanstep = 8;
 VAR_16->ypanstep = 1;
 VAR_16->ywrapstep = 0;

 VAR_15->proc_setBLANK = (VAR_14->revid == VAR_1) ?
     VAR_6 : VAR_4;

 VAR_14->accel.de_wait = (VAR_14->revid == VAR_1) ?
        VAR_5 : VAR_3;
 switch (VAR_14->dataflow) {
 case 129:
  VAR_15->paths = VAR_9;
  VAR_16->channel = VAR_10;
  VAR_16->oScreen = 0;
  VAR_16->vScreen = VAR_14->pvMem;
  FUNC_0("use simul primary mode\n");
  break;
 case 128:
  VAR_15->paths = VAR_9;
  VAR_16->channel = VAR_11;
  VAR_16->oScreen = 0;
  VAR_16->vScreen = VAR_14->pvMem;
  break;
 case 131:
  if (VAR_12->index == 0) {
   VAR_15->paths = VAR_8;
   VAR_16->channel = VAR_10;
   VAR_16->oScreen = 0;
   VAR_16->vScreen = VAR_14->pvMem;
  } else {
   VAR_15->paths = VAR_7;
   VAR_16->channel = VAR_11;

   VAR_16->oScreen = VAR_14->vidmem_size >> 1;
   VAR_16->vScreen = VAR_14->pvMem + VAR_16->oScreen;
  }
  break;
 case 130:
  if (VAR_12->index == 0) {
   VAR_15->paths = VAR_8;
   VAR_16->channel = VAR_11;
   VAR_16->oScreen = 0;
   VAR_16->vScreen = VAR_14->pvMem;
  } else {
   VAR_15->paths = VAR_7;
   VAR_16->channel = VAR_10;

   VAR_16->oScreen = VAR_14->vidmem_size >> 1;
   VAR_16->vScreen = VAR_14->pvMem + VAR_16->oScreen;
  }
  break;
 default:
  VAR_13 = -VAR_0;
 }

 return VAR_13;
}

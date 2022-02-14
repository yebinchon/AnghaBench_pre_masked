
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btcx_riscmem {int dummy; } ;
struct TYPE_4__ {unsigned int vdelay; } ;
struct TYPE_3__ {int queue; int state; } ;
struct bttv_buffer {scalar_t__* vbi_count; struct btcx_riscmem bottom; struct btcx_riscmem top; TYPE_2__ geo; TYPE_1__ vb; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct bttv*,int ,struct btcx_riscmem*,int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct bttv *VAR_7,
    struct bttv_buffer *VAR_8)
{
 struct btcx_riscmem *VAR_9;
 struct btcx_riscmem *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);
 VAR_11 = 0;
 VAR_12 = 0;

 if (VAR_8) {
  unsigned int VAR_13, VAR_14;

  VAR_8->vb.state = VAR_6;
  FUNC_3(&VAR_8->vb.queue);


  VAR_13 = FUNC_0(VAR_0);
  VAR_14 = FUNC_0(VAR_1) + ((VAR_13 & 0xc0) << 2);

  if (VAR_8->geo.vdelay > VAR_14) {
   VAR_14 = VAR_8->geo.vdelay & 0xfe;
   VAR_13 = (VAR_13 & 0x3f) | ((VAR_8->geo.vdelay >> 2) & 0xc0);

   FUNC_2(VAR_14, VAR_1);
   FUNC_2(VAR_13, VAR_0);
   FUNC_2(VAR_14, VAR_3);
   FUNC_2(VAR_13, VAR_2);
  }

  if (VAR_8->vbi_count[0] > 0) {
   VAR_9 = &VAR_8->top;
   VAR_11 = 4;
  }

  if (VAR_8->vbi_count[1] > 0) {
   VAR_11 = 0;
   VAR_10 = &VAR_8->bottom;
   VAR_12 = 4;
  }
 }

 FUNC_1(VAR_7, VAR_5, VAR_9, VAR_11);
 FUNC_1(VAR_7, VAR_4, VAR_10, VAR_12);

 return 0;
}

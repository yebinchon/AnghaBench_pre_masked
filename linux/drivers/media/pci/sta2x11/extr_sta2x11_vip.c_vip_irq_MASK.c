
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sta2x11_vip {int tcount; TYPE_2__* active; int sequence; int bcount; int overflow; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_4__ {TYPE_3__ vb2_buf; scalar_t__ sequence; } ;
struct TYPE_5__ {TYPE_1__ vb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (struct sta2x11_vip*,int ) ;
 int FUNC_3 (struct sta2x11_vip*,int ,unsigned int) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, struct sta2x11_vip *VAR_10)
{
 unsigned int VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_2);

 if (!VAR_11)
  return VAR_7;

 if (VAR_11 & VAR_3)
  if (VAR_10->overflow++ > 5)
   FUNC_1("VIP: fifo overflow\n");

 if ((VAR_11 & VAR_5) && (VAR_11 & VAR_4)) {


  return VAR_6;
 }

 if (VAR_11 & VAR_5)
  if ((++VAR_10->tcount) < 2)
   return VAR_6;
 if (VAR_11 & VAR_4) {
  VAR_10->bcount++;
  return VAR_6;
 }

 if (VAR_10->active) {

  FUNC_3(VAR_10, VAR_0, FUNC_2(VAR_10, VAR_0) & ~VAR_1);

  VAR_10->active->vb.vb2_buf.timestamp = FUNC_0();
  VAR_10->active->vb.sequence = VAR_10->sequence++;
  FUNC_4(&VAR_10->active->vb.vb2_buf, VAR_8);
 }

 return VAR_6;
}

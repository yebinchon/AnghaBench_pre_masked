
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* tty; } ;
struct slgt_info {TYPE_2__ port; int icount; scalar_t__ pending_bh; int device_name; scalar_t__ tx_buf; int max_frame_size; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_8(struct slgt_info *VAR_3)
{
 FUNC_1(("%s startup\n", VAR_3->device_name));

 if (FUNC_6(&VAR_3->port))
  return 0;

 if (!VAR_3->tx_buf) {
  VAR_3->tx_buf = FUNC_4(VAR_3->max_frame_size, VAR_1);
  if (!VAR_3->tx_buf) {
   FUNC_0(("%s can't allocate tx buffer\n", VAR_3->device_name));
   return -VAR_0;
  }
 }

 VAR_3->pending_bh = 0;

 FUNC_5(&VAR_3->icount, 0, sizeof(VAR_3->icount));


 FUNC_2(VAR_3);

 if (VAR_3->port.tty)
  FUNC_3(VAR_2, &VAR_3->port.tty->flags);

 FUNC_7(&VAR_3->port, 1);

 return 0;
}

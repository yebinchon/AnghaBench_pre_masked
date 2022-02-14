
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int tid; } ;
struct cw1200_txinfo {TYPE_1__ txpriv; TYPE_2__* hdr; } ;
struct cw1200_common {int dummy; } ;
struct TYPE_4__ {int frame_control; } ;


 int VAR_0 ;
 int* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct cw1200_common *VAR_1,
       struct cw1200_txinfo *VAR_2)
{
 if (FUNC_2(VAR_2->hdr->frame_control)) {
  u8 *VAR_3 = FUNC_0(VAR_2->hdr);
  VAR_2->txpriv.tid = VAR_3[0] & VAR_0;
 } else if (FUNC_1(VAR_2->hdr->frame_control)) {
  VAR_2->txpriv.tid = 0;
 }
}

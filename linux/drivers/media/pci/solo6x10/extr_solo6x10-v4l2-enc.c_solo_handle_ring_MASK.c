
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vop_header ;
typedef size_t u8 ;
typedef int u32 ;
struct solo_enc_dev {int dummy; } ;
struct solo_enc_buf {int motion; int vh; int type; } ;
struct solo_dev {size_t enc_idx; int vh_buf; int vh_dma; TYPE_1__* pdev; struct solo_enc_dev** v4l2_enc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,size_t) ;
 scalar_t__ FUNC_4 (struct solo_dev*,int ,int,int) ;
 int FUNC_5 (struct solo_enc_dev*,struct solo_enc_buf*) ;
 scalar_t__ FUNC_6 (struct solo_enc_dev*) ;
 int FUNC_7 (struct solo_dev*,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct solo_dev *VAR_4)
{
 for (;;) {
  struct solo_enc_dev *VAR_5;
  struct solo_enc_buf VAR_6;
  u32 VAR_7, VAR_8;
  u8 VAR_9;
  u8 VAR_10;


  VAR_10 = FUNC_7(VAR_4, FUNC_2(11)) & 0xff;
  if (VAR_10 == VAR_4->enc_idx)
   break;

  VAR_7 = FUNC_7(VAR_4,
     FUNC_1(VAR_4->enc_idx));
  VAR_4->enc_idx = (VAR_4->enc_idx + 1) % VAR_0;

  VAR_9 = (VAR_7 >> 24) & 0x1f;
  VAR_8 = VAR_7 & 0x00ffffff;

  if (VAR_9 >= VAR_3) {
   VAR_9 -= VAR_3;
   VAR_6.type = VAR_1;
  } else
   VAR_6.type = VAR_2;

  VAR_5 = VAR_4->v4l2_enc[VAR_9];
  if (VAR_5 == ((void*)0)) {
   FUNC_3(&VAR_4->pdev->dev,
    "Got spurious packet for channel %d\n", VAR_9);
   continue;
  }


  if (FUNC_4(VAR_4, VAR_4->vh_dma, VAR_8,
         sizeof(vop_header)))
   continue;

  VAR_6.vh = VAR_4->vh_buf;


  if (FUNC_8(VAR_6.vh) !=
   FUNC_0(VAR_4) + VAR_8)
   continue;

  if (FUNC_6(VAR_5))
   VAR_6.motion = 1;
  else
   VAR_6.motion = 0;

  FUNC_5(VAR_5, &VAR_6);
 }
}

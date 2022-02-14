
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long u32 ;
struct vb2_v4l2_buffer {int flags; scalar_t__ sequence; int vb2_buf; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct coda_ctx {scalar_t__ qsequence; int hold; TYPE_4__* dev; TYPE_3__* codec; TYPE_1__ bitstream; } ;
struct TYPE_8__ {int m2m_dev; int v4l2_dev; TYPE_2__* devtype; } ;
struct TYPE_7__ {scalar_t__ src_fourcc; } ;
struct TYPE_6__ {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct coda_ctx*) ;
 int FUNC_1 (struct coda_ctx*,int *,unsigned long) ;
 unsigned long FUNC_2 (struct coda_ctx*,struct vb2_v4l2_buffer*,unsigned long) ;
 int FUNC_3 (int,struct coda_ctx*,char*,...) ;
 scalar_t__ FUNC_4 (struct coda_ctx*) ;
 int FUNC_5 (struct coda_ctx*,int) ;
 int FUNC_6 (struct coda_ctx*) ;
 int FUNC_7 (int *,char*) ;
 struct coda_ctx* FUNC_8 (int ) ;
 unsigned long FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *,int ) ;

__attribute__((used)) static bool FUNC_11(struct coda_ctx *VAR_3,
         struct vb2_v4l2_buffer *VAR_4)
{
 unsigned long VAR_5 = FUNC_9(&VAR_4->vb2_buf, 0);
 u8 *VAR_6 = FUNC_10(&VAR_4->vb2_buf, 0);
 int VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_3) + VAR_5 + 512 >=
     VAR_3->bitstream.size)
  return 0;

 if (!VAR_6) {
  FUNC_7(&VAR_3->dev->v4l2_dev, "trying to queue empty buffer\n");
  return 1;
 }

 if (VAR_3->qsequence == 0 && VAR_5 < 512) {







  u32 VAR_9 = FUNC_2(VAR_3, VAR_4,
           VAR_5);

  if (VAR_9) {
   FUNC_3(1, VAR_3, "pad with %u-byte header\n",
     VAR_9);
   for (VAR_8 = VAR_5; VAR_8 < 512; VAR_8 += VAR_9) {
    VAR_7 = FUNC_1(VAR_3, VAR_6,
          VAR_9);
    if (VAR_7 < 0) {
     FUNC_7(&VAR_3->dev->v4l2_dev,
       "bitstream buffer overflow\n");
     return 0;
    }
    if (VAR_3->dev->devtype->product == VAR_0)
     break;
   }
  } else {
   FUNC_3(1, VAR_3,
     "could not parse header, sequence initialization might fail\n");
  }
 }


 if (VAR_3->qsequence == 0 && VAR_5 < 512 &&
     VAR_3->codec->src_fourcc == VAR_2)
  FUNC_5(VAR_3, 512 - VAR_5);

 VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_5);
 if (VAR_7 < 0) {
  FUNC_7(&VAR_3->dev->v4l2_dev, "bitstream buffer overflow\n");
  return 0;
 }

 VAR_4->sequence = VAR_3->qsequence++;


 if (VAR_3 == FUNC_8(VAR_3->dev->m2m_dev))
  FUNC_6(VAR_3);


 if (VAR_4->flags & VAR_1)
  FUNC_0(VAR_3);
 VAR_3->hold = 0;

 return 1;
}

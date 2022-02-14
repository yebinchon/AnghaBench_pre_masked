
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct coda_q_data {scalar_t__ fourcc; TYPE_1__ rect; } ;
struct coda_dev {TYPE_2__* devtype; } ;
struct TYPE_6__ {int vaddr; } ;
struct coda_ctx {TYPE_3__ workbuf; TYPE_3__ psbuf; TYPE_3__ slicebuf; TYPE_3__ parabuf; struct coda_dev* dev; } ;
struct TYPE_5__ {scalar_t__ product; size_t workbuf_size; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct coda_ctx*,TYPE_3__*,size_t,char*) ;
 int FUNC_2 (struct coda_ctx*) ;

__attribute__((used)) static int FUNC_3(struct coda_ctx *VAR_8,
          struct coda_q_data *VAR_9)
{
 struct coda_dev *VAR_10 = VAR_8->dev;
 size_t VAR_11;
 int VAR_12;

 if (!VAR_8->parabuf.vaddr) {
  VAR_12 = FUNC_1(VAR_8, &VAR_8->parabuf,
          VAR_6, "parabuf");
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_10->devtype->product == VAR_4)
  return 0;

 if (!VAR_8->slicebuf.vaddr && VAR_9->fourcc == VAR_7) {

  VAR_11 = (FUNC_0(VAR_9->rect.width, 16) *
   FUNC_0(VAR_9->rect.height, 16)) * 3200 / 8 + 512;
  VAR_12 = FUNC_1(VAR_8, &VAR_8->slicebuf, VAR_11,
          "slicebuf");
  if (VAR_12 < 0)
   goto err;
 }

 if (!VAR_8->psbuf.vaddr && (VAR_10->devtype->product == VAR_5 ||
      VAR_10->devtype->product == VAR_2)) {
  VAR_12 = FUNC_1(VAR_8, &VAR_8->psbuf,
          VAR_0, "psbuf");
  if (VAR_12 < 0)
   goto err;
 }

 if (!VAR_8->workbuf.vaddr) {
  VAR_11 = VAR_10->devtype->workbuf_size;
  if (VAR_10->devtype->product == VAR_3 &&
      VAR_9->fourcc == VAR_7)
   VAR_11 += VAR_1;
  VAR_12 = FUNC_1(VAR_8, &VAR_8->workbuf, VAR_11,
          "workbuf");
  if (VAR_12 < 0)
   goto err;
 }

 return 0;

err:
 FUNC_2(VAR_8);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_6__ {unsigned int width; unsigned int height; } ;
struct coda_q_data {TYPE_1__ rect; } ;
struct coda_dev {TYPE_3__* devtype; } ;
struct coda_ctx {scalar_t__ tiled_map_type; int num_internal_frames; TYPE_4__* codec; TYPE_2__* internal_frames; struct coda_dev* dev; } ;
struct TYPE_10__ {unsigned int paddr; } ;
struct TYPE_9__ {scalar_t__ src_fourcc; scalar_t__ dst_fourcc; } ;
struct TYPE_8__ {scalar_t__ product; } ;
struct TYPE_7__ {TYPE_5__ buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct coda_ctx*,TYPE_5__*,size_t,char*) ;
 int FUNC_1 (struct coda_ctx*) ;
 int FUNC_2 (struct coda_ctx*,int,unsigned int) ;
 char* FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 unsigned int FUNC_5 (unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct coda_ctx *VAR_6,
       struct coda_q_data *VAR_7, u32 VAR_8)
{
 struct coda_dev *VAR_9 = VAR_6->dev;
 unsigned int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_6->codec->src_fourcc == VAR_4 ||
     VAR_6->codec->dst_fourcc == VAR_4 ||
     VAR_6->codec->src_fourcc == VAR_5 ||
     VAR_6->codec->dst_fourcc == VAR_5)
  VAR_10 = FUNC_5(VAR_7->rect.width, 16) *
   FUNC_5(VAR_7->rect.height, 16);
 else
  VAR_10 = FUNC_5(VAR_7->rect.width, 8) * VAR_7->rect.height;

 if (VAR_6->tiled_map_type == VAR_2)
  VAR_11 = FUNC_5(VAR_10, 4096) + VAR_10 / 2;
 else
  VAR_11 = VAR_10 + VAR_10 / 2;


 for (VAR_13 = 0; VAR_13 < VAR_6->num_internal_frames; VAR_13++) {
  size_t VAR_14 = VAR_11;
  char *VAR_15;


  if (VAR_9->devtype->product != VAR_0 &&
      (VAR_6->codec->src_fourcc == VAR_4 ||
       (VAR_6->codec->src_fourcc == VAR_5 && VAR_13 == 0)))
   VAR_14 += VAR_10 / 4;
  VAR_15 = FUNC_3(VAR_3, "fb%d", VAR_13);
  if (!VAR_15) {
   FUNC_1(VAR_6);
   return -VAR_1;
  }
  VAR_12 = FUNC_0(VAR_6, &VAR_6->internal_frames[VAR_13].buf,
          VAR_14, VAR_15);
  FUNC_4(VAR_15);
  if (VAR_12 < 0) {
   FUNC_1(VAR_6);
   return VAR_12;
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_6->num_internal_frames; VAR_13++) {
  u32 VAR_16, VAR_17, VAR_18, VAR_19;


  VAR_16 = VAR_6->internal_frames[VAR_13].buf.paddr;
  VAR_17 = VAR_16 + VAR_10;
  VAR_18 = VAR_16 + VAR_10 + VAR_10/4;
  VAR_19 = VAR_16 + VAR_10 + VAR_10/4 + VAR_10/4;
  if (VAR_6->tiled_map_type == VAR_2) {
   VAR_17 = FUNC_5(VAR_17, 4096);
   VAR_19 = VAR_17 + VAR_10/2;
   VAR_18 = 0;


   VAR_16 = (VAR_16 & 0xfffff000) | VAR_17 >> 20;
   VAR_17 = (VAR_17 & 0x000ff000) << 12;
  }
  FUNC_2(VAR_6, VAR_13 * 3 + 0, VAR_16);
  FUNC_2(VAR_6, VAR_13 * 3 + 1, VAR_17);
  FUNC_2(VAR_6, VAR_13 * 3 + 2, VAR_18);

  if (VAR_9->devtype->product == VAR_0)
   continue;


  if (VAR_6->codec->src_fourcc == VAR_4)
   FUNC_2(VAR_6, 96 + VAR_13, VAR_19);
  if (VAR_6->codec->src_fourcc == VAR_5 && VAR_13 == 0)
   FUNC_2(VAR_6, 97, VAR_19);
 }

 return 0;
}

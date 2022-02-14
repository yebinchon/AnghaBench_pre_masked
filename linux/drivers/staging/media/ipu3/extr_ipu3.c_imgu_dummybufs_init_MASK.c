
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_pix_format_mplane {TYPE_4__* plane_fmt; } ;
struct v4l2_meta_format {size_t buffersize; } ;
struct imgu_media_pipe {TYPE_5__* queues; TYPE_3__* nodes; int * queue_enabled; } ;
struct imgu_device {struct imgu_media_pipe* imgu_pipe; } ;
struct TYPE_12__ {int daddr; } ;
struct TYPE_11__ {TYPE_6__ dmap; int * dummybufs; } ;
struct TYPE_10__ {size_t sizeimage; } ;
struct TYPE_7__ {struct v4l2_pix_format_mplane pix_mp; struct v4l2_meta_format meta; } ;
struct TYPE_8__ {TYPE_1__ fmt; } ;
struct TYPE_9__ {TYPE_2__ vdev_fmt; int enabled; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct imgu_device*,TYPE_6__*,size_t) ;
 int FUNC_2 (struct imgu_device*,unsigned int) ;
 unsigned int FUNC_3 (struct imgu_device*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct imgu_device *VAR_8, unsigned int VAR_9)
{
 const struct v4l2_pix_format_mplane *VAR_10;
 const struct v4l2_meta_format *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 size_t VAR_15;
 struct imgu_media_pipe *VAR_16 = &VAR_8->imgu_pipe[VAR_9];


 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_14 = FUNC_3(VAR_8, VAR_12);
  if (!VAR_16->queue_enabled[VAR_14] || VAR_12 == VAR_5)
   continue;

  if (!VAR_16->nodes[VAR_4].enabled &&
      VAR_12 == VAR_7)




   continue;

  VAR_11 = &VAR_16->nodes[VAR_14].vdev_fmt.fmt.meta;
  VAR_10 = &VAR_16->nodes[VAR_14].vdev_fmt.fmt.pix_mp;

  if (VAR_14 == VAR_3 || VAR_14 == VAR_2)
   VAR_15 = VAR_11->buffersize;
  else
   VAR_15 = VAR_10->plane_fmt[0].sizeimage;

  if (FUNC_1(VAR_8,
            &VAR_16->queues[VAR_12].dmap,
            VAR_15)) {
   FUNC_2(VAR_8, VAR_9);
   return -VAR_0;
  }

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
   FUNC_0(&VAR_16->queues[VAR_12].dummybufs[VAR_13], VAR_12,
       VAR_16->queues[VAR_12].dmap.daddr);
 }

 return 0;
}

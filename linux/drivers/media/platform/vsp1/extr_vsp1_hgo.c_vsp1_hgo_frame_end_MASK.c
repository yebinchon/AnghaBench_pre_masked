
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct vsp1_histogram_buffer {void** addr; } ;
struct TYPE_4__ {int vsp1; } ;
struct TYPE_5__ {TYPE_1__ entity; } ;
struct vsp1_hgo {int num_bins; TYPE_2__ histo; scalar_t__ max_rgb; } ;
struct vsp1_entity {int subdev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct vsp1_hgo* FUNC_3 (int *) ;
 void* FUNC_4 (struct vsp1_hgo*,int ) ;
 int FUNC_5 (TYPE_2__*,struct vsp1_histogram_buffer*,size_t) ;
 struct vsp1_histogram_buffer* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ,unsigned int) ;

void FUNC_8(struct vsp1_entity *VAR_8)
{
 struct vsp1_hgo *VAR_9 = FUNC_3(&VAR_8->subdev);
 struct vsp1_histogram_buffer *VAR_10;
 unsigned int VAR_11;
 size_t VAR_12;
 u32 *VAR_13;

 VAR_10 = FUNC_6(&VAR_9->histo);
 if (!VAR_10)
  return;

 VAR_13 = VAR_10->addr;

 if (VAR_9->num_bins == 256) {
  *VAR_13++ = FUNC_4(VAR_9, VAR_4);
  *VAR_13++ = FUNC_4(VAR_9, VAR_5);

  for (VAR_11 = 0; VAR_11 < 256; ++VAR_11) {
   FUNC_7(VAR_9->histo.entity.vsp1,
       VAR_2, VAR_11);
   *VAR_13++ = FUNC_4(VAR_9, VAR_3);
  }

  VAR_12 = (2 + 256) * sizeof(u32);
 } else if (VAR_9->max_rgb) {
  *VAR_13++ = FUNC_4(VAR_9, VAR_4);
  *VAR_13++ = FUNC_4(VAR_9, VAR_5);

  for (VAR_11 = 0; VAR_11 < 64; ++VAR_11)
   *VAR_13++ = FUNC_4(VAR_9, FUNC_1(VAR_11));

  VAR_12 = (2 + 64) * sizeof(u32);
 } else {
  *VAR_13++ = FUNC_4(VAR_9, VAR_6);
  *VAR_13++ = FUNC_4(VAR_9, VAR_4);
  *VAR_13++ = FUNC_4(VAR_9, VAR_0);

  *VAR_13++ = FUNC_4(VAR_9, VAR_7);
  *VAR_13++ = FUNC_4(VAR_9, VAR_5);
  *VAR_13++ = FUNC_4(VAR_9, VAR_1);

  for (VAR_11 = 0; VAR_11 < 64; ++VAR_11) {
   VAR_13[VAR_11] = FUNC_4(VAR_9, FUNC_2(VAR_11));
   VAR_13[VAR_11+64] = FUNC_4(VAR_9, FUNC_1(VAR_11));
   VAR_13[VAR_11+128] = FUNC_4(VAR_9, FUNC_0(VAR_11));
  }

  VAR_12 = (6 + 64 * 3) * sizeof(u32);
 }

 FUNC_5(&VAR_9->histo, VAR_10, VAR_12);
}

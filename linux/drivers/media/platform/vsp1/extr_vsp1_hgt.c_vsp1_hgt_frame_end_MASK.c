
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsp1_histogram_buffer {int * addr; } ;
struct vsp1_hgt {int histo; } ;
struct vsp1_entity {int subdev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vsp1_hgt* FUNC_1 (int *) ;
 void* FUNC_2 (struct vsp1_hgt*,int ) ;
 int FUNC_3 (int *,struct vsp1_histogram_buffer*,int ) ;
 struct vsp1_histogram_buffer* FUNC_4 (int *) ;

void FUNC_5(struct vsp1_entity *VAR_3)
{
 struct vsp1_hgt *VAR_4 = FUNC_1(&VAR_3->subdev);
 struct vsp1_histogram_buffer *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 u32 *VAR_8;

 VAR_5 = FUNC_4(&VAR_4->histo);
 if (!VAR_5)
  return;

 VAR_8 = VAR_5->addr;

 *VAR_8++ = FUNC_2(VAR_4, VAR_1);
 *VAR_8++ = FUNC_2(VAR_4, VAR_2);

 for (VAR_6 = 0; VAR_6 < 6; ++VAR_6)
  for (VAR_7 = 0; VAR_7 < 32; ++VAR_7)
   *VAR_8++ = FUNC_2(VAR_4, FUNC_0(VAR_6, VAR_7));

 FUNC_3(&VAR_4->histo, VAR_5, VAR_0);
}

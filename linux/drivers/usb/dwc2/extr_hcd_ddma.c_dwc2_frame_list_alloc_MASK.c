
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {int frame_list_sz; scalar_t__ frame_list; int dev; int frame_list_dma; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct dwc2_hsotg *VAR_5, gfp_t VAR_6)
{
 if (VAR_5->frame_list)
  return 0;

 VAR_5->frame_list_sz = 4 * VAR_2;
 VAR_5->frame_list = FUNC_1(VAR_5->frame_list_sz, VAR_3 | VAR_4);
 if (!VAR_5->frame_list)
  return -VAR_1;

 VAR_5->frame_list_dma = FUNC_0(VAR_5->dev, VAR_5->frame_list,
            VAR_5->frame_list_sz,
            VAR_0);

 return 0;
}

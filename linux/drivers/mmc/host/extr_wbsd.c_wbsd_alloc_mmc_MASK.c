
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int dma; int ignore_timer; int lock; struct mmc_host* mmc; } ;
struct mmc_host {int f_min; int f_max; int ocr_avail; int max_segs; int max_req_size; int max_seg_size; int max_blk_size; int max_blk_count; int caps; int * ops; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,struct mmc_host*) ;
 struct mmc_host* FUNC_1 (int,struct device*) ;
 struct wbsd_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6)
{
 struct mmc_host *VAR_7;
 struct wbsd_host *VAR_8;




 VAR_7 = FUNC_1(sizeof(struct wbsd_host), VAR_6);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_7);
 VAR_8->mmc = VAR_7;

 VAR_8->dma = -1;




 VAR_7->ops = &VAR_4;
 VAR_7->f_min = 375000;
 VAR_7->f_max = 24000000;
 VAR_7->ocr_avail = VAR_2 | VAR_3;
 VAR_7->caps = VAR_1;

 FUNC_3(&VAR_8->lock);




 FUNC_4(&VAR_8->ignore_timer, VAR_5, 0);





 VAR_7->max_segs = 128;




 VAR_7->max_req_size = 65536;





 VAR_7->max_seg_size = VAR_7->max_req_size;





 VAR_7->max_blk_size = 4087;





 VAR_7->max_blk_count = VAR_7->max_req_size;

 FUNC_0(VAR_6, VAR_7);

 return 0;
}

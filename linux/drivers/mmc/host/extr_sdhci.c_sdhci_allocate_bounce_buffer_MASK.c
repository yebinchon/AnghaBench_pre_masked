
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {unsigned int bounce_buffer_size; int bounce_addr; int bounce_buffer; struct mmc_host* mmc; } ;
struct mmc_host {unsigned int max_req_size; unsigned int max_segs; unsigned int max_seg_size; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (int ,int ,unsigned int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (char*,int ,unsigned int) ;
 int FUNC_5 (char*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_3->mmc;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;






 VAR_6 = VAR_2;





 if (VAR_4->max_req_size < VAR_6)
  VAR_6 = VAR_4->max_req_size;
 VAR_5 = VAR_6 / 512;






 VAR_3->bounce_buffer = FUNC_0(VAR_4->parent,
        VAR_6,
        VAR_1);
 if (!VAR_3->bounce_buffer) {
  FUNC_4("%s: failed to allocate %u bytes for bounce buffer, falling back to single segments\n",
         FUNC_3(VAR_4),
         VAR_6);




  return;
 }

 VAR_3->bounce_addr = FUNC_1(VAR_4->parent,
        VAR_3->bounce_buffer,
        VAR_6,
        VAR_0);
 VAR_7 = FUNC_2(VAR_4->parent, VAR_3->bounce_addr);
 if (VAR_7)

  return;
 VAR_3->bounce_buffer_size = VAR_6;


 VAR_4->max_segs = VAR_5;
 VAR_4->max_seg_size = VAR_6;
 VAR_4->max_req_size = VAR_6;

 FUNC_5("%s bounce up to %u segments into one, max segment size %u bytes\n",
  FUNC_3(VAR_4), VAR_5, VAR_6);
}

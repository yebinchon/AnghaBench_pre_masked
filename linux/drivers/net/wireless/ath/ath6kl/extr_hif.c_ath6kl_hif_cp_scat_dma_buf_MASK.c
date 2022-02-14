
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hif_scatter_req {int scat_entries; TYPE_1__* scat_list; int * virt_dma_buf; } ;
struct TYPE_2__ {int len; int * buf; } ;


 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct hif_scatter_req *VAR_0,
          bool VAR_1)
{
 u8 *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->virt_dma_buf;

 for (VAR_3 = 0; VAR_3 < VAR_0->scat_entries; VAR_3++) {
  if (VAR_1)
   FUNC_0(VAR_0->scat_list[VAR_3].buf, VAR_2,
          VAR_0->scat_list[VAR_3].len);
  else
   FUNC_0(VAR_2, VAR_0->scat_list[VAR_3].buf,
          VAR_0->scat_list[VAR_3].len);

  VAR_2 += VAR_0->scat_list[VAR_3].len;
 }

 return 0;
}

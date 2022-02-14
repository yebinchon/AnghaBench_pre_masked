
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_murb {int dummy; } ;
struct oxu_hcd {int periodic_size; int * pshadow; void** periodic; int periodic_dma; TYPE_1__* mem; int async; scalar_t__* murb_used; void* murb_pool; scalar_t__* qtd_used; scalar_t__* qh_used; } ;
typedef int gfp_t ;
typedef void* __le32 ;
struct TYPE_2__ {void** frame_list; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct oxu_hcd*) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct oxu_hcd*,char*) ;
 int FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 (void**) ;

__attribute__((used)) static int FUNC_5(struct oxu_hcd *VAR_5, gfp_t VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->periodic_size; VAR_7++)
  VAR_5->mem->frame_list[VAR_7] = VAR_0;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_5->qh_used[VAR_7] = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  VAR_5->qtd_used[VAR_7] = 0;

 VAR_5->murb_pool = FUNC_1(VAR_2, sizeof(struct oxu_murb), VAR_6);
 if (!VAR_5->murb_pool)
  goto fail;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_5->murb_used[VAR_7] = 0;

 VAR_5->async = FUNC_3(VAR_5);
 if (!VAR_5->async)
  goto fail;

 VAR_5->periodic = (__le32 *) &VAR_5->mem->frame_list;
 VAR_5->periodic_dma = FUNC_4(VAR_5->periodic);

 for (VAR_7 = 0; VAR_7 < VAR_5->periodic_size; VAR_7++)
  VAR_5->periodic[VAR_7] = VAR_0;


 VAR_5->pshadow = FUNC_1(VAR_5->periodic_size, sizeof(void *), VAR_6);
 if (VAR_5->pshadow != ((void*)0))
  return 0;

fail:
 FUNC_2(VAR_5, "couldn't init memory\n");
 FUNC_0(VAR_5);
 return -VAR_1;
}

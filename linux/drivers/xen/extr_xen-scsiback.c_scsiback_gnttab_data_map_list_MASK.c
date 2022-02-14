
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vscsibk_pend {int n_grants; struct vscsibk_info* info; } ;
struct vscsibk_info {int domid; } ;
struct scsiif_request_segment {int gref; } ;
struct page {int dummy; } ;
struct gnttab_map_grant_ref {int dummy; } ;
typedef int grant_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int FUNC_1 (struct gnttab_map_grant_ref*,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct page**,int) ;
 int FUNC_4 (struct gnttab_map_grant_ref*,struct page**,int *,int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct vscsibk_pend *VAR_2,
   struct scsiif_request_segment *VAR_3, struct page **VAR_4,
   grant_handle_t *VAR_5, int VAR_6, u32 VAR_7)
{
 int VAR_8 = 0, VAR_9, VAR_10 = 0;
 struct gnttab_map_grant_ref VAR_11[VAR_1];
 struct vscsibk_info *VAR_12 = VAR_2->info;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  if (FUNC_0(VAR_4 + VAR_8)) {
   FUNC_3(VAR_4, VAR_8);
   FUNC_2("no grant page\n");
   return -VAR_0;
  }
  FUNC_1(&VAR_11[VAR_8], FUNC_5(VAR_4[VAR_8]),
      VAR_7, VAR_3[VAR_9].gref, VAR_12->domid);
  VAR_8++;
  if (VAR_8 < VAR_1)
   continue;
  VAR_10 = FUNC_4(VAR_11, VAR_4, VAR_5, VAR_8);
  VAR_4 += VAR_8;
  VAR_5 += VAR_8;
  VAR_2->n_grants += VAR_8;
  if (VAR_10)
   return VAR_10;
  VAR_8 = 0;
 }
 VAR_10 = FUNC_4(VAR_11, VAR_4, VAR_5, VAR_8);
 VAR_2->n_grants += VAR_8;
 return VAR_10;
}

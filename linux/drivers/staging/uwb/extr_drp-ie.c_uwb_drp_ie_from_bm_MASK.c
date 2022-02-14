
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_mas_bm {scalar_t__* bm; } ;
struct uwb_ie_hdr {int dummy; } ;
struct TYPE_2__ {int length; } ;
struct uwb_ie_drp {TYPE_1__ hdr; struct uwb_drp_alloc* allocs; } ;
struct uwb_drp_alloc {int mas_bm; int zone_bm; } ;
typedef int __le16 ;


 int FUNC_0 (scalar_t__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ) ;
 void* FUNC_4 (int) ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static void FUNC_5(struct uwb_ie_drp *VAR_5,
          struct uwb_mas_bm *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;
 struct uwb_drp_alloc *VAR_11;
 __le16 VAR_12;
 FUNC_0(VAR_3, VAR_1);
 FUNC_0(VAR_4, VAR_0);

 VAR_11 = VAR_5->allocs;

 FUNC_1(VAR_3, VAR_6->bm, VAR_1);


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  FUNC_1(VAR_4, VAR_3, VAR_0);
  if (FUNC_3(VAR_4, VAR_0) > 0) {
   bool VAR_13 = 0;
   VAR_12 = (__le16) *VAR_4;
   for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
    if (VAR_12 == VAR_11[VAR_8].mas_bm) {
     VAR_11[VAR_8].zone_bm |= 1 << VAR_7;
     VAR_13 = 1;
     break;
    }
   }
   if (!VAR_13) {
    VAR_9++;
    VAR_11[VAR_10].zone_bm = 1 << VAR_7;
    VAR_11[VAR_10].mas_bm = VAR_12;
    VAR_10++;
   }
  }
  FUNC_2(VAR_3, VAR_3, VAR_0, VAR_1);
 }


 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_5->allocs[VAR_8].zone_bm = FUNC_4(VAR_11[VAR_8].zone_bm);
  VAR_5->allocs[VAR_8].mas_bm = FUNC_4(VAR_11[VAR_8].mas_bm);
 }

 VAR_5->hdr.length = sizeof(struct uwb_ie_drp) - sizeof(struct uwb_ie_hdr)
  + VAR_9 * sizeof(struct uwb_drp_alloc);
}

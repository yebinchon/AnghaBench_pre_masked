
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_sste {int esid_data; } ;
struct cxl_context {int sst_size; int sst_lru; struct cxl_sste* sstp; } ;
struct copro_slb {int vsid; unsigned int esid; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cxl_sste*,struct copro_slb*) ;

__attribute__((used)) static struct cxl_sste *FUNC_2(struct cxl_context *VAR_4,
           struct copro_slb *VAR_5)
{
 struct cxl_sste *VAR_6, *VAR_7, *VAR_8 = ((void*)0);
 unsigned int VAR_9 = (VAR_4->sst_size >> 7) - 1;
 unsigned int VAR_10;
 unsigned int VAR_11;

 if (VAR_5->vsid & VAR_3)
  VAR_11 = (VAR_5->esid >> VAR_1) & VAR_9;
 else
  VAR_11 = (VAR_5->esid >> VAR_0) & VAR_9;

 VAR_6 = VAR_4->sstp + (VAR_11 << 3);

 for (VAR_10 = 0, VAR_7 = VAR_6; VAR_10 < 8; VAR_10++, VAR_7++) {
  if (!VAR_8 && !(FUNC_0(VAR_7->esid_data) & VAR_2))
   VAR_8 = VAR_7;
  if (FUNC_1(VAR_7, VAR_5))
   return ((void*)0);
 }
 if (VAR_8)
  return VAR_8;


 VAR_8 = VAR_6 + VAR_4->sst_lru;
 VAR_4->sst_lru = (VAR_4->sst_lru + 1) & 0x7;

 return VAR_8;
}

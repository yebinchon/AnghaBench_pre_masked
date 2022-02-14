
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct odm_dm_struct {scalar_t__ BbSwingIdxOfdm; scalar_t__ BbSwingIdxOfdmBase; scalar_t__ BbSwingIdxCck; scalar_t__ BbSwingIdxCckBase; int BbSwingFlagOfdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;
 int VAR_2 ;

void FUNC_1(struct odm_dm_struct *VAR_3, u8 VAR_4,
         u8 *VAR_5, u32 *VAR_6)
{
 u8 VAR_7 = 0;

 if (VAR_4 == 0) {
  FUNC_0(VAR_3, VAR_0, VAR_1,
        ("BbSwingIdxOfdm = %d BbSwingFlagOfdm=%d\n",
        VAR_3->BbSwingIdxOfdm, VAR_3->BbSwingFlagOfdm));

  if (VAR_3->BbSwingIdxOfdm <= VAR_3->BbSwingIdxOfdmBase) {
   *VAR_5 = 1;
   VAR_7 = VAR_3->BbSwingIdxOfdmBase -
         VAR_3->BbSwingIdxOfdm;
  } else {
   *VAR_5 = 2;
   VAR_7 = VAR_3->BbSwingIdxOfdm -
         VAR_3->BbSwingIdxOfdmBase;
  }

 } else if (VAR_4 == 1) {
  FUNC_0(VAR_3, VAR_0, VAR_1,
        ("dm_odm->BbSwingIdxCck = %d dm_odm->BbSwingIdxCckBase = %d\n",
        VAR_3->BbSwingIdxCck, VAR_3->BbSwingIdxCckBase));

  if (VAR_3->BbSwingIdxCck <= VAR_3->BbSwingIdxCckBase) {
   *VAR_5 = 1;
   VAR_7 = VAR_3->BbSwingIdxCckBase -
         VAR_3->BbSwingIdxCck;
  } else {
   *VAR_5 = 2;
   VAR_7 = VAR_3->BbSwingIdxCck -
         VAR_3->BbSwingIdxCckBase;
  }
 }

 if (VAR_7 >= VAR_2 && *VAR_5 == 1)
  VAR_7 = VAR_2;

 *VAR_6 = VAR_7 | (VAR_7<<8) | (VAR_7<<16) |
    (VAR_7<<24);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct odm_dm_struct {int BbSwingFlagOfdm; int BbSwingFlagCck; int * pChannel; int Adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct odm_dm_struct*,int ,int ,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct odm_dm_struct *VAR_2)
{
 if (VAR_2->BbSwingFlagOfdm || VAR_2->BbSwingFlagCck) {
  FUNC_0(VAR_2, VAR_0, VAR_1,
        ("dm_txpwr_track_setpwr CH=%d\n", *(VAR_2->pChannel)));
  FUNC_1(VAR_2->Adapter, *(VAR_2->pChannel));
  VAR_2->BbSwingFlagOfdm = 0;
  VAR_2->BbSwingFlagCck = 0;
 }
}

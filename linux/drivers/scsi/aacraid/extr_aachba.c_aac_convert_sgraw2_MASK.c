
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sge_ieee1212 {int length; scalar_t__ addrLow; scalar_t__ flags; int addrHigh; } ;
struct aac_raw_io2 {int sgeNominalSize; int flags; int sgeCnt; struct sge_ieee1212* sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sge_ieee1212*) ;
 struct sge_ieee1212* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct sge_ieee1212*,struct sge_ieee1212*,int) ;

__attribute__((used)) static int FUNC_5(struct aac_raw_io2 *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct sge_ieee1212 *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13;

 if (VAR_4 == 0)
  return 0;

 VAR_9 = FUNC_3(VAR_8, sizeof(struct sge_ieee1212), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 for (VAR_10 = 1, VAR_12 = 1; VAR_10 < VAR_7-1; ++VAR_10) {
  for (VAR_11 = 0; VAR_11 < VAR_5->sge[VAR_10].length / (VAR_6 * VAR_2); ++VAR_11) {
   VAR_13 = VAR_5->sge[VAR_10].addrLow + VAR_11 * VAR_6 * VAR_2;
   VAR_9[VAR_12].addrLow = VAR_13;
   VAR_9[VAR_12].addrHigh = VAR_5->sge[VAR_10].addrHigh;
   if (VAR_13 < VAR_5->sge[VAR_10].addrLow)
    VAR_9[VAR_12].addrHigh++;
   VAR_9[VAR_12].length = VAR_6 * VAR_2;
   VAR_9[VAR_12].flags = 0;
   VAR_12++;
  }
 }
 VAR_9[VAR_12] = VAR_5->sge[VAR_7-1];
 FUNC_4(&VAR_5->sge[1], &VAR_9[1], (VAR_8-1)*sizeof(struct sge_ieee1212));

 FUNC_2(VAR_9);
 VAR_5->sgeCnt = FUNC_1(VAR_8);
 VAR_5->flags |= FUNC_0(VAR_3);
 VAR_5->sgeNominalSize = VAR_6 * VAR_2;
 return 0;
}

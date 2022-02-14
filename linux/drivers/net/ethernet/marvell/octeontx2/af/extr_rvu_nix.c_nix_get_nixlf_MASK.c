
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rvu_pfvf {int nixlf; } ;
struct rvu_hwinfo {int * block; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rvu*,int ,int ) ;
 int FUNC_1 (struct rvu*,int *,int ,int ) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;

__attribute__((used)) static int FUNC_3(struct rvu *VAR_2, u16 VAR_3, int *VAR_4)
{
 struct rvu_pfvf *VAR_5 = FUNC_2(VAR_2, VAR_3);
 struct rvu_hwinfo *VAR_6 = VAR_2->hw;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_0, VAR_3);
 if (!VAR_5->nixlf || VAR_7 < 0)
  return VAR_1;

 *VAR_4 = FUNC_1(VAR_2, &VAR_6->block[VAR_7], VAR_3, 0);
 if (*VAR_4 < 0)
  return VAR_1;

 return 0;
}

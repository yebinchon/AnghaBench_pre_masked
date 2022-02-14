
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct brcmf_sdio {int dcmd_resp_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct brcmf_sdio *VAR_5, uint *VAR_6,
         bool *VAR_7)
{
 FUNC_0(VAR_4, VAR_3);
 int VAR_8 = VAR_0;


 FUNC_1(&VAR_5->dcmd_resp_wait, &VAR_4);
 FUNC_4(VAR_1);

 while (!(*VAR_6) && (!FUNC_5(VAR_3) && VAR_8))
  VAR_8 = FUNC_3(VAR_8);

 if (FUNC_5(VAR_3))
  *VAR_7 = 1;

 FUNC_4(VAR_2);
 FUNC_2(&VAR_5->dcmd_resp_wait, &VAR_4);

 return VAR_8;
}

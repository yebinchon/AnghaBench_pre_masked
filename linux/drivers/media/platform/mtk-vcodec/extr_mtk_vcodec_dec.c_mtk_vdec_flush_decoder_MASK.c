
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_ctx {int dummy; } ;


 int FUNC_0 (struct mtk_vcodec_ctx*) ;
 int FUNC_1 (struct mtk_vcodec_ctx*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct mtk_vcodec_ctx*,int *,int *,int*) ;

__attribute__((used)) static void FUNC_4(struct mtk_vcodec_ctx *VAR_0)
{
 bool VAR_1;
 int VAR_2 = 0;

 VAR_2 = FUNC_3(VAR_0, ((void*)0), ((void*)0), &VAR_1);
 if (VAR_2)
  FUNC_2("DecodeFinal failed, ret=%d", VAR_2);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}

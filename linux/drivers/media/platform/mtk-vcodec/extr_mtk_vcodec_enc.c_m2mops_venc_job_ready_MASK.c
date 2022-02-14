
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_ctx {scalar_t__ state; int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 struct mtk_vcodec_ctx *VAR_3 = VAR_2;

 if (VAR_3->state == VAR_0 || VAR_3->state == VAR_1) {
  FUNC_0(3, "[%d]Not ready: state=0x%x.",
          VAR_3->id, VAR_3->state);
  return 0;
 }

 return 1;
}

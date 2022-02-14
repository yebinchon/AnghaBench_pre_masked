
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int dummy; } ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct cx88_core *VAR_5, s16 VAR_6[], u32 VAR_7)
{
 s32 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_3);
 s32 VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_2);
 s32 VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_1);
 s32 VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_0);

 FUNC_0(1, "detect btsc: dual_ref=%d, dual=%d, sap_ref=%d, sap=%d\n",
  VAR_10, VAR_11, VAR_8, VAR_9);

 return VAR_4;
}

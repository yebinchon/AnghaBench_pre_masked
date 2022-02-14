
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil6210_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct wil6210_priv*,char*) ;
 scalar_t__ FUNC_4 (struct wil6210_priv*,void*,int ) ;
 scalar_t__ FUNC_5 (struct wil6210_priv*,int *,int *) ;
 int FUNC_6 (struct wil6210_priv*,char*,int ) ;
 int FUNC_7 (struct wil6210_priv*) ;

void FUNC_8(struct wil6210_priv *VAR_1)
{
 void *VAR_2;
 u32 VAR_3;

 if (FUNC_5(VAR_1, &VAR_3, ((void*)0))) {
  FUNC_3(VAR_1, "fail to get fw dump size\n");
  return;
 }

 VAR_2 = FUNC_2(VAR_3);
 if (!VAR_2)
  return;

 if (FUNC_4(VAR_1, VAR_2, VAR_3)) {
  FUNC_1(VAR_2);
  return;
 }



 FUNC_0(FUNC_7(VAR_1), VAR_2, VAR_3, VAR_0);
 FUNC_6(VAR_1, "fw core dumped, size %d bytes\n", VAR_3);
}

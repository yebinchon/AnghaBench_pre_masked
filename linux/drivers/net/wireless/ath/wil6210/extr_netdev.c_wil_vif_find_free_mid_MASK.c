
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wil6210_priv {int * vifs; } ;


 size_t FUNC_0 (struct wil6210_priv*) ;
 size_t VAR_0 ;

__attribute__((used)) static u8 FUNC_1(struct wil6210_priv *VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  if (!VAR_1->vifs[VAR_2])
   return VAR_2;
 }

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wil6210_priv {TYPE_1__* srings; } ;
struct TYPE_2__ {int va; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct wil6210_priv *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!VAR_2->srings[VAR_3].va)
   return VAR_3;
 }

 return -VAR_0;
}

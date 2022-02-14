
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wil6210_priv {int dummy; } ;
struct TYPE_3__ {int type; int (* load_handler ) (struct wil6210_priv*,void const*,size_t) ;int (* parse_handler ) (struct wil6210_priv*,void const*,size_t) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct wil6210_priv*,void const*,size_t) ;
 int FUNC_2 (struct wil6210_priv*,void const*,size_t) ;
 int FUNC_3 (struct wil6210_priv*,char*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct wil6210_priv *VAR_2, int VAR_3,
    const void *VAR_4, size_t VAR_5, bool VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  if (VAR_1[VAR_7].type == VAR_3)
   return VAR_6 ?
    VAR_1[VAR_7].load_handler(
     VAR_2, VAR_4, VAR_5) :
    VAR_1[VAR_7].parse_handler(
     VAR_2, VAR_4, VAR_5);

 FUNC_3(VAR_2, "unknown record type: %d\n", VAR_3);
 return -VAR_0;
}

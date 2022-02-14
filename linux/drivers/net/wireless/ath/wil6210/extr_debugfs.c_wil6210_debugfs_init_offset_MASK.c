
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int dummy; } ;
struct dentry {int dummy; } ;
struct dbg_off {int type; int off; int mode; scalar_t__ name; } ;


 int FUNC_0 (scalar_t__,int ,struct dentry*,void*,int *) ;
 int FUNC_1 (scalar_t__,int ,struct dentry*,void*) ;
 int FUNC_2 (scalar_t__,int ,struct dentry*,void*) ;
 int FUNC_3 (scalar_t__,int ,struct dentry*,void*) ;





 int FUNC_4 (scalar_t__,int ,struct dentry*,void*,struct wil6210_priv*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct wil6210_priv *VAR_1,
     struct dentry *VAR_2, void *VAR_3,
     const struct dbg_off * const VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_4[VAR_5].name; VAR_5++) {
  switch (VAR_4[VAR_5].type) {
  case 131:
   FUNC_1(VAR_4[VAR_5].name, VAR_4[VAR_5].mode, VAR_2,
        VAR_3 + VAR_4[VAR_5].off);
   break;
  case 128:
   FUNC_3(VAR_4[VAR_5].name, VAR_4[VAR_5].mode, VAR_2,
        VAR_3 + VAR_4[VAR_5].off);
   break;
  case 129:
   FUNC_0(VAR_4[VAR_5].name, VAR_4[VAR_5].mode,
         VAR_2, VAR_3 + VAR_4[VAR_5].off,
         &VAR_0);
   break;
  case 132:
   FUNC_4(VAR_4[VAR_5].name, VAR_4[VAR_5].mode,
           VAR_2, VAR_3 + VAR_4[VAR_5].off,
           VAR_1);
   break;
  case 130:
   FUNC_2(VAR_4[VAR_5].name, VAR_4[VAR_5].mode, VAR_2,
       VAR_3 + VAR_4[VAR_5].off);
   break;
  }
 }
}

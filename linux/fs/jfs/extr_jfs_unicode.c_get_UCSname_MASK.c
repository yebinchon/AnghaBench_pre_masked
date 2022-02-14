
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct nls_table {int dummy; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; int d_sb; } ;
struct component_name {int namlen; int * name; } ;
struct TYPE_4__ {struct nls_table* nls_tab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,struct nls_table*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int,int ) ;

int FUNC_4(struct component_name * VAR_4, struct dentry *VAR_5)
{
 struct nls_table *VAR_6 = FUNC_0(VAR_5->d_sb)->nls_tab;
 int VAR_7 = VAR_5->d_name.len;

 if (VAR_7 > VAR_3)
  return -VAR_0;

 VAR_4->name =
     FUNC_3(VAR_7 + 1, sizeof(wchar_t), VAR_2);

 if (VAR_4->name == ((void*)0))
  return -VAR_1;

 VAR_4->namlen = FUNC_1(VAR_4->name, VAR_5->d_name.name,
           VAR_7, VAR_6);

 if (VAR_4->namlen < 0) {
  FUNC_2(VAR_4->name);
  return VAR_4->namlen;
 }

 return 0;
}

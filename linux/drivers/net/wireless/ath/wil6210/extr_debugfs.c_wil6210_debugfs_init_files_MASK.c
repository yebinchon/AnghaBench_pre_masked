
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wil6210_priv {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int fops; int mode; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int ,struct dentry*,struct wil6210_priv*,int ) ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_1,
           struct dentry *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_1(VAR_0[VAR_3].name, VAR_0[VAR_3].mode, VAR_2,
        VAR_1, VAR_0[VAR_3].fops);
}

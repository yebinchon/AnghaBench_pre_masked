
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file_operations {int dummy; } ;
struct dwc3_ep {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {char* name; struct file_operations* fops; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ,struct dentry*,struct dwc3_ep*,struct file_operations const*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct dwc3_ep *VAR_2,
  struct dentry *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  const struct file_operations *VAR_5 = VAR_1[VAR_4].fops;
  const char *VAR_6 = VAR_1[VAR_4].name;

  FUNC_1(VAR_6, VAR_0, VAR_3, VAR_2, VAR_5);
 }
}

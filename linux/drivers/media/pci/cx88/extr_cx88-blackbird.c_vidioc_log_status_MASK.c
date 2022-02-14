
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cx88_core {char* name; } ;
struct TYPE_2__ {int hdl; } ;
struct cx8802_dev {TYPE_1__ cxhdl; struct cx88_core* core; } ;
typedef int name ;


 int FUNC_0 (struct cx88_core*,struct cx88_core*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (int *,char*) ;
 struct cx8802_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2)
{
 struct cx8802_dev *VAR_3 = FUNC_3(VAR_1);
 struct cx88_core *VAR_4 = VAR_3->core;
 char VAR_5[32 + 2];

 FUNC_1(VAR_5, sizeof(VAR_5), "%s/2", VAR_4->name);
 FUNC_0(VAR_4, VAR_4, VAR_0);
 FUNC_2(&VAR_3->cxhdl.hdl, VAR_5);
 return 0;
}

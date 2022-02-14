
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {int hdl; } ;
struct cx23885_dev {char* name; TYPE_1__ cxhdl; } ;
typedef int name ;


 int FUNC_0 (struct cx23885_dev*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (int *,char*) ;
 struct cx23885_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3)
{
 struct cx23885_dev *VAR_4 = FUNC_3(VAR_2);
 char VAR_5[32 + 2];

 FUNC_1(VAR_5, sizeof(VAR_5), "%s/2", VAR_4->name);
 FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_2(&VAR_4->cxhdl.hdl, VAR_5);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int size; TYPE_2__* data; } ;
struct TYPE_5__ {int d3; int d2; int d1; int d0; } ;
struct TYPE_4__ {TYPE_3__ sdiag_wrapper; TYPE_3__ f0000_wrapper; TYPE_3__ data_wrapper; TYPE_2__ data; int command; struct dentry* root; } ;
struct samsung_laptop {TYPE_1__ debug; TYPE_2__* sdiag; TYPE_2__* f0000_segment; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,struct dentry*,TYPE_3__*) ;
 struct dentry* FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,struct samsung_laptop*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int FUNC_4 (char*,int,struct dentry*,int *) ;
 int FUNC_5 (char*,int,struct dentry*,int *) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct samsung_laptop *VAR_5)
{
 struct dentry *VAR_6;

 VAR_6 = FUNC_1("samsung-laptop", ((void*)0));
 VAR_5->debug.root = VAR_6;

 VAR_5->debug.f0000_wrapper.data = VAR_5->f0000_segment;
 VAR_5->debug.f0000_wrapper.size = 0xffff;

 VAR_5->debug.data_wrapper.data = &VAR_5->debug.data;
 VAR_5->debug.data_wrapper.size = sizeof(VAR_5->debug.data);

 VAR_5->debug.sdiag_wrapper.data = VAR_5->sdiag;
 VAR_5->debug.sdiag_wrapper.size = FUNC_6(VAR_5->sdiag);

 FUNC_3("command", VAR_1 | VAR_3, VAR_6,
      &VAR_5->debug.command);
 FUNC_4("d0", VAR_1 | VAR_3, VAR_6,
      &VAR_5->debug.data.d0);
 FUNC_4("d1", VAR_1 | VAR_3, VAR_6,
      &VAR_5->debug.data.d1);
 FUNC_3("d2", VAR_1 | VAR_3, VAR_6,
      &VAR_5->debug.data.d2);
 FUNC_5("d3", VAR_1 | VAR_3, VAR_6,
     &VAR_5->debug.data.d3);
 FUNC_0("data", VAR_1 | VAR_3, VAR_6,
       &VAR_5->debug.data_wrapper);
 FUNC_0("f0000_segment", VAR_2 | VAR_3, VAR_6,
       &VAR_5->debug.f0000_wrapper);
 FUNC_2("call", VAR_0 | VAR_1, VAR_6, VAR_5,
       &VAR_4);
 FUNC_0("sdiag", VAR_1 | VAR_3, VAR_6,
       &VAR_5->debug.sdiag_wrapper);
}

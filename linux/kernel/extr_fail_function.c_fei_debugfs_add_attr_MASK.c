
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int symbol_name; } ;
struct fei_attr {TYPE_1__ kp; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct fei_attr*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct fei_attr *VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_0(VAR_2->kp.symbol_name, VAR_0);

 FUNC_1("retval", 0600, VAR_3, VAR_2, &VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {TYPE_1__* dev; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int name; } ;


 struct dentry* FUNC_0 (int ,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct mvpp2_port*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_3,
     struct mvpp2_port *VAR_4)
{
 struct dentry *VAR_5;

 VAR_5 = FUNC_0(VAR_4->dev->name, VAR_3);

 FUNC_1("parser_entries", 0444, VAR_5, VAR_4,
       &VAR_1);

 FUNC_1("mac_filter", 0444, VAR_5, VAR_4,
       &VAR_0);

 FUNC_1("vid_filter", 0444, VAR_5, VAR_4,
       &VAR_2);

 return 0;
}

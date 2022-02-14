
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct se_dev_attrib {TYPE_2__* da_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* transport; } ;
struct TYPE_3__ {int transport_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 struct se_dev_attrib* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_2, char *VAR_3)
{
 struct se_dev_attrib *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5 = VAR_4->da_dev->transport->transport_flags;

 return FUNC_0(VAR_3, VAR_0, "%d\n",
   VAR_5 & VAR_1 ? 0 : 1);
}

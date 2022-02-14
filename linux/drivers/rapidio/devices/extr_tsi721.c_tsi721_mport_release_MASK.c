
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_mport {int id; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct rio_mport* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct device*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1)
{
 struct rio_mport *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, VAR_1, "%s id=%d", VAR_2->name, VAR_2->id);
}

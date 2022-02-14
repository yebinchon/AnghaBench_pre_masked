
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_net {int id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rio_net*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct rio_net* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct rio_net *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_0, "net_%d", VAR_2->id);
 FUNC_0(VAR_2);
}

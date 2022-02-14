
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; int flags; char const* name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct resource*,int ,int) ;
 int FUNC_3 (struct device_node*,int) ;
 char const* FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,int,char const**) ;

int FUNC_6(struct device_node *VAR_1, int VAR_2, struct resource *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_1, VAR_2);

 if (VAR_4 < 0)
  return VAR_4;



 if (VAR_3 && VAR_4) {
  const char *VAR_5 = ((void*)0);

  FUNC_2(VAR_3, 0, sizeof(*VAR_3));




  FUNC_5(VAR_1, "interrupt-names", VAR_2,
           &VAR_5);

  VAR_3->start = VAR_3->end = VAR_4;
  VAR_3->flags = VAR_0 | FUNC_1(FUNC_0(VAR_4));
  VAR_3->name = VAR_5 ? VAR_5 : FUNC_4(VAR_1);
 }

 return VAR_4;
}

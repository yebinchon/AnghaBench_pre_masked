
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_client {int (* probe ) (struct device*) ;} ;
struct device {int driver; } ;


 struct ntb_transport_client* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 const struct ntb_transport_client *VAR_1;
 int VAR_2;

 FUNC_1(VAR_0);

 VAR_1 = FUNC_0(VAR_0->driver);
 VAR_2 = VAR_1->probe(VAR_0);
 if (VAR_2)
  FUNC_2(VAR_0);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18271_config {scalar_t__ std_map; } ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 scalar_t__ FUNC_1 (struct tda18271_config*) ;
 int FUNC_2 (struct dvb_frontend*,struct tda18271_config*) ;
 int FUNC_3 (struct dvb_frontend*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0, void *VAR_1)
{
 struct tda18271_config *VAR_2 = (struct tda18271_config *) VAR_1;

 FUNC_2(VAR_0, VAR_2);

 if (FUNC_1(VAR_2))
  FUNC_0(VAR_0);


 if ((VAR_2) && (VAR_2->std_map))
  FUNC_3(VAR_0, VAR_2->std_map);

 return 0;
}

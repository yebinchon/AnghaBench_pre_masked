
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pluto {TYPE_1__* pdev; } ;
struct firmware {int dummy; } ;
struct dvb_frontend {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 struct pluto* FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
       const struct firmware **VAR_1, char *VAR_2)
{
 struct pluto *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_2, &VAR_3->pdev->dev);
}

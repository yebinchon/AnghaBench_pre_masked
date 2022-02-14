
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct max310x_port {int clk; TYPE_2__* p; TYPE_1__* devtype; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int line; } ;
struct TYPE_6__ {TYPE_3__ port; int rs_work; int md_work; int tx_work; } ;
struct TYPE_5__ {int nr; int (* power ) (TYPE_3__*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct max310x_port* FUNC_3 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct max310x_port *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->devtype->nr; VAR_4++) {
  FUNC_0(&VAR_3->p[VAR_4].tx_work);
  FUNC_0(&VAR_3->p[VAR_4].md_work);
  FUNC_0(&VAR_3->p[VAR_4].rs_work);
  FUNC_5(&VAR_1, &VAR_3->p[VAR_4].port);
  FUNC_1(VAR_3->p[VAR_4].port.line, VAR_0);
  VAR_3->devtype->power(&VAR_3->p[VAR_4].port, 0);
 }

 FUNC_2(VAR_3->clk);

 return 0;
}

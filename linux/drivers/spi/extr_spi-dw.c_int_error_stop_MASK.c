
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dw_spi {TYPE_2__* master; } ;
struct TYPE_4__ {TYPE_1__* cur_msg; int dev; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct dw_spi*) ;

__attribute__((used)) static void FUNC_3(struct dw_spi *VAR_1, const char *VAR_2)
{
 FUNC_2(VAR_1);

 FUNC_0(&VAR_1->master->dev, "%s\n", VAR_2);
 VAR_1->master->cur_msg->status = -VAR_0;
 FUNC_1(VAR_1->master);
}

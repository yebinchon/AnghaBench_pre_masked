
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpacpi_rfk {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_status ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tpacpi_rfk*) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, bool VAR_4)
{
 struct tpacpi_rfk *VAR_5 = VAR_3;
 int VAR_6;

 FUNC_0(VAR_0,
     "request to change radio state to %s\n",
     VAR_4 ? "blocked" : "unblocked");


 VAR_6 = (VAR_5->ops->set_status)(VAR_4 ?
    VAR_1 : VAR_2);


 FUNC_2(VAR_5);

 return (VAR_6 < 0) ? VAR_6 : 0;
}

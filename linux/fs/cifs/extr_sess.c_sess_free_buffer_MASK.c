
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sess_data {TYPE_1__* iov; int buf0_type; } ;
struct TYPE_2__ {int iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct sess_data *VAR_1)
{

 FUNC_0(VAR_1->buf0_type, VAR_1->iov[0].iov_base);
 VAR_1->buf0_type = VAR_0;
 FUNC_1(VAR_1->iov[2].iov_base);
}

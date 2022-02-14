
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SMB2_sess_data {int buf0_type; TYPE_1__* iov; } ;
struct TYPE_2__ {int iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct SMB2_sess_data *VAR_1)
{
 FUNC_0(VAR_1->buf0_type, VAR_1->iov[0].iov_base);
 VAR_1->buf0_type = VAR_0;
}

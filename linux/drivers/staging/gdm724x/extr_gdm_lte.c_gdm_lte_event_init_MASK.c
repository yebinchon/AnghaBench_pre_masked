
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ref_cnt; scalar_t__ sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(void)
{
 if (VAR_3.ref_cnt == 0)
  VAR_3.sock = FUNC_0(VAR_1, VAR_2);

 if (VAR_3.sock) {
  VAR_3.ref_cnt++;
  return 0;
 }

 FUNC_1("event init failed\n");
 return -VAR_0;
}

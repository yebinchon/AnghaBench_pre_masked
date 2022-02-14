
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {TYPE_1__* session; } ;
struct TYPE_2__ {int back_lock; } ;


 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iscsi_conn *VAR_0, struct iscsi_hdr *VAR_1,
         char *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->session->back_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->session->back_lock);
 return VAR_4;
}

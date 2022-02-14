
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t call_id; } ;
struct TYPE_5__ {TYPE_1__ src_addr; } ;
struct TYPE_6__ {TYPE_2__ pptp; } ;
struct pppox_sock {TYPE_3__ proto; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pppox_sock *VAR_3)
{
 FUNC_2(&VAR_2);
 FUNC_1(VAR_3->proto.pptp.src_addr.call_id, VAR_0);
 FUNC_0(VAR_1[VAR_3->proto.pptp.src_addr.call_id], ((void*)0));
 FUNC_3(&VAR_2);
}

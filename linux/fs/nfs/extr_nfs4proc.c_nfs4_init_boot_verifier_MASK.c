
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct nfs_net {int boot_time; } ;
struct nfs_client {int cl_net; int cl_state; } ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ nfs4_verifier ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 struct nfs_net* FUNC_3 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(const struct nfs_client *VAR_3,
        nfs4_verifier *VAR_4)
{
 __be32 VAR_5[2];

 if (FUNC_4(VAR_0, &VAR_3->cl_state)) {


  VAR_5[0] = FUNC_0(VAR_1);
  VAR_5[1] = FUNC_0(VAR_1);
 } else {
  struct nfs_net *VAR_6 = FUNC_3(VAR_3->cl_net, VAR_2);
  u64 VAR_7 = FUNC_1(VAR_6->boot_time);

  VAR_5[0] = FUNC_0(VAR_7 >> 32);
  VAR_5[1] = FUNC_0(VAR_7);
 }
 FUNC_2(VAR_4->data, VAR_5, sizeof(VAR_4->data));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct nfsd4_setclientid {int se_callback_netid_len; int se_callback_addr_len; void* se_callback_ident; int se_callback_addr_val; int se_callback_netid_val; void* se_callback_prog; int se_name; TYPE_1__ se_verf; } ;
struct nfsd4_compoundargs {int minorversion; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct nfsd4_compoundargs*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static __be32
FUNC_5(struct nfsd4_compoundargs *VAR_7, struct nfsd4_setclientid *VAR_8)
{
 VAR_0;

 if (VAR_7->minorversion >= 1)
  return VAR_4;

 FUNC_1(VAR_2);
 FUNC_0(VAR_8->se_verf.data, VAR_2);

 VAR_6 = FUNC_4(VAR_7, &VAR_8->se_name);
 if (VAR_6)
  return VAR_3;
 FUNC_1(8);
 VAR_8->se_callback_prog = FUNC_3(VAR_5++);
 VAR_8->se_callback_netid_len = FUNC_3(VAR_5++);
 FUNC_1(VAR_8->se_callback_netid_len);
 FUNC_2(VAR_8->se_callback_netid_val, VAR_8->se_callback_netid_len);
 FUNC_1(4);
 VAR_8->se_callback_addr_len = FUNC_3(VAR_5++);

 FUNC_1(VAR_8->se_callback_addr_len);
 FUNC_2(VAR_8->se_callback_addr_val, VAR_8->se_callback_addr_len);
 FUNC_1(4);
 VAR_8->se_callback_ident = FUNC_3(VAR_5++);

 VAR_1;
}

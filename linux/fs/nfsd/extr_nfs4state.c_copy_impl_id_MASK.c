
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_8__ {int data; } ;
struct nfsd4_exchange_id {TYPE_2__ nii_time; TYPE_4__ nii_name; TYPE_4__ nii_domain; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int data; } ;
struct nfs4_client {TYPE_1__ cl_nii_time; TYPE_3__ cl_nii_name; TYPE_3__ cl_nii_domain; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int ) ;

__attribute__((used)) static __be32 FUNC_1(struct nfs4_client *VAR_2,
    struct nfsd4_exchange_id *VAR_3)
{
 if (!VAR_3->nii_domain.data)
  return 0;
 FUNC_0(&VAR_2->cl_nii_domain, &VAR_3->nii_domain, VAR_0);
 if (!VAR_2->cl_nii_domain.data)
  return VAR_1;
 FUNC_0(&VAR_2->cl_nii_name, &VAR_3->nii_name, VAR_0);
 if (!VAR_2->cl_nii_name.data)
  return VAR_1;
 VAR_2->cl_nii_time.tv_sec = VAR_3->nii_time.tv_sec;
 VAR_2->cl_nii_time.tv_nsec = VAR_3->nii_time.tv_nsec;
 return 0;
}

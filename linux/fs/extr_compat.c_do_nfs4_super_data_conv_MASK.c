
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_mount_data {int version; int flags; int rsize; int wsize; int timeo; int retrans; int acregmin; int acregmax; int acdirmin; int acdirmax; int client_addr; int mnt_path; int hostname; int host_addrlen; void* host_addr; int proto; int auth_flavourlen; void* auth_flavours; } ;
struct compat_nfs4_mount_data_v1 {int version; int flags; int rsize; int wsize; int timeo; int retrans; int acregmin; int acregmax; int acdirmin; int acdirmax; int client_addr; int mnt_path; int hostname; int host_addrlen; int host_addr; int proto; int auth_flavourlen; int auth_flavours; } ;
typedef int compat_uint_t ;


 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 int VAR_1 = *(compat_uint_t *) VAR_0;

 if (VAR_1 == 1) {
  struct compat_nfs4_mount_data_v1 *VAR_2 = VAR_0;
  struct nfs4_mount_data *VAR_3 = VAR_0;


  VAR_3->auth_flavours = FUNC_1(VAR_2->auth_flavours);
  VAR_3->auth_flavourlen = VAR_2->auth_flavourlen;
  VAR_3->proto = VAR_2->proto;
  VAR_3->host_addr = FUNC_1(VAR_2->host_addr);
  VAR_3->host_addrlen = VAR_2->host_addrlen;
  FUNC_0(&VAR_3->hostname, &VAR_2->hostname);
  FUNC_0(&VAR_3->mnt_path, &VAR_2->mnt_path);
  FUNC_0(&VAR_3->client_addr, &VAR_2->client_addr);
  VAR_3->acdirmax = VAR_2->acdirmax;
  VAR_3->acdirmin = VAR_2->acdirmin;
  VAR_3->acregmax = VAR_2->acregmax;
  VAR_3->acregmin = VAR_2->acregmin;
  VAR_3->retrans = VAR_2->retrans;
  VAR_3->timeo = VAR_2->timeo;
  VAR_3->wsize = VAR_2->wsize;
  VAR_3->rsize = VAR_2->rsize;
  VAR_3->flags = VAR_2->flags;
  VAR_3->version = VAR_2->version;
 }

 return 0;
}

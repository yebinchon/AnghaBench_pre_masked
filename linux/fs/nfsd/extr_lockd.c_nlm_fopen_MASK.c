
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int fh_base; int fh_size; } ;
struct svc_fh {int * fh_export; TYPE_1__ fh_handle; } ;
struct nfs_fh {int size; int data; } ;
struct file {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct svc_fh*,int ) ;
 int FUNC_1 (struct svc_fh*) ;
 int FUNC_2 (char*,int ,int ) ;

 int FUNC_3 (struct svc_rqst*,struct svc_fh*,int ,int ,struct file**) ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_5, struct nfs_fh *VAR_6, struct file **VAR_7)
{
 __be32 VAR_8;
 struct svc_fh VAR_9;


 FUNC_0(&VAR_9,0);
 VAR_9.fh_handle.fh_size = VAR_6->size;
 FUNC_2((char*)&VAR_9.fh_handle.fh_base, VAR_6->data, VAR_6->size);
 VAR_9.fh_export = ((void*)0);

 VAR_8 = FUNC_3(VAR_5, &VAR_9, VAR_1, VAR_0, VAR_7);
 FUNC_1(&VAR_9);



 switch (VAR_8) {
 case 130:
  return 0;
 case 129:
  return VAR_2;
 case 128:
  return VAR_4;
 default:
  return VAR_3;
 }
}

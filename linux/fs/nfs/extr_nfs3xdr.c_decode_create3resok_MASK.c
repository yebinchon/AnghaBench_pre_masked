
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct user_namespace {int dummy; } ;
struct nfs3_diropres {int dir_attr; TYPE_2__* fattr; TYPE_1__* fh; } ;
struct TYPE_4__ {scalar_t__ valid; } ;
struct TYPE_3__ {scalar_t__ size; } ;


 int FUNC_0 (struct xdr_stream*,TYPE_2__*,struct user_namespace*) ;
 int FUNC_1 (struct xdr_stream*,TYPE_1__*) ;
 int FUNC_2 (struct xdr_stream*,int ,struct user_namespace*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_0,
          struct nfs3_diropres *VAR_1,
          struct user_namespace *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->fh);
 if (FUNC_3(VAR_3))
  goto out;
 VAR_3 = FUNC_0(VAR_0, VAR_1->fattr, VAR_2);
 if (FUNC_3(VAR_3))
  goto out;




 if (VAR_1->fh->size == 0)
  VAR_1->fattr->valid = 0;
 VAR_3 = FUNC_2(VAR_0, VAR_1->dir_attr, VAR_2);
out:
 return VAR_3;
}

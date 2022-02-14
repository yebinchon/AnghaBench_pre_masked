
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct qstr {int len; int name; } ;
struct nfs_renameargs {int new_dir; int old_dir; struct qstr* new_name; struct qstr* old_name; } ;


 int FUNC_0 (struct xdr_stream*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct rpc_rqst *VAR_0,
        struct xdr_stream *VAR_1,
        const void *VAR_2)
{
 const struct nfs_renameargs *VAR_3 = VAR_2;
 const struct qstr *VAR_4 = VAR_3->old_name;
 const struct qstr *VAR_5 = VAR_3->new_name;

 FUNC_0(VAR_1, VAR_3->old_dir, VAR_4->name, VAR_4->len);
 FUNC_0(VAR_1, VAR_3->new_dir, VAR_5->name, VAR_5->len);
}

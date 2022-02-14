
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {struct nfs_setaclres* rpc_resp; struct nfs_setaclargs* rpc_argp; int * rpc_proc; } ;
struct page {int dummy; } ;
struct nfs_setaclres {int seq_res; } ;
struct nfs_setaclargs {size_t acl_len; int seq_args; struct page** acl_pages; int fh; } ;
struct nfs_server {int client; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {int cache_validity; } ;


 unsigned int FUNC_0 (struct page**) ;
 unsigned int FUNC_1 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nfs_server* FUNC_4 (struct inode*) ;
 int VAR_7 ;
 int FUNC_5 (void const*,size_t,struct page**) ;
 int FUNC_6 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int) ;
 int FUNC_7 (struct inode*) ;
 int * VAR_8 ;
 int FUNC_8 (struct nfs_server*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_9, const void *VAR_10, size_t VAR_11)
{
 struct nfs_server *VAR_12 = FUNC_4(VAR_9);
 struct page *VAR_13[VAR_2];
 struct nfs_setaclargs VAR_14 = {
  .fh = FUNC_2(VAR_9),
  .acl_pages = VAR_13,
  .acl_len = VAR_11,
 };
 struct nfs_setaclres VAR_15;
 struct rpc_message VAR_16 = {
  .rpc_proc = &VAR_8[VAR_3],
  .rpc_argp = &VAR_14,
  .rpc_resp = &VAR_15,
 };
 unsigned int VAR_17 = FUNC_1(VAR_11, VAR_7);
 int VAR_18, VAR_19;

 if (!FUNC_8(VAR_12))
  return -VAR_0;
 if (VAR_17 > FUNC_0(VAR_13))
  return -VAR_1;
 VAR_19 = FUNC_5(VAR_10, VAR_11, VAR_14.acl_pages);
 if (VAR_19 < 0)
  return VAR_19;
 FUNC_7(VAR_9);
 VAR_18 = FUNC_6(VAR_12->client, VAR_12, &VAR_16, &VAR_14.seq_args, &VAR_15.seq_res, 1);





 for (; VAR_19 > 0; VAR_19--)
  FUNC_11(VAR_13[VAR_19-1]);





 FUNC_12(&VAR_9->i_lock);
 FUNC_3(VAR_9)->cache_validity |= VAR_4
  | VAR_5
  | VAR_6;
 FUNC_13(&VAR_9->i_lock);
 FUNC_9(VAR_9);
 FUNC_10(VAR_9);
 return VAR_18;
}

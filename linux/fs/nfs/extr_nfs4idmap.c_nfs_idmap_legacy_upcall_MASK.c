
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_msg {int dummy; } ;
struct request_key_auth {struct key* target_key; } ;
struct key {int description; } ;
struct idmap_msg {int dummy; } ;
struct idmap_legacy_upcalldata {int authkey; struct idmap* idmap; struct idmap_msg idmap_msg; struct rpc_pipe_msg pipe_msg; } ;
struct idmap {int idmap_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct key*,int) ;
 struct request_key_auth* FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (struct idmap_legacy_upcalldata*) ;
 struct idmap_legacy_upcalldata* FUNC_4 (int,int ) ;
 int FUNC_5 (struct idmap*,int) ;
 int FUNC_6 (int ,struct idmap*,struct idmap_msg*,struct rpc_pipe_msg*) ;
 int FUNC_7 (struct idmap*,struct idmap_legacy_upcalldata*) ;
 int FUNC_8 (int ,struct rpc_pipe_msg*) ;

__attribute__((used)) static int FUNC_9(struct key *VAR_4, void *VAR_5)
{
 struct idmap_legacy_upcalldata *VAR_6;
 struct request_key_auth *VAR_7 = FUNC_1(VAR_4);
 struct rpc_pipe_msg *VAR_8;
 struct idmap_msg *VAR_9;
 struct idmap *VAR_10 = (struct idmap *)VAR_5;
 struct key *VAR_11 = VAR_7->target_key;
 int VAR_12 = -VAR_1;

 if (!VAR_5)
  goto out1;


 VAR_12 = -VAR_2;
 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  goto out1;

 VAR_8 = &VAR_6->pipe_msg;
 VAR_9 = &VAR_6->idmap_msg;
 VAR_6->idmap = VAR_10;
 VAR_6->authkey = FUNC_2(VAR_4);

 VAR_12 = FUNC_6(VAR_11->description, VAR_10, VAR_9, VAR_8);
 if (VAR_12 < 0)
  goto out2;

 VAR_12 = -VAR_0;
 if (!FUNC_7(VAR_10, VAR_6))
  goto out2;

 VAR_12 = FUNC_8(VAR_10->idmap_pipe, VAR_8);
 if (VAR_12 < 0)
  FUNC_5(VAR_10, VAR_12);

 return VAR_12;
out2:
 FUNC_3(VAR_6);
out1:
 FUNC_0(VAR_4, VAR_12);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int dummy; } ;
typedef enum tls_offload_ctx_dir { ____Placeholder_tls_offload_ctx_dir } tls_offload_ctx_dir ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_net*,int ) ;
 scalar_t__ FUNC_1 (struct nfp_net*,int,int) ;
 int FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (struct nfp_net*) ;

__attribute__((used)) static int
FUNC_4(struct nfp_net *VAR_1, int VAR_2,
        enum tls_offload_ctx_dir VAR_3)
{
 int VAR_4 = 0;


 FUNC_2(VAR_1);
 if (FUNC_1(VAR_1, VAR_2, VAR_3)) {
  VAR_4 = FUNC_0(VAR_1, VAR_0);

  if (VAR_4)
   FUNC_1(VAR_1, -VAR_2, VAR_3);
 }
 FUNC_3(VAR_1);

 return VAR_4;
}

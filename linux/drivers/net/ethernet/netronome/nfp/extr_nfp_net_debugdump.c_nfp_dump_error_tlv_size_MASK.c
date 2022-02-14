
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_dump_tl {int length; } ;
struct nfp_dump_error {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nfp_dump_tl *VAR_0)
{
 return FUNC_0(sizeof(struct nfp_dump_error) + sizeof(*VAR_0) +
        FUNC_1(VAR_0->length));
}

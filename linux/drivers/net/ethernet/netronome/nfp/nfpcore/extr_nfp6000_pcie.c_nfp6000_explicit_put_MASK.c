
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_cpp_explicit {int dummy; } ;
struct nfp6000_explicit_priv {scalar_t__ data; } ;


 struct nfp6000_explicit_priv* FUNC_0 (struct nfp_cpp_explicit*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct nfp_cpp_explicit *VAR_0,
    const void *VAR_1, size_t VAR_2)
{
 struct nfp6000_explicit_priv *VAR_3 = FUNC_0(VAR_0);
 const u32 *VAR_4 = VAR_1;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 += sizeof(u32))
  FUNC_1(*(VAR_4++), VAR_3->data + VAR_5);

 return VAR_5;
}

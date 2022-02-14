
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_dump_tl {void* length; void* type; } ;
struct nfp_dump_state {scalar_t__ buf_size; scalar_t__ dumped_size; struct nfp_dump_tl* p; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(u32 VAR_1, u32 VAR_2, struct nfp_dump_state *VAR_3)
{
 struct nfp_dump_tl *VAR_4 = VAR_3->p;

 if (VAR_2 > VAR_3->buf_size)
  return -VAR_0;

 if (VAR_3->buf_size - VAR_2 < VAR_3->dumped_size)
  return -VAR_0;

 VAR_4->type = FUNC_0(VAR_1);
 VAR_4->length = FUNC_0(VAR_2 - sizeof(*VAR_4));

 VAR_3->dumped_size += VAR_2;
 VAR_3->p += VAR_2;

 return 0;
}

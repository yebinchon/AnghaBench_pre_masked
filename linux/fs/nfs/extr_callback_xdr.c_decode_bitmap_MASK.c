
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (struct xdr_stream*,unsigned int) ;

__attribute__((used)) static __be32 FUNC_5(struct xdr_stream *VAR_1, uint32_t *VAR_2)
{
 __be32 *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_4(VAR_1, 4);
 if (FUNC_3(VAR_3 == ((void*)0)))
  return FUNC_0(VAR_0);
 VAR_4 = FUNC_2(*VAR_3);
 VAR_3 = FUNC_4(VAR_1, VAR_4 << 2);
 if (FUNC_3(VAR_3 == ((void*)0)))
  return FUNC_0(VAR_0);
 if (FUNC_1(VAR_4 > 0))
  VAR_2[0] = FUNC_2(*VAR_3++);
 if (VAR_4 > 1)
  VAR_2[1] = FUNC_2(*VAR_3);
 return 0;
}

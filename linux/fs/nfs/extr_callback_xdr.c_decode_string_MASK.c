
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef unsigned int ssize_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct xdr_stream*,void**,size_t) ;

__attribute__((used)) static __be32 FUNC_2(struct xdr_stream *VAR_1, unsigned int *VAR_2,
  const char **VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;

 VAR_5 = FUNC_1(VAR_1, (void **)VAR_3, VAR_4);
 if (VAR_5 < 0)
  return FUNC_0(VAR_0);
 *VAR_2 = VAR_5;
 return 0;
}

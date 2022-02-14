
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef unsigned int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct xdr_stream*,void**,int ) ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_2, unsigned int *VAR_3, char **VAR_4)
{
 ssize_t VAR_5 = FUNC_1(VAR_2, (void **)VAR_4,
   VAR_1);
 if (FUNC_0(VAR_5 < 0))
  return -VAR_0;
 *VAR_3 = VAR_5;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct keygen_scheme {int dummy; } ;
struct fman_keygen {struct keygen_scheme* schemes; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct keygen_scheme *FUNC_0(struct fman_keygen *VAR_1,
     u8 VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);
 return &VAR_1->schemes[VAR_2];
}

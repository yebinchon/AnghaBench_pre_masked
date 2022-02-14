
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;


 int VAR_0 ;
 struct xattr_handler** VAR_1 ;
 char const* FUNC_0 (struct xattr_handler const*) ;

__attribute__((used)) static inline const char *FUNC_1(int VAR_2)
{
 const struct xattr_handler *VAR_3 = ((void*)0);

 if (VAR_2 > 0 && VAR_2 < VAR_0)
  VAR_3 = VAR_1[VAR_2];
 return VAR_3 ? FUNC_0(VAR_3) : ((void*)0);
}

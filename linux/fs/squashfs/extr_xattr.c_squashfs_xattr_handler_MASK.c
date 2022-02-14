
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 struct xattr_handler const VAR_2 ;
 struct xattr_handler const VAR_3 ;
 struct xattr_handler const VAR_4 ;

__attribute__((used)) static const struct xattr_handler *FUNC_0(int VAR_5)
{
 if (VAR_5 & ~(VAR_0 | VAR_1))

  return ((void*)0);

 switch (VAR_5 & VAR_0) {
 case 128:
  return &VAR_4;
 case 129:
  return &VAR_3;
 case 130:
  return &VAR_2;
 default:

  return ((void*)0);
 }
}

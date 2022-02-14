
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;







 struct xattr_handler VAR_0 ;
 struct xattr_handler VAR_1 ;
 struct xattr_handler VAR_2 ;
 struct xattr_handler VAR_3 ;
 struct xattr_handler VAR_4 ;

__attribute__((used)) static const struct xattr_handler *FUNC_0(int VAR_5) {
 const struct xattr_handler *VAR_6;

 switch (VAR_5) {
 case 128:
  VAR_6 = &VAR_2;
  break;
 case 129:
  VAR_6 = &VAR_1;
  break;
 default:
  VAR_6 = ((void*)0);
  break;
 }
 return VAR_6;
}

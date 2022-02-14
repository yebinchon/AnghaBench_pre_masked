
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int flags; void* mac_xcvr; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_7, const char *VAR_8)
{
 if (!FUNC_0(VAR_8, "mif")) {

  VAR_7->flags &= ~(VAR_5 |
          VAR_4);
  VAR_7->mac_xcvr = VAR_1;
 } else if (!FUNC_0(VAR_8, "xgf")) {

  VAR_7->flags |= (VAR_4 |
         VAR_5);
  VAR_7->mac_xcvr = VAR_3;
 } else if (!FUNC_0(VAR_8, "pcs")) {

  VAR_7->flags &= ~VAR_4;
  VAR_7->flags |= VAR_5;
  VAR_7->mac_xcvr = VAR_2;
 } else if (!FUNC_0(VAR_8, "xgc")) {

  VAR_7->flags |= VAR_4;
  VAR_7->flags &= ~VAR_5;
  VAR_7->mac_xcvr = VAR_3;
 } else if (!FUNC_0(VAR_8, "xgsd") || !FUNC_0(VAR_8, "gsd")) {

  VAR_7->flags |= VAR_4;
  VAR_7->flags &= ~VAR_5;
  VAR_7->flags |= VAR_6;
  VAR_7->mac_xcvr = VAR_3;
 } else {
  return -VAR_0;
 }
 return 0;
}

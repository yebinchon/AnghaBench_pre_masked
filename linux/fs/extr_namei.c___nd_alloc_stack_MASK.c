
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved {int dummy; } ;
struct nameidata {int flags; struct saved* stack; int internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct saved* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct saved*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct nameidata *VAR_6)
{
 struct saved *VAR_7;

 if (VAR_6->flags & VAR_4) {
  VAR_7= FUNC_0(VAR_5, sizeof(struct saved),
      VAR_2);
  if (FUNC_2(!VAR_7))
   return -VAR_0;
 } else {
  VAR_7= FUNC_0(VAR_5, sizeof(struct saved),
      VAR_3);
  if (FUNC_2(!VAR_7))
   return -VAR_1;
 }
 FUNC_1(VAR_7, VAR_6->internal, sizeof(VAR_6->internal));
 VAR_6->stack = VAR_7;
 return 0;
}

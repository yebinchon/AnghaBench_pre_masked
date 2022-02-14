
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;
struct nameidata {int dummy; } ;
struct filename {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct filename*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct filename*) ;
 int FUNC_2 (struct filename*,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nameidata*,unsigned int,struct path*) ;
 int FUNC_5 (struct filename*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nameidata*,int,struct filename*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(int VAR_5, struct filename *VAR_6, struct path *VAR_7,
   unsigned int VAR_8)
{
 struct nameidata VAR_9;
 int VAR_10;
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 FUNC_7(&VAR_9, VAR_5, VAR_6);
 VAR_10 = FUNC_4(&VAR_9, VAR_8 | VAR_3, VAR_7);
 if (FUNC_8(VAR_10 == -VAR_1))
  VAR_10 = FUNC_4(&VAR_9, VAR_8, VAR_7);
 if (FUNC_8(VAR_10 == -VAR_2))
  VAR_10 = FUNC_4(&VAR_9, VAR_8 | VAR_4, VAR_7);
 if (FUNC_3(!VAR_10))
  FUNC_2(VAR_6, VAR_7->dentry, VAR_0);
 FUNC_6();
 FUNC_5(VAR_6);
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct path {int dentry; } ;
struct nameidata {int last_type; struct qstr last; } ;
struct filename {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filename* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct filename*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (struct filename*,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nameidata*,unsigned int,struct path*) ;
 int FUNC_5 (struct filename*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nameidata*,int,struct filename*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct filename *FUNC_9(int VAR_5, struct filename *VAR_6,
    unsigned int VAR_7, struct path *VAR_8,
    struct qstr *VAR_9, int *VAR_10)
{
 int VAR_11;
 struct nameidata VAR_12;

 if (FUNC_1(VAR_6))
  return VAR_6;
 FUNC_7(&VAR_12, VAR_5, VAR_6);
 VAR_11 = FUNC_4(&VAR_12, VAR_7 | VAR_3, VAR_8);
 if (FUNC_8(VAR_11 == -VAR_1))
  VAR_11 = FUNC_4(&VAR_12, VAR_7, VAR_8);
 if (FUNC_8(VAR_11 == -VAR_2))
  VAR_11 = FUNC_4(&VAR_12, VAR_7 | VAR_4, VAR_8);
 if (FUNC_3(!VAR_11)) {
  *VAR_9 = VAR_12.last;
  *VAR_10 = VAR_12.last_type;
  FUNC_2(VAR_6, VAR_8->dentry, VAR_0);
 } else {
  FUNC_5(VAR_6);
  VAR_6 = FUNC_0(VAR_11);
 }
 FUNC_6();
 return VAR_6;
}

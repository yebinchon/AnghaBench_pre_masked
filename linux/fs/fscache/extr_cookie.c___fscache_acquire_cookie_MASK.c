
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_cookie_def {int type; int * name; } ;
struct fscache_cookie {int type; int flags; int n_children; TYPE_1__* def; } ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int FUNC_1 (char*,char*,int *,void*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct fscache_cookie*,int ) ;
 struct fscache_cookie* FUNC_5 (struct fscache_cookie*,struct fscache_cookie_def const*,void const*,size_t,void const*,size_t,void*,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct fscache_cookie*,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct fscache_cookie*) ;
 struct fscache_cookie* FUNC_8 (struct fscache_cookie*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct fscache_cookie*) ;
 int FUNC_12 (struct fscache_cookie*,int ,int) ;

struct fscache_cookie *FUNC_13(
 struct fscache_cookie *VAR_11,
 const struct fscache_cookie_def *VAR_12,
 const void *VAR_13, size_t VAR_14,
 const void *VAR_15, size_t VAR_16,
 void *VAR_17,
 loff_t VAR_18,
 bool VAR_19)
{
 struct fscache_cookie *VAR_20, *VAR_21;

 FUNC_0(!VAR_12);

 FUNC_1("{%s},{%s},%p,%u",
        VAR_11 ? (char *) VAR_11->def->name : "<no-parent>",
        VAR_12->name, VAR_17, VAR_19);

 if (!VAR_13 || !VAR_14 || VAR_14 > 255 || VAR_16 > 255)
  return ((void*)0);
 if (!VAR_15 || !VAR_16) {
  VAR_15 = ((void*)0);
  VAR_16 = 0;
 }

 FUNC_9(&VAR_3);


 if (!VAR_11) {
  FUNC_9(&VAR_5);
  FUNC_2(" [no parent]");
  return ((void*)0);
 }


 FUNC_0(!VAR_12->name[0]);

 FUNC_0(VAR_12->type == 128 &&
        VAR_11->type != 128);

 VAR_20 = FUNC_5(VAR_11, VAR_12,
      VAR_13, VAR_14,
      VAR_15, VAR_16,
      VAR_17, VAR_18);
 if (!VAR_20) {
  FUNC_9(&VAR_7);
  FUNC_2(" [ENOMEM]");
  return ((void*)0);
 }

 VAR_21 = FUNC_8(VAR_20);
 if (!VAR_21) {
  FUNC_12(VAR_20, VAR_1, 1);
  goto out;
 }

 if (VAR_21 == VAR_20)
  VAR_20 = ((void*)0);

 switch (VAR_21->type) {
 case 128:
  FUNC_9(&VAR_9);
  break;
 case 129:
  FUNC_9(&VAR_8);
  break;
 default:
  FUNC_9(&VAR_10);
  break;
 }

 FUNC_11(VAR_21);

 if (VAR_19) {



  if (VAR_21->type != 128) {
   if (FUNC_4(VAR_21, VAR_18) == 0) {
    FUNC_10(VAR_0, &VAR_21->flags);
   } else {
    FUNC_3(&VAR_11->n_children);
    FUNC_6(VAR_21,
         VAR_2);
    FUNC_9(&VAR_4);
    FUNC_2(" = NULL");
    return ((void*)0);
   }
  } else {
   FUNC_10(VAR_0, &VAR_21->flags);
  }
 }

 FUNC_9(&VAR_6);

out:
 FUNC_7(VAR_20);
 return VAR_21;
}

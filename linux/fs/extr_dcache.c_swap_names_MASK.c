
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long name; long hash_len; scalar_t__ len; } ;
struct dentry {long d_iname; TYPE_1__ d_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (long,long,scalar_t__) ;
 int FUNC_4 (long,long) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dentry *VAR_1, struct dentry *VAR_2)
{
 if (FUNC_5(FUNC_2(VAR_2))) {
  if (FUNC_5(FUNC_2(VAR_1))) {



   FUNC_4(VAR_2->d_name.name, VAR_1->d_name.name);
  } else {




   FUNC_3(VAR_2->d_iname, VAR_1->d_name.name,
     VAR_1->d_name.len + 1);
   VAR_1->d_name.name = VAR_2->d_name.name;
   VAR_2->d_name.name = VAR_2->d_iname;
  }
 } else {
  if (FUNC_5(FUNC_2(VAR_1))) {




   FUNC_3(VAR_1->d_iname, VAR_2->d_name.name,
     VAR_2->d_name.len + 1);
   VAR_2->d_name.name = VAR_1->d_name.name;
   VAR_1->d_name.name = VAR_1->d_iname;
  } else {



   unsigned int VAR_3;
   FUNC_0(!FUNC_1(VAR_0, sizeof(long)));
   for (VAR_3 = 0; VAR_3 < VAR_0 / sizeof(long); VAR_3++) {
    FUNC_4(((long *) &VAR_1->d_iname)[VAR_3],
         ((long *) &VAR_2->d_iname)[VAR_3]);
   }
  }
 }
 FUNC_4(VAR_1->d_name.hash_len, VAR_2->d_name.hash_len);
}

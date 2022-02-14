
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct qstr {unsigned int len; char const* name; } ;
struct nls_table {int (* char2uni ) (char const*,unsigned int,int *) ;} ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct nls_table* local_nls; } ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,unsigned int,int *) ;
 int FUNC_3 (char const*,int,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const struct dentry *VAR_0,
  unsigned int VAR_1, const char *VAR_2, const struct qstr *VAR_3)
{
 struct nls_table *VAR_4 = FUNC_0(VAR_0->d_sb)->local_nls;
 wchar_t VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9;







 if (VAR_3->len != VAR_1)
  return 1;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7 += VAR_8) {

  VAR_8 = VAR_4->char2uni(&VAR_2[VAR_7], VAR_1 - VAR_7, &VAR_5);
  VAR_9 = VAR_4->char2uni(&VAR_3->name[VAR_7], VAR_3->len - VAR_7, &VAR_6);





  if (FUNC_4(VAR_8 < 0 && VAR_9 < 0)) {
   if (VAR_2[VAR_7] != VAR_3->name[VAR_7])
    return 1;
   VAR_8 = 1;
   continue;
  }





  if (VAR_8 != VAR_9)
   return 1;


  if (FUNC_1(VAR_5) != FUNC_1(VAR_6))
   return 1;
 }

 return 0;
}

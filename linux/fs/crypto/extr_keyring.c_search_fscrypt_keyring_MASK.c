
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int dummy; } ;
struct key {int dummy; } ;
typedef int key_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct key* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct key* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct key_type*,char const*,int) ;
 int FUNC_6 (struct key*,int) ;

__attribute__((used)) static struct key *FUNC_7(struct key *VAR_3,
       struct key_type *VAR_4,
       const char *VAR_5)
{




 key_ref_t VAR_6 = FUNC_6(VAR_3, 1 );

 VAR_6 = FUNC_5(VAR_6, VAR_4, VAR_5, 0);
 if (FUNC_2(VAR_6)) {
  if (FUNC_3(VAR_6) == -VAR_0 ||
      FUNC_3(VAR_6) == -VAR_1)
   VAR_6 = FUNC_1(-VAR_2);
  return FUNC_0(VAR_6);
 }
 return FUNC_4(VAR_6);
}

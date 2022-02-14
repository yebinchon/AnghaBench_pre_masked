
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_mc_hash {int high; int low; } ;
struct zd_ioreq32 {int member_1; int member_0; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_ioreq32 const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct zd_chip*,struct zd_ioreq32 const*,int ) ;

int FUNC_2(struct zd_chip *VAR_2,
                        struct zd_mc_hash *VAR_3)
{
 const struct zd_ioreq32 VAR_4[] = {
  { VAR_0, VAR_3->low },
  { VAR_1, VAR_3->high },
 };

 return FUNC_1(VAR_2, VAR_4, FUNC_0(VAR_4));
}

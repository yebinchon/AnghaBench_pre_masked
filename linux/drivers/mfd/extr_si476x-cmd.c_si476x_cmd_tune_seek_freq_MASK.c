
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct si476x_core {int stc; int tuning; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct si476x_core*) ;
 int FUNC_3 (struct si476x_core*,int ,int const*,size_t,int *,size_t,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct si476x_core *VAR_1,
         uint8_t VAR_2,
         const uint8_t VAR_3[], size_t VAR_4,
         uint8_t *VAR_5, size_t VAR_6)
{
 int VAR_7;


 FUNC_1(&VAR_1->stc, 0);
 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_0);
 if (!VAR_7) {
  FUNC_4(VAR_1->tuning,
        FUNC_0(&VAR_1->stc));
  FUNC_2(VAR_1);
 }

 return VAR_7;
}

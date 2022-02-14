
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pnp_dev {int card; } ;
struct TYPE_3__ {int isapnp_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char,char,char) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (struct pnp_dev*) ;
 scalar_t__ FUNC_4 (struct pnp_dev*) ;
 int FUNC_5 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_6 (int *,int ,int ,int *) ;
 int FUNC_7 (struct pnp_dev*,int ) ;
 int FUNC_8 (struct pnp_dev*,int ) ;

__attribute__((used)) static int FUNC_9(struct pnp_dev **VAR_4)
{
 struct pnp_dev *VAR_5 = ((void*)0);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  VAR_5 =
   FUNC_6(((void*)0),
         FUNC_2('N', 'I', 'C'),
         FUNC_1(VAR_3[VAR_6].isapnp_id),
         ((void*)0));

  if (!VAR_5 || !VAR_5->card)
   continue;

  if (FUNC_4(VAR_5) < 0)
   continue;

  if (FUNC_3(VAR_5) < 0) {
   FUNC_5(VAR_5);
   return -VAR_0;
  }

  if (!FUNC_8(VAR_5, 0) ||
      !FUNC_7(VAR_5, 0)) {
   FUNC_5(VAR_5);
   return -VAR_2;
  }
  break;
 }
 if (VAR_6 == FUNC_0(VAR_3))
  return -VAR_1;
 *VAR_4 = VAR_5;
 return 0;
}

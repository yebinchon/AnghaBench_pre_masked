
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_info {int list; int vtermno; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 struct xencons_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct xencons_info* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(void)
{
 struct xencons_info *VAR_7;

 if (!FUNC_6())
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_3);
 if (!VAR_7) {
  VAR_7 = FUNC_1(sizeof(struct xencons_info), VAR_2);
  if (!VAR_7)
   return -VAR_1;
 }

 VAR_7->irq = FUNC_0(VAR_4, 0, 0);
 VAR_7->vtermno = VAR_3;

 FUNC_3(&VAR_5);
 FUNC_2(&VAR_7->list, &VAR_6);
 FUNC_4(&VAR_5);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_dev {int init_complete; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct allegro_dev *VAR_1,
          unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_2(&VAR_1->init_complete,
       FUNC_0(VAR_2));
 if (VAR_3 == 0)
  return -VAR_0;

 FUNC_1(&VAR_1->init_complete);
 return 0;
}

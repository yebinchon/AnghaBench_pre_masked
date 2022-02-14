
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;


 int FUNC_0 (struct path const*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;

bool FUNC_6(const struct path *VAR_1)
{
 unsigned VAR_2;
 bool VAR_3;

 if (!FUNC_1(VAR_1->dentry))
  return 0;

 FUNC_2();
 do {
  VAR_2 = FUNC_4(&VAR_0);
  VAR_3 = FUNC_0(VAR_1);
 } while (FUNC_5(&VAR_0, VAR_2));
 FUNC_3();

 return VAR_3;
}

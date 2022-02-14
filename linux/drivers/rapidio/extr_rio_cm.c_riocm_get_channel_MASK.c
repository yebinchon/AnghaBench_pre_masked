
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rio_channel {int ref; } ;


 int VAR_0 ;
 struct rio_channel* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct rio_channel *FUNC_4(u16 VAR_2)
{
 struct rio_channel *VAR_3;

 FUNC_2(&VAR_1);
 VAR_3 = FUNC_0(&VAR_0, VAR_2);
 if (VAR_3)
  FUNC_1(&VAR_3->ref);
 FUNC_3(&VAR_1);
 return VAR_3;
}

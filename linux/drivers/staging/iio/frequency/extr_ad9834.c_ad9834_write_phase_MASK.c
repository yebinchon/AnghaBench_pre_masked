
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad9834_state {int msg; int spi; int data; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ad9834_state *VAR_2,
         unsigned long VAR_3, unsigned long VAR_4)
{
 if (VAR_4 > FUNC_0(VAR_0))
  return -VAR_1;
 VAR_2->data = FUNC_1(VAR_3 | VAR_4);

 return FUNC_2(VAR_2->spi, &VAR_2->msg);
}

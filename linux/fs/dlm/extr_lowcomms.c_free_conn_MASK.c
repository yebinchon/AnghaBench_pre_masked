
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int list; struct connection* othercon; } ;


 int FUNC_0 (struct connection*,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct connection*) ;

__attribute__((used)) static void FUNC_3(struct connection *VAR_1)
{
 FUNC_0(VAR_1, 1, 1, 1);
 if (VAR_1->othercon)
  FUNC_2(VAR_0, VAR_1->othercon);
 FUNC_1(&VAR_1->list);
 FUNC_2(VAR_0, VAR_1);
}

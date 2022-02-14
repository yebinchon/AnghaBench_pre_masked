
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dev; } ;
struct urb {struct zd1201* context; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct zd1201 *VAR_1 = VAR_0->context;
 FUNC_0(VAR_1->dev);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sd {int dummy; } ;
struct TYPE_4__ {int data; int addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sd*,int ,int ) ;
 int FUNC_2 (struct sd*,int *,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  FUNC_1(VAR_2, VAR_0[VAR_4].addr, VAR_0[VAR_4].data);

 VAR_3 = FUNC_2(VAR_2, (u8 *) VAR_1,
      FUNC_0(VAR_1));
 return (VAR_3 < 0) ? VAR_3 : 0;
}

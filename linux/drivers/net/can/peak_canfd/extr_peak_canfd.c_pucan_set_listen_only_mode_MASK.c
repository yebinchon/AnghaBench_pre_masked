
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct peak_canfd_priv {TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct peak_canfd_priv*) ;
 int FUNC_2 (struct peak_canfd_priv*) ;

__attribute__((used)) static int FUNC_3(struct peak_canfd_priv *VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_1(VAR_2), VAR_1);
 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3)
  VAR_2->can.state = VAR_0;

 return VAR_3;
}

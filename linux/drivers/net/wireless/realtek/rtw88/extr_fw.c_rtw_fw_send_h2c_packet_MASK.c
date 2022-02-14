
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; int seq; } ;
struct rtw_dev {TYPE_1__ h2c; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rtw_dev*,char*) ;
 int FUNC_2 (struct rtw_dev*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_1, u8 *VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_1->h2c.lock);

 FUNC_0(VAR_2, VAR_1->h2c.seq);
 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_0);
 if (VAR_3)
  FUNC_1(VAR_1, "failed to send h2c packet\n");
 VAR_1->h2c.seq++;

 FUNC_4(&VAR_1->h2c.lock);
}

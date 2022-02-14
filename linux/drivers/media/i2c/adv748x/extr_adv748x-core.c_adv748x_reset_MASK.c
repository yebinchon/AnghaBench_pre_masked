
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adv748x_state {int txb; int txa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct adv748x_state*) ;
 int FUNC_1 (struct adv748x_state*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct adv748x_state*,int ) ;
 int FUNC_4 (struct adv748x_state*,int ,int ,int ) ;
 int FUNC_5 (struct adv748x_state*,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct adv748x_state *VAR_9)
{
 int VAR_10;
 u8 VAR_11 = 0;

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_9, VAR_7);
 if (VAR_10)
  return VAR_10;


 FUNC_2(&VAR_9->txa, 1);
 FUNC_2(&VAR_9->txa, 0);
 FUNC_2(&VAR_9->txb, 1);
 FUNC_2(&VAR_9->txb, 0);


 FUNC_5(VAR_9, VAR_5, VAR_6);


 if (FUNC_6(&VAR_9->txa))
  VAR_11 |= VAR_4;
 if (FUNC_6(&VAR_9->txb))
  VAR_11 |= VAR_3;
 FUNC_5(VAR_9, VAR_2, VAR_11);


 FUNC_4(VAR_9, VAR_0, VAR_1,
           VAR_1);

 return 0;
}

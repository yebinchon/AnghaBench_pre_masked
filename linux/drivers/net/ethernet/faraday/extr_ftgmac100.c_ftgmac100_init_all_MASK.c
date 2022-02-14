
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftgmac100 {scalar_t__ base; int netdev; int napi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ftgmac100*) ;
 int FUNC_1 (struct ftgmac100*) ;
 int FUNC_2 (struct ftgmac100*) ;
 int FUNC_3 (struct ftgmac100*) ;
 int FUNC_4 (struct ftgmac100*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ftgmac100 *VAR_2, bool VAR_3)
{
 int VAR_4 = 0;


 FUNC_3(VAR_2);


 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 && !VAR_3)
  return VAR_4;


 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_4(VAR_2);


 FUNC_6(&VAR_2->napi);
 FUNC_7(VAR_2->netdev);


 FUNC_5(VAR_0, VAR_2->base + VAR_1);

 return VAR_4;
}

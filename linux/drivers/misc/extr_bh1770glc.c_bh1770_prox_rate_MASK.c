
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh1770_chip {int prox_rate_threshold; int prox_rate; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct bh1770_chip *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = (VAR_3 == VAR_1) ?
  VAR_2->prox_rate_threshold : VAR_2->prox_rate;

 return FUNC_0(VAR_2->client,
     VAR_0,
     VAR_4);
}

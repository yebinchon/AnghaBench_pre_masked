
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh1770_chip {int prox_force_update; int client; int lux_rate_index; scalar_t__ prox_data; scalar_t__ prox_enable_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bh1770_chip*) ;
 int FUNC_1 (struct bh1770_chip*,int ) ;
 int FUNC_2 (struct bh1770_chip*,int ) ;
 int FUNC_3 (struct bh1770_chip*,int ) ;
 int FUNC_4 (struct bh1770_chip*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct bh1770_chip *VAR_6)
{
 if (VAR_6->prox_enable_count) {
  VAR_6->prox_force_update = 1;

  FUNC_1(VAR_6, VAR_6->lux_rate_index);
  FUNC_4(VAR_6);
  FUNC_0(VAR_6);
  FUNC_3(VAR_6, VAR_5);
  FUNC_2(VAR_6, VAR_1);
  FUNC_5(VAR_6->client,
     VAR_2, VAR_3);
 } else {
  VAR_6->prox_data = 0;
  FUNC_1(VAR_6, VAR_6->lux_rate_index);
  FUNC_2(VAR_6, VAR_0);
  FUNC_5(VAR_6->client,
     VAR_2, VAR_4);
 }
 return 0;
}

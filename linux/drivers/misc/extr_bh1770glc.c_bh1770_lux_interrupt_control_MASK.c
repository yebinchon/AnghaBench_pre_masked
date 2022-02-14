
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh1770_chip {int int_mode_lux; int int_mode_prox; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct bh1770_chip *VAR_1,
     int VAR_2)
{
 VAR_1->int_mode_lux = VAR_2;

 return FUNC_0(VAR_1->client,
     VAR_0,
     (VAR_2 << 1) | VAR_1->int_mode_prox);
}

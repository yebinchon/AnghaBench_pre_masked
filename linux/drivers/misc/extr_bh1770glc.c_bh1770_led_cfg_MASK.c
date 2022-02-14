
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh1770_chip {int prox_led; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct bh1770_chip *VAR_3)
{

 return FUNC_0(VAR_3->client,
     VAR_0,
     (VAR_1 << 6) |
     (VAR_2 << 3) |
     VAR_3->prox_led);
}

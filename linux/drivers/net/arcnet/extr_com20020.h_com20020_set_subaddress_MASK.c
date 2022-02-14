
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arcnet_local {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct arcnet_local *VAR_2,
        int VAR_3, int VAR_4)
{
 if (VAR_4 < 4) {
  VAR_2->config = (VAR_2->config & ~0x03) | VAR_4;
  FUNC_0(VAR_2->config, VAR_3, VAR_0);
 } else {
  FUNC_0(VAR_4, VAR_3, VAR_1);
 }
}

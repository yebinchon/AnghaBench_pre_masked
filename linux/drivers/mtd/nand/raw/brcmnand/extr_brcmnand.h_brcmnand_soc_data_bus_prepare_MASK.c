
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmnand_soc {int (* prepare_data_bus ) (struct brcmnand_soc*,int,int) ;} ;


 int FUNC_0 (struct brcmnand_soc*,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct brcmnand_soc *VAR_0,
       bool VAR_1)
{
 if (VAR_0 && VAR_0->prepare_data_bus)
  VAR_0->prepare_data_bus(VAR_0, 1, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvaser_pciefd {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct kvaser_pciefd *VAR_1, int VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->reg_base + VAR_0,
     VAR_3, VAR_3 & VAR_2, 0, 10);

 return VAR_4;
}

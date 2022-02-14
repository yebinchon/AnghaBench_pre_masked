
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct brcms_c_info {TYPE_1__* stf; } ;
struct TYPE_2__ {int phytxant; int txchain; scalar_t__ txant; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct brcms_c_info *VAR_4,
           u32 VAR_5)
{
 u16 VAR_6 = VAR_4->stf->phytxant;

 if (FUNC_0(VAR_5) != VAR_1)
  VAR_6 = VAR_4->stf->txchain << VAR_3;
 else if (VAR_4->stf->txant == VAR_0)
  VAR_6 = VAR_4->stf->txchain << VAR_3;
 VAR_6 &= VAR_2;
 return VAR_6;
}

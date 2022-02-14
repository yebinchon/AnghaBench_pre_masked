
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skge_hw {scalar_t__ chip_id; scalar_t__ copper; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct skge_hw const*) ;

__attribute__((used)) static u32 FUNC_1(const struct skge_hw *VAR_10)
{
 u32 VAR_11;

 if (VAR_10->copper) {
  VAR_11 = (VAR_6 |
        VAR_5 |
        VAR_4 |
        VAR_3 |
        VAR_2 |
        VAR_1 |
        VAR_7 |
        VAR_9);

  if (FUNC_0(VAR_10))
   VAR_11 &= ~(VAR_6 |
           VAR_5 |
           VAR_4 |
           VAR_3);

  else if (VAR_10->chip_id == VAR_0)
   VAR_11 &= ~VAR_2;
 } else
  VAR_11 = (VAR_1 |
        VAR_2 |
        VAR_8 |
        VAR_7);

 return VAR_11;
}

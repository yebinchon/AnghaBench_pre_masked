
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_device {scalar_t__ speed; scalar_t__ duplex; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct slic_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct slic_device *VAR_14)
{
 u32 VAR_15;

 if (VAR_14->speed == VAR_13) {
  VAR_15 = VAR_3 << VAR_4 |
        VAR_6 << VAR_7 |
        VAR_9 << VAR_10 |
        VAR_11;
 } else {
  VAR_15 = VAR_2 << VAR_4 |
        VAR_5 << VAR_7 |
        VAR_8 << VAR_10;
 }

 if (VAR_14->duplex == VAR_0)
  VAR_15 |= VAR_1;

 FUNC_0(VAR_14, VAR_12, VAR_15);
}

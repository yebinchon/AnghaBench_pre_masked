
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_device {scalar_t__ duplex; scalar_t__ promisc; } ;


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
 int FUNC_0 (struct slic_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct slic_device *VAR_10)
{
 u32 VAR_11;

 VAR_11 = VAR_8 | VAR_1 | VAR_7 |
       VAR_3 << VAR_4 | VAR_6;

 if (VAR_10->duplex == VAR_0)
  VAR_11 |= VAR_2;

 if (VAR_10->promisc)
  VAR_11 |= VAR_5;

 FUNC_0(VAR_10, VAR_9, VAR_11);
}

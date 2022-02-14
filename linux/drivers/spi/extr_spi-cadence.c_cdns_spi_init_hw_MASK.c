
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cdns_spi {scalar_t__ is_decoded_cs; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct cdns_spi*,int ) ;
 int FUNC_1 (struct cdns_spi*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cdns_spi *VAR_11)
{
 u32 VAR_12 = VAR_1;

 if (VAR_11->is_decoded_cs)
  VAR_12 |= VAR_2;

 FUNC_1(VAR_11, VAR_3, VAR_4);
 FUNC_1(VAR_11, VAR_6, VAR_8);


 while (FUNC_0(VAR_11, VAR_7) & VAR_9)
  FUNC_0(VAR_11, VAR_10);

 FUNC_1(VAR_11, VAR_7, VAR_8);
 FUNC_1(VAR_11, VAR_0, VAR_12);
 FUNC_1(VAR_11, VAR_3, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct faraday_pci {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct faraday_pci *VAR_5, int VAR_6,
      unsigned int VAR_7, int VAR_8, int VAR_9,
      u32 VAR_10)
{
 int VAR_11 = VAR_1;

 FUNC_7(FUNC_0(VAR_6) |
   FUNC_1(FUNC_5(VAR_7)) |
   FUNC_2(FUNC_4(VAR_7)) |
   FUNC_3(VAR_8) |
   VAR_3,
   VAR_5->base + VAR_2);

 switch (VAR_9) {
 case 4:
  FUNC_7(VAR_10, VAR_5->base + VAR_4);
  break;
 case 2:
  FUNC_8(VAR_10, VAR_5->base + VAR_4 + (VAR_8 & 3));
  break;
 case 1:
  FUNC_6(VAR_10, VAR_5->base + VAR_4 + (VAR_8 & 3));
  break;
 default:
  VAR_11 = VAR_0;
 }

 return VAR_11;
}

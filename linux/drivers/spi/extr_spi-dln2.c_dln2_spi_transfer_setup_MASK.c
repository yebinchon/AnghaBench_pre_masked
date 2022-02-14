
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct dln2_spi {scalar_t__ speed; scalar_t__ mode; scalar_t__ bpw; } ;


 int FUNC_0 (struct dln2_spi*,int) ;
 int FUNC_1 (struct dln2_spi*,scalar_t__) ;
 int FUNC_2 (struct dln2_spi*,scalar_t__) ;
 int FUNC_3 (struct dln2_spi*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dln2_spi *VAR_0, u32 VAR_1,
       u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 bool VAR_5;

 VAR_5 = VAR_0->speed != VAR_1 || VAR_0->mode != VAR_3 ||
      VAR_0->bpw != VAR_2;

 if (!VAR_5)
  return 0;

 VAR_4 = FUNC_0(VAR_0, 0);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_0->speed != VAR_1) {
  VAR_4 = FUNC_3(VAR_0, VAR_1);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_0->speed = VAR_1;
 }

 if (VAR_0->mode != VAR_3) {
  VAR_4 = FUNC_2(VAR_0, VAR_3 & 0x3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_0->mode = VAR_3;
 }

 if (VAR_0->bpw != VAR_2) {
  VAR_4 = FUNC_1(VAR_0, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_0->bpw = VAR_2;
 }

 return FUNC_0(VAR_0, 1);
}

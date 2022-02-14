
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int frequency; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static u8 FUNC_1(struct dvb_frontend *VAR_0)
{
 u8 VAR_1 = 20;
 u32 VAR_2, VAR_3, VAR_4, VAR_5 = 0;
 u8 VAR_6;

 for (VAR_6 = 17; VAR_6 <= 20; VAR_6++) {
  VAR_2 = 12 * VAR_6 * (1 << 8) / 16;
  VAR_3 = ((VAR_0->dtv_property_cache.frequency / 1000) * (1 << 8) / 1000) / VAR_2;
  VAR_4 = ((VAR_0->dtv_property_cache.frequency / 1000) * (1 << 8) / 1000) - VAR_3 * VAR_2;

  if (VAR_4 > VAR_2 / 2)
   VAR_4 = VAR_2 - VAR_4;
  FUNC_0("PLL ratio=%i rest=%i\n", VAR_6, VAR_4);
  if ((VAR_4 > VAR_5) && (VAR_4 > 717)) {
   VAR_1 = VAR_6;
   VAR_5 = VAR_4;
  }
 }
 FUNC_0("optimal PLL ratio=%i\n", VAR_1);

 return VAR_1;
}

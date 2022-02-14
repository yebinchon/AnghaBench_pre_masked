
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7280_state {int * buf; int spi; int crc_tab; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ad7280_state *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2, bool VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_1 << 27 | VAR_2 << 21 |
   (VAR_4 & 0xFF) << 13 | VAR_3 << 12;

 VAR_5 |= FUNC_0(VAR_0->crc_tab, VAR_5 >> 11) << 3 | 0x2;
 VAR_0->buf[0] = FUNC_1(VAR_5);

 return FUNC_2(VAR_0->spi, &VAR_0->buf[0], 4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7280_state {int crc_tab; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ad7280_state *VAR_1, unsigned int VAR_2)
{
 unsigned char VAR_3 = FUNC_0(VAR_1->crc_tab, VAR_2 >> 10);

 if (VAR_3 != ((VAR_2 >> 2) & 0xFF))
  return -VAR_0;

 return 0;
}

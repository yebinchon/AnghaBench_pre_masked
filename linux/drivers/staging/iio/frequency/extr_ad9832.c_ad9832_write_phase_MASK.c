
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad9832_state {int phase_msg; int spi; void** phase_data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct ad9832_state *VAR_6,
         unsigned long VAR_7, unsigned long VAR_8)
{
 if (VAR_8 > FUNC_0(VAR_2))
  return -VAR_5;

 VAR_6->phase_data[0] = FUNC_1((VAR_1 << VAR_4) |
     (VAR_7 << VAR_3) |
     ((VAR_8 >> 8) & 0xFF));
 VAR_6->phase_data[1] = FUNC_1((VAR_0 << VAR_4) |
     ((VAR_7 - 1) << VAR_3) |
     (VAR_8 & 0xFF));

 return FUNC_2(VAR_6->spi, &VAR_6->phase_msg);
}

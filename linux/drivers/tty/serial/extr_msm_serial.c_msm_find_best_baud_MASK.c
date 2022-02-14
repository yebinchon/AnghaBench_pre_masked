
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct msm_port {int clk; } ;
struct msm_baud_map {int member_0; int member_1; int member_2; unsigned int divisor; } ;


 int FUNC_0 (struct msm_baud_map const*) ;
 unsigned int FUNC_1 (unsigned long,int) ;
 struct msm_port* FUNC_2 (struct uart_port*) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_3 (unsigned int) ;
 unsigned long FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static const struct msm_baud_map *
FUNC_5(struct uart_port *VAR_1, unsigned int VAR_2,
     unsigned long *VAR_3)
{
 struct msm_port *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9 = 0, VAR_10, VAR_11 = VAR_0;
 const struct msm_baud_map *VAR_12, *VAR_13, *VAR_14;
 static const struct msm_baud_map VAR_15[] = {
  { 1, 0xff, 31 },
  { 2, 0xee, 16 },
  { 3, 0xdd, 8 },
  { 4, 0xcc, 6 },
  { 6, 0xbb, 6 },
  { 8, 0xaa, 6 },
  { 12, 0x99, 6 },
  { 16, 0x88, 1 },
  { 24, 0x77, 1 },
  { 32, 0x66, 1 },
  { 48, 0x55, 1 },
  { 96, 0x44, 1 },
  { 192, 0x33, 1 },
  { 384, 0x22, 1 },
  { 768, 0x11, 1 },
  { 1536, 0x00, 1 },
 };

 VAR_14 = VAR_15;
 VAR_7 = FUNC_4(VAR_4->clk, 16 * VAR_2);
 VAR_5 = FUNC_1(VAR_7, 16 * VAR_2);

 VAR_13 = VAR_15 + FUNC_0(VAR_15);
 VAR_12 = VAR_15;
 while (VAR_12 < VAR_13) {
  if (VAR_12->divisor <= VAR_5) {
   VAR_6 = VAR_7 / VAR_12->divisor / 16;
   VAR_10 = FUNC_3(VAR_6 - VAR_2);


   if (VAR_10 < VAR_11) {
    VAR_11 = VAR_10;
    VAR_14 = VAR_12;
    VAR_9 = VAR_7;
   }

   if (VAR_6 == VAR_2)
    break;
  } else if (VAR_12->divisor > VAR_5) {
   VAR_8 = VAR_7;
   VAR_7 = FUNC_4(VAR_4->clk, VAR_8 + 1);




   if (VAR_7 == VAR_8)
    break;


   VAR_12 = VAR_15;
   VAR_5 = FUNC_1(VAR_7, 16 * VAR_2);
   continue;
  }
  VAR_12++;
 }

 *VAR_3 = VAR_9;
 return VAR_14;
}
